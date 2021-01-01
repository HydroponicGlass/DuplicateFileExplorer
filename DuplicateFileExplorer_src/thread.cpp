#include "thread.h"

Thread::Thread(QObject *parent) :
    QThread(parent)
{

}
void Thread::run()
{
    qint64 fileNumber = GetFileCount(searchLocation_g);
    qint64 fileNumberCount = 0;
    if(fileNumber == 0)
    {
        emit SetProgressData(100);
    }
    else
    {
        MakeFileList(allFileList_g, searchLocation_g, quickDuplicateCheck_chk_g, fileNumber, &fileNumberCount);
    }

}

void Thread::GetUiData(const QString searchLocation, const bool quickDuplicateCheck_chk)
{
    searchLocation_g = searchLocation;
    quickDuplicateCheck_chk_g = quickDuplicateCheck_chk;
}

qint64 Thread::GetFileCount(QString location)
{
    int fileNumber = 0;
    QDirIterator it(location, QDir::Files, QDirIterator::Subdirectories);
    while (it.hasNext())
    {
        if(it.next() > 0 )
        {
            fileNumber++;
        }
    }
    // qDebug() << fileNumber;

    return fileNumber;
}

void Thread::NormalDuplicateCheck(std::vector<fileInfo> &fileList, fileInfo *currentFile)
{
    for(unsigned long long file_loop = 0; file_loop < fileList.size(); file_loop++)
    {
        if(fileList[file_loop].checksum == currentFile->checksum)
        {
            //qDebug()<<currentFile.name;
            if(fileList[file_loop].checkDuplicate == false)
            {
                fileList[file_loop].checkDuplicate = true;
                emit SetFileData(fileList[file_loop]); // Send to mainwindow to ui(result table) update
            }
            currentFile->checkDuplicate = true;
            emit SetFileData(*currentFile); // Send to mainwindow to ui(result table) update
            break;
        }
    }
}

void Thread::QuickDuplicateCheck(std::vector<fileInfo> &fileList, fileInfo *currentFile)
{
    for(unsigned long long file_loop = 0; file_loop < fileList.size(); file_loop++)
    {
        if(fileList[file_loop].name == currentFile->name && fileList[file_loop].size == currentFile->size)
        {
            //qDebug()<<currentFile.name;
            if(fileList[file_loop].checkDuplicate == false)
            {
                fileList[file_loop].checkDuplicate = true;
                emit SetFileData(fileList[file_loop]); // Send to mainwindow to ui(result table) update
            }
            currentFile->checkDuplicate = true;
            emit SetFileData(*currentFile); // Send to mainwindow to ui(result table) update
            break;
        }
    }
}

void Thread::MakeFileList(std::vector<fileInfo> &fileList, QString location, bool quickDuplicateCheck, qint64 fileNumber, qint64 *fileNumberCount)
{
    QDir dir(location);
    foreach(QFileInfo item, dir.entryInfoList(QDir::NoDotAndDotDot|QDir::AllEntries) )
    {
        fileInfo currentFile;
        currentFile.name = item.fileName();
        currentFile.size = item.size()/1000; // byte to kbyte
        currentFile.date = item.birthTime().toString("yyyy-MM-dd");
        currentFile.location = item.absoluteFilePath();
        currentFile.absoluteFilePath = item.absoluteFilePath();
        qDebug()<< currentFile.name << " | " << currentFile.absoluteFilePath;

        /*  input checksum(MD5) */
        if(quickDuplicateCheck_chk_g == false)
        {
            QFile file(currentFile.absoluteFilePath);
            if (file.open(QIODevice::ReadOnly)) {
                QByteArray fileData = file.readAll();
                QByteArray hashData = QCryptographicHash::hash(fileData, QCryptographicHash::Md5);

                // qDebug() << hashData.toHex() <<" " << currentFile.name;
                currentFile.checksum = hashData.toHex();
            }
            else
            {
                // Error
            }
        }

        if(item.isDir() == true)
        {
            MakeFileList(fileList, currentFile.location, quickDuplicateCheck, fileNumber, fileNumberCount);
        }
        else if(item.isFile() == true)
        {
            if(quickDuplicateCheck == true)
            {
                QuickDuplicateCheck(fileList, &currentFile); // input checkDuplicate
            }
            else
            {
                NormalDuplicateCheck(fileList, &currentFile); // input checkDuplicate
            }
            *fileNumberCount = *fileNumberCount + 1;
            emit SetProgressData((double)*fileNumberCount/fileNumber*100);
            fileList.push_back(currentFile);
        }
    }
}
