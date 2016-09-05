#ifndef HID_H
#define HID_H

#include <QObject>
#include <QTimer>
#include "../HIDAPI/hidapi.h"

class HID : public QObject {
    Q_OBJECT
public:
    explicit HID(QObject *parent = 0);
    ~HID();

signals:
    void hidUpdate(bool isConnected, unsigned char blLevel, unsigned char ambientLight);

public slots:
    void pollUSB();
    void sendCmd(unsigned char _cmd, unsigned char _val);

private:
    bool isConnected;
    unsigned char cmd;      // Command to send in next transfer (byte 1)
    unsigned char val;      // BL value to send in next transfer (byte 2)

    hid_device *device;
    QTimer *timer;
    unsigned char buf[4];

    void closeHID(void);
};

#endif // HID_H


