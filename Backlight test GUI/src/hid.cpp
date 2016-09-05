    #include "hid.h"

HID::HID(QObject *parent) : QObject(parent) {
    isConnected = false;
    cmd = 0;
    val = 0;
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(pollUSB()));
    timer->start(250);
}

HID::~HID() {}

void HID::sendCmd(unsigned char _cmd, unsigned char _val) {
    cmd=_cmd;
    val=_val;
}

void HID::pollUSB() {
    buf[0] = 0x00;
    buf[1] = cmd; cmd = 0;
    buf[2] = val; val = 0;

    if (isConnected == false) {
        device = hid_open(0x04d8, 0x003f, NULL);

        if (device) {
            isConnected = true;
            hid_set_nonblocking(device, true);
            timer->start(15);
        }
    }
    else {
        if (hid_write(device, buf, 3) == -1) {
            closeHID();
            return;
        }
        if (hid_read(device, buf, 2) == -1) {
            closeHID();
            return;
        }
    }

    hidUpdate(isConnected, buf[0], buf[1]);
}

void HID::closeHID() {
    hid_close(device);
    device = NULL;
    isConnected = false;
    hidUpdate(isConnected, 0, 0);
    timer->start(250);
}
