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
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public Q_SLOTS:
    void showText();

private:
    Ui::Dialog *ui;

    bool m_bFlag;
};

#endif // DIALOG_H
