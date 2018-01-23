#include <QMessageBox>
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    m_bFlag = false;
    ui->pushButton->setText("show");
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showText()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::showText()
{
    if (m_bFlag)
    {
        ui->pushButton->setText("show");
        ui->textEdit->clear();
        QMessageBox::information(this, "Info", "clear text info ok!");
    }
    else
    {
        ui->pushButton->setText("clear");
        ui->textEdit->setText("hi qu88nb, welcome to qt github!");
    }

    m_bFlag = !m_bFlag;
    return;
}
