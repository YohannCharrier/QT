//
// Created by Yohann Ch on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include <iostream>
#include "QWindowIHM2.h"
#include "QWindowIHM.h"

QWindowIHM2::QWindowIHM2() {
    QWindowIHM* IHM = new QWindowIHM;
    nbClic = 0;
    this->setWindowTitle("IHM");
    QWidget* par = new QWidget;
    QVBoxLayout* layV = new QVBoxLayout;

    button = new QPushButton();
    button->setText("fils");
    text = new QTextEdit;
    text->setMaximumSize(200,100);
    text->setText("Texte initial\n");

    layV->addWidget(button);
    layV->addWidget(text);

    par->setLayout(layV);
    this->setCentralWidget(par);

    connect(button,SIGNAL(clicked()),this,SLOT(setText()));
    connect(button,SIGNAL(clicked()),IHM,SLOT(show()));
}

void QWindowIHM2::setText() {
    button->setText("Example");
    nbClic++;
    QString str = button->text()+QString::number(nbClic)+"\n";
    text->setText(str+text->toPlainText());
}
