#include <QtWidgets/QApplication>
#include "testbl.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    testBL w;
    return w.exec();
}
