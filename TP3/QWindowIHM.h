//
// Created by Yohann Ch on 18/03/2020.
//

#ifndef TP3_QWINDOWIHM_H
#define TP3_QWINDOWIHM_H

#include <QObject>
#include <QSlider>
#include <QProgressBar>
#include <QMainWindow>

class QWindowIHM : public QMainWindow {
    Q_OBJECT
public:
    QWindowIHM();

private:
    QSlider* slide;
    QProgressBar* bar;
    int value=0;

};


#endif //TP3_QWINDOWIHM_H
