#ifndef TP1_WINDOW_H
#define TP1_WINDOW_H

#include <QApplication>
#include <QPushButton>

class Window : public QWidget{
Q_OBJECT
public:
    Window(QWidget* parent=0);

private:
    QPushButton* button = new QPushButton("Bonjour",this);
};


#endif //TP1_WINDOW_H
