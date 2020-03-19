#ifndef TP2_BUTTONSPANEL_H
#define TP2_BUTTONSPANEL_H

#include <QPushButton>

class ButtonsPanel : public QWidget{
private:
    QPushButton* b1 = new QPushButton;
    QPushButton* b2 = new QPushButton;
    QPushButton* b3 = new QPushButton;
public:
    ButtonsPanel();
};


#endif //TP2_BUTTONSPANEL_H
