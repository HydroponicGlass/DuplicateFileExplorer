#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("DuplicateFileExplorer");
    ui->result_table->setColumnWidth(0, 5); // Index, WidthSize
    ui->result_table->setColumnWidth(1, 150);
    ui->result_table->setColumnWidth(2, 50);
    ui->result_table->setColumnWidth(3, 80);
}

MainWindow::~MainWindow()
{
    delete ui;
    thread->terminate();
}

void MainWindow::mainInit()
{
    thread = new Thread(this);
    connect(this, SIGNAL(SetUiData(QString, bool)), thread, SLOT(GetUiData(QString, bool)));
    qRegisterMetaType<fileInfo>("fileInfo"); // If there is no this line, below line occurs error.
    connect(thread, SIGNAL(SetFileData(fileInfo)), this, SLOT(GetFileData(fileInfo)));
    connect(thread, SIGNAL(SetProgressData(double)), this, SLOT(GetProgressData(double)));

    dialog = new Dialog(this);
    dialog->setModal(true);
    connect(dialog, SIGNAL(SetDialogButtonData(bool)), this, SLOT(GetDialogButtonData(bool)));
    connect(this, SIGNAL(SetDialogData(QString)), dialog, SLOT(GetDialogData(QString)));

    DuplicateFileList_g.clear();
    ui->result_table->setRowCount(0);
}

void MainWindow::GetFileData(const fileInfo file)
{
    DuplicateFileList_g.push_back(file);
    PrintFileList(file);
}

void::MainWindow::GetProgressData(const double progressPercent)
{
    double data = progressPercent;
    if(data == 100)
    {
        ui->status_lbl->setStyleSheet("Color : default");
        ui->status_lbl->setText("Search Complete");
    }
    else
    {
        ui->status_lbl->setStyleSheet("Color : default");
        ui->status_lbl->setText("Searching : " + QString::number(data) + '%');
    }
}

void::MainWindow::GetDialogButtonData(const bool dialogButton)
{
    // qDebug()<<"[Test] dialog connect";
    dialogButton_g = dialogButton;
    dialog->close();
    //delete dialog;
}

void MainWindow::PrintFileList(fileInfo file)
{
    // qDebug()<< file_loop.name << file_loop.checkDuplicate;
    QTableWidgetItem *uiCheck = new QTableWidgetItem;
    uiCheck->setCheckState(Qt::Unchecked);
    ui->result_table->insertRow(ui->result_table->rowCount());
    ui->result_table->setItem(ui->result_table->rowCount()-1, 0, uiCheck); // row, column, content
    ui->result_table->setItem(ui->result_table->rowCount()-1, 1, new QTableWidgetItem(file.name));
    ui->result_table->setItem(ui->result_table->rowCount()-1, 2, new QTableWidgetItem(QString::number(file.size)));
    ui->result_table->setItem(ui->result_table->rowCount()-1, 3, new QTableWidgetItem(file.date));
    ui->result_table->setItem(ui->result_table->rowCount()-1, 4, new QTableWidgetItem(file.location));
}

void MainWindow::UpdateFileList(std::vector<fileInfo> &fileList)
{
    std::vector<fileInfo>::iterator iter;
    for(iter = fileList.begin(); iter != fileList.end(); )
    {
        if((*iter).uiCheck == true)
        {
            iter = fileList.erase(iter);
            ui->result_table->removeRow(iter-fileList.begin());
        }
        else
        {
            iter++;
        }
    }
}

void MainWindow::on_search_btn_clicked()
{
    mainInit();

    if(searchLocation_g.isNull() == true)
    {
        ui->status_lbl->setStyleSheet("Color : red");
        ui->status_lbl->setText("Enter Search Location");
    }
    else
    {
        ui->status_lbl->setText("Please wait");
        emit SetUiData(searchLocation_g, ui->quickDuplicateCheck_chk->isChecked());  // Send to thread
        thread->start();
    }
}

void MainWindow::on_searchLocation_btn_clicked()
{
    QString searchLocation = QFileDialog::getExistingDirectory(this, "Search Folder", QDir::homePath(),QFileDialog::ShowDirsOnly);
    ui->searchLocation_txt->setPlainText(searchLocation);
    searchLocation_g = searchLocation;
}

void MainWindow::on_saveLocation_btn_clicked()
{
    QString saveLocation = QFileDialog::getExistingDirectory(this, "Save Folder", QDir::homePath(),QFileDialog::ShowDirsOnly);
    ui->saveLocation_txt->setPlainText(saveLocation);
    saveLocation_g = saveLocation;
}

void MainWindow::on_remove_btn_clicked()
{
    if(DuplicateFileList_g.empty() == true)
    {
        ui->status_lbl->setStyleSheet("Color : red");
        ui->status_lbl->setText("There are no results to be search");
    }
    else
    {
        qint64 selectedFileCount = 0;
        for (auto file_loop : DuplicateFileList_g)
        {
            if(file_loop.uiCheck == true)
            {
                qDebug() << file_loop.absoluteFilePath;
                selectedFileCount++;
                QFile::moveToTrash(file_loop.absoluteFilePath);
            }
        }

        UpdateFileList(DuplicateFileList_g);
        if(selectedFileCount == 1)
        {
            ui->status_lbl->setStyleSheet("Color : default");
            ui->status_lbl->setText(QString::number(selectedFileCount) + " file is removed");
        }
        else
        {
            ui->status_lbl->setStyleSheet("Color : default");
            ui->status_lbl->setText(QString::number(selectedFileCount) + " files are removed");
        }
    }
}

void MainWindow::on_move_btn_clicked()
{
    if(saveLocation_g.isNull() == true)
    {
        ui->status_lbl->setStyleSheet("Color : red");
        ui->status_lbl->setText("Enter Save Location");
    }
    else if(DuplicateFileList_g.empty() == true)
    {
        ui->status_lbl->setStyleSheet("Color : red");
        ui->status_lbl->setText("There are no results to be search");
    }
    else
    {
        qint64 selectedFileCount = 0;
        for(auto file_loop : DuplicateFileList_g)
        {
            if(file_loop.uiCheck == true)
            {
                qDebug() << file_loop.absoluteFilePath;
                selectedFileCount++;
                if(QFile::exists(saveLocation_g+"\\"+file_loop.name) == true)
                {
                    emit SetDialogData(file_loop.name);
                    dialog->exec();
                    if(dialogButton_g == true) // Overwrite button
                    {
                        QFile::rename(file_loop.absoluteFilePath, saveLocation_g+"\\"+file_loop.name);
                        QFile::remove(file_loop.absoluteFilePath);
                    }
                    else // Skip button
                    {
                        selectedFileCount--;
                        file_loop.uiCheck = false;
                    }
                }
                else
                {
                    QFile::rename(file_loop.absoluteFilePath, saveLocation_g+"\\"+file_loop.name);
                }

            }
        }

        UpdateFileList(DuplicateFileList_g);

        if(selectedFileCount == 1)
        {
            ui->status_lbl->setStyleSheet("Color : default");
            ui->status_lbl->setText(QString::number(selectedFileCount) + " file is moved");
        }
        else
        {
            ui->status_lbl->setStyleSheet("Color : default");
            ui->status_lbl->setText(QString::number(selectedFileCount) + " files are moved");
        }
    }
}

void MainWindow::on_result_table_itemChanged(QTableWidgetItem *item)
{
    // get to checkbox change
    if(item->column() == 0)
    {
        // qDebug()<<item->checkState();
        if(item->checkState() == Qt::Checked)
        {
            DuplicateFileList_g[item->row()].uiCheck = true;
        }
        else
        {
            DuplicateFileList_g[item->row()].uiCheck = false;
        }
    }
}
