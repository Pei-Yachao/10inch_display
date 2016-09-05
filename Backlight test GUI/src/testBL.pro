QT += widgets

TARGET = testBL
TEMPLATE = app

SOURCES  += main.cpp hid.cpp testbl.cpp

HEADERS  += hid.h testbl.h

FORMS    += testbl.ui

#-------------------------------------------------
# Add the Signal11 HID API library
#-------------------------------------------------
macx: LIBS += -L../lib/mac -lHIDAPI
win32: LIBS += -L../lib/windows -lHIDAPI
unix: !macx: LIBS += -L../lib/linux -lHIDAPI

#-------------------------------------------------
# Make sure to add the required libraries or
# frameworks for the HID API to work
#-------------------------------------------------
macx: LIBS += -framework CoreFoundation -framework IOkit
win32: LIBS += -lSetupAPI
unix: !macx: LIBS += -lusb-1.0
