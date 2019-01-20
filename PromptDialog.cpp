#include "PromptDialog.h"
#include "ui_PromptDialog.h"
#include <QMessageBox>

PromptDialog::PromptDialog(QWidget *parent) :
    QDialog(parent, Qt::FramelessWindowHint),
    ui(new Ui::PromptDialog)
{
    ui->setupUi(this);
    ui->confirmButton->setFocus();
}

PromptDialog::~PromptDialog()
{
    delete ui;
}

void PromptDialog::on_closeButton_clicked()
{
    close();
}

void PromptDialog::on_cancelButton_clicked()
{
    close();
}

void PromptDialog::on_confirmButton_clicked()
{
    QMessageBox::information(this, QStringLiteral("通知"), QStringLiteral("你已退出此群"));
    close();
}
