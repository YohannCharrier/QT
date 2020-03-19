#include <QApplication>
#include <QPushButton>
#include "Window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    QPushButton button ("Hello world !");
    button.setText("CharlesLaPute");
    button.setToolTip("Charles");
    QFont font("Courier",16,2);
    button.setFont(font);
    /////////////////////////
    QPushButton par("Parent");
    QPushButton fils("Fils",&par);
    //////////////////////////
    QWidget widget;
    widget.setFixedSize(100,50);
    QPushButton filsW("Fils",&widget);
    filsW.setGeometry(10,10,80,30);
    ///////////////////////////////
    Window* w = new Window();
    w->show();
    return app.exec();
}