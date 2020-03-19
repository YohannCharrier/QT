#include <iostream>
#include <QApplication>
#include "QWindowIHM.h"
#include "QWindowIHM2.h"

int main(int argc,char** argv) {
    QApplication app(argc,argv);
    QWindowIHM2* win = new QWindowIHM2;
    win->show();
    return app.exec();
}
