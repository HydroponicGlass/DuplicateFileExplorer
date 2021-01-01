#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Warning");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::GetDialogData(const QString name)
{
    ui->status_lbl->setText(name);
}

void Dialog::on_overwrite_btn_clicked()
{

    emit SetDialogButtonData(true);
}

void Dialog::on_skip_btn_clicked()
{
    emit SetDialogButtonData(false);
}
