#ifndef PROMPTDIALOG_H
#define PROMPTDIALOG_H

#include <QDialog>

namespace Ui {
class PromptDialog;
}

class PromptDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PromptDialog(QWidget *parent = nullptr);
    ~PromptDialog();

private slots:
    void on_closeButton_clicked();

    void on_cancelButton_clicked();

    void on_confirmButton_clicked();

private:
    Ui::PromptDialog *ui;
};

#endif // PROMPTDIALOG_H
