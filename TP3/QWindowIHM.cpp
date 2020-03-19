//
// Created by Yohann Ch on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "QWindowIHM.h"

QWindowIHM::QWindowIHM() {
    QWidget* par = new QWidget;
    this->setWindowTitle("IHM");
    slide = new QSlider(Qt::Horizontal);
    bar = new QProgressBar();
    QVBoxLayout* layV = new QVBoxLayout();


    bar->setMinimum(0);
    bar->setMaximum(100);
    bar->setValue(value);

    layV->addWidget(bar);
    layV->addWidget(slide);

    par->setLayout(layV);
    this->setCentralWidget(par);

    connect(slide,SIGNAL(valueChanged(int)),bar,SLOT(setValue(int)));

}
