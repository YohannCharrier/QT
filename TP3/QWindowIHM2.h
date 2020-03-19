//
// Created by Yohann Ch on 18/03/2020.
//

#ifndef TP3_QWINDOWIHM2_H
#define TP3_QWINDOWIHM2_H

#include <QObject>
#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>

class QWindowIHM2 : public QMainWindow {
    Q_OBJECT
private:
    int nbClic;
    QPushButton* button;
    QTextEdit* text;
public:
    QWindowIHM2();
public slots:
    void setText();


};


#endif //TP3_QWINDOWIHM2_H
