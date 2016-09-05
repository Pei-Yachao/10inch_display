#ifndef TESTBL_H
#define TESTBL_H

#include <QDialog>
#include "hid.h"

namespace Ui {
    class testBL;
}

class testBL : public QDialog {
    Q_OBJECT

public:
    explicit testBL(QWidget *parent = 0);
    ~testBL();

private:
    Ui::testBL *ui;
    HID *hid;

signals:
    void sendCmd(unsigned char cmd, unsigned char val);

public slots:
    void updateGui(bool isConnected, unsigned char blLevel, unsigned char ambientLight);

private slots:
    void on_pushExit_clicked();
    void on_pushMin_clicked();
    void on_pushDec_clicked();
    void on_pushBL_clicked();
    void on_pushAuto_clicked();
    void on_pushInc_clicked();
    void on_pushMax_clicked();
    void on_pushSet_clicked();
};

#endif // TESTBL_H
