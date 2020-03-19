#include <QApplication>
#include <QPushButton>
#include "SQLClientWindow.h"
#include "ConfigurationDialog.h"

int main(int argc,char** argv) {
    QApplication app(argc,argv);
    SQLClientWindow* win = new SQLClientWindow;
    win->show();
    return app.exec();
}
