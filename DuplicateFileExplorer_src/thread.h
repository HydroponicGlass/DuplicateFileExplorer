#ifndef THREAD_H
#define THREAD_H

#include "fileinfo.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QCryptographicHash>
#include <QFileDialog>
#include <QDateTime>
#include <QDebug>
#include <vector>
#include <QThread>
#include <QDirIterator>

class Thread : public QThread
{
    Q_OBJECT

public:
    explicit Thread(QObject *parent = 0);

private:
    // Ui::MainWindow *ui;

    QString searchLocation_g;
    bool quickDuplicateCheck_chk_g = false;
    std::vector<fileInfo>allFileList_g;

    void run();
    qint64 GetFileCount(QString location);
    void NormalDuplicateCheck(std::vector<fileInfo> &fileList, fileInfo *currentFile);
    void QuickDuplicateCheck(std::vector<fileInfo> &fileList, fileInfo *currentFile);
    void MakeFileList(std::vector<fileInfo> &fileList, QString location, bool quickDuplicateCheck, qint64 fileNumber, qint64 *fileNumberCount);

private slots:
    void GetUiData(const QString searchLocation, const bool quickDuplicateCheck_chk);

signals:
    void SetFileData(const fileInfo file);
    void SetProgressData(const double progressPercent);
};

#endif // THREAD_H
