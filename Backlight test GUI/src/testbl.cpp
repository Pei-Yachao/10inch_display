#include "testbl.h"
#include "ui_testbl.h"

testBL::testBL(QWidget *parent) : QDialog(parent), ui(new Ui::testBL) {
    ui->setupUi(this);
    hid = new HID();
    connect(hid, SIGNAL(hidUpdate(bool, unsigned char, unsigned char)), this, SLOT(updateGui(bool, unsigned char, unsigned char)));
    connect(this, SIGNAL(sendCmd(unsigned char, unsigned char)), hid, SLOT(sendCmd(unsigned char, unsigned char)));
    sendCmd(0,0);
}

testBL::~testBL() {
    delete ui;
}

void testBL::updateGui(bool isConnected, unsigned char blLevel, unsigned char ambientLight) {
    if (isConnected) {
        ui->deviceConnectedStatus->setText("Connected");
        ui->pushBL->setChecked((blLevel&0x80)?true:false);
        ui->pushAuto->setChecked((blLevel&0x40)?true:false);
        ui->lineCurBlLevel->setText(QString("%1").arg(blLevel & 0x3F));
        ui->progressBar->setValue(ambientLight);
        ui->blLevel->setText(QString("%1").arg(ambientLight));
    }
    else {
        ui->deviceConnectedStatus->setText("Disconnected");
        ui->progressBar->setValue(0);
    }
}

void testBL::on_pushExit_clicked() {
    this->accept();
}

void testBL::on_pushInc_clicked()  {sendCmd(1<<7,0);}
void testBL::on_pushDec_clicked()  {sendCmd(1<<6,0);}
void testBL::on_pushSet_clicked()  {sendCmd(1<<5,ui->spinBrightness->value());}
void testBL::on_pushBL_clicked()   {sendCmd(1<<4,0);}
void testBL::on_pushMin_clicked()  {sendCmd(1<<3,0);}
void testBL::on_pushMax_clicked()  {sendCmd(1<<2,0);}
void testBL::on_pushAuto_clicked() {sendCmd(1<<1,0);}
