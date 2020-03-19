#include "Window.h"

Window::Window(QWidget *parent) : QWidget(parent){
    this->setFixedSize(100,50);
    button->setGeometry(10,10,80,30);
    this->setWindowTitle("WINDOWS");
}
