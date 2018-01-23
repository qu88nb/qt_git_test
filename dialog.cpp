#include <QMessageBox>
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    m_bFlag = false;
    ui->pushButton->setText("Show");
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
        ui->pushButton->setText("Show");
        ui->textEdit->clear();
        QMessageBox::information(this, "Info", "Clear text info ok!");
    }
    else
    {
        ui->pushButton->setText("Clear");
        ui->textEdit->setText("Hi qu88nb, Welcome to qt github!");
    }

    m_bFlag = !m_bFlag;
    return;
}
