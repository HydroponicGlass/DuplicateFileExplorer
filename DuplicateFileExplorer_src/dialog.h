#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;

private slots:
    void GetDialogData(const QString fileName);
    void on_overwrite_btn_clicked();
    void on_skip_btn_clicked();

signals:
    void SetDialogButtonData(bool);
};

#endif // DIALOG_H
