#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "fileinfo.h"
#include "ui_mainwindow.h"
#include "thread.h"
#include "dialog.h"

#include <QMainWindow>
// #include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Thread *thread;
    Dialog *dialog;

    std::vector<fileInfo>DuplicateFileList_g;
    QString searchLocation_g;
    QString saveLocation_g;
    bool dialogButton_g = false;

    void mainInit();
    void PrintFileList(fileInfo file);
    void UpdateFileList(std::vector<fileInfo> &fileList);

private slots:
    void on_searchLocation_btn_clicked();
    void on_saveLocation_btn_clicked();
    void on_search_btn_clicked();
    void on_remove_btn_clicked();
    void on_move_btn_clicked();
    void on_result_table_itemChanged(QTableWidgetItem *item);
    void GetFileData(const fileInfo file);
    void GetProgressData(const double progressPercent);
    void GetDialogButtonData(const bool);

signals:
    void SetUiData(const QString searchLocation, const bool quickDuplicateCheck_chk);
    void SetDialogData(const QString fileName);

};
#endif // MAINWINDOW_H
