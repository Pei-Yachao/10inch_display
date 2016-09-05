/********************************************************************************
** Form generated from reading UI file 'testbl.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBL_H
#define UI_TESTBL_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_testBL
{
public:
    QProgressBar *progressBar;
    QLabel *blLevel;
    QLabel *label;
    QPushButton *pushInc;
    QLineEdit *deviceConnectedStatus;
    QLabel *label_2;
    QPushButton *pushDec;
    QPushButton *pushMin;
    QPushButton *pushMax;
    QPushButton *pushBL;
    QPushButton *pushAuto;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBrightness;
    QPushButton *pushSet;
    QFrame *line;
    QPushButton *pushExit;
    QLabel *label_5;
    QLineEdit *lineCurBlLevel;

    void setupUi(QDialog *testBL)
    {
        if (testBL->objectName().isEmpty())
            testBL->setObjectName(QStringLiteral("testBL"));
        testBL->resize(470, 450);
        testBL->setMinimumSize(QSize(470, 450));
        testBL->setMaximumSize(QSize(470, 450));
        testBL->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        progressBar = new QProgressBar(testBL);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(false);
        progressBar->setGeometry(QRect(30, 150, 351, 21));
        progressBar->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        progressBar->setMaximum(255);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        blLevel = new QLabel(testBL);
        blLevel->setObjectName(QStringLiteral("blLevel"));
        blLevel->setGeometry(QRect(400, 150, 41, 21));
        label = new QLabel(testBL);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 121, 31));
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushInc = new QPushButton(testBL);
        pushInc->setObjectName(QStringLiteral("pushInc"));
        pushInc->setGeometry(QRect(350, 230, 41, 41));
        deviceConnectedStatus = new QLineEdit(testBL);
        deviceConnectedStatus->setObjectName(QStringLiteral("deviceConnectedStatus"));
        deviceConnectedStatus->setEnabled(true);
        deviceConnectedStatus->setGeometry(QRect(30, 60, 411, 31));
        deviceConnectedStatus->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        deviceConnectedStatus->setReadOnly(true);
        label_2 = new QLabel(testBL);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 151, 31));
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushDec = new QPushButton(testBL);
        pushDec->setObjectName(QStringLiteral("pushDec"));
        pushDec->setGeometry(QRect(80, 230, 41, 41));
        pushMin = new QPushButton(testBL);
        pushMin->setObjectName(QStringLiteral("pushMin"));
        pushMin->setGeometry(QRect(30, 230, 41, 41));
        pushMax = new QPushButton(testBL);
        pushMax->setObjectName(QStringLiteral("pushMax"));
        pushMax->setGeometry(QRect(400, 230, 41, 41));
        pushBL = new QPushButton(testBL);
        pushBL->setObjectName(QStringLiteral("pushBL"));
        pushBL->setGeometry(QRect(130, 230, 101, 41));
        pushBL->setCheckable(true);
        pushAuto = new QPushButton(testBL);
        pushAuto->setObjectName(QStringLiteral("pushAuto"));
        pushAuto->setGeometry(QRect(240, 230, 101, 41));
        pushAuto->setCheckable(true);
        pushAuto->setChecked(false);
        label_3 = new QLabel(testBL);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 151, 31));
        label_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_4 = new QLabel(testBL);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 290, 101, 41));
        label_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBrightness = new QSpinBox(testBL);
        spinBrightness->setObjectName(QStringLiteral("spinBrightness"));
        spinBrightness->setGeometry(QRect(330, 290, 51, 41));
        spinBrightness->setMaximum(35);
        spinBrightness->setValue(20);
        pushSet = new QPushButton(testBL);
        pushSet->setObjectName(QStringLiteral("pushSet"));
        pushSet->setGeometry(QRect(390, 290, 51, 41));
        line = new QFrame(testBL);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 360, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushExit = new QPushButton(testBL);
        pushExit->setObjectName(QStringLiteral("pushExit"));
        pushExit->setGeometry(QRect(340, 390, 101, 41));
        label_5 = new QLabel(testBL);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 290, 131, 41));
        label_5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineCurBlLevel = new QLineEdit(testBL);
        lineCurBlLevel->setObjectName(QStringLiteral("lineCurBlLevel"));
        lineCurBlLevel->setEnabled(true);
        lineCurBlLevel->setGeometry(QRect(160, 290, 31, 41));
        lineCurBlLevel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineCurBlLevel->setReadOnly(true);

        retranslateUi(testBL);

        QMetaObject::connectSlotsByName(testBL);
    } // setupUi

    void retranslateUi(QDialog *testBL)
    {
        testBL->setWindowTitle(QApplication::translate("testBL", "Test Backlight", 0));
        blLevel->setText(QApplication::translate("testBL", "0", 0));
        label->setText(QApplication::translate("testBL", "Status:", 0));
        pushInc->setText(QApplication::translate("testBL", "+1", 0));
        deviceConnectedStatus->setText(QApplication::translate("testBL", "Disconnected", 0));
        label_2->setText(QApplication::translate("testBL", "Ambient light level:", 0));
        pushDec->setText(QApplication::translate("testBL", "-1", 0));
        pushMin->setText(QApplication::translate("testBL", "min", 0));
        pushMax->setText(QApplication::translate("testBL", "max", 0));
        pushBL->setText(QApplication::translate("testBL", "BL On", 0));
        pushAuto->setText(QApplication::translate("testBL", "Auto BL On", 0));
        label_3->setText(QApplication::translate("testBL", "Control:", 0));
        label_4->setText(QApplication::translate("testBL", "Set BL level:", 0));
        pushSet->setText(QApplication::translate("testBL", "Set", 0));
        pushExit->setText(QApplication::translate("testBL", "Exit", 0));
        label_5->setText(QApplication::translate("testBL", "Current BL level:", 0));
        lineCurBlLevel->setText(QApplication::translate("testBL", "20", 0));
    } // retranslateUi

};

namespace Ui {
    class testBL: public Ui_testBL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBL_H
