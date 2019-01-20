#include "Widget.h"
#include "ui_Widget.h"
#include "PromptDialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_promptDialogButton_clicked()
{
    PromptDialog dialog;
    dialog.exec();
}
