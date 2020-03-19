//
// Created by Yohann Ch on 18/03/2020.
//

#ifndef TP2_LABELEDTEXTFIELD_H
#define TP2_LABELEDTEXTFIELD_H

#include <QApplication>
#include <QLabel>
#include <QTextEdit>
#include <QtWidgets/QWidget>
#include <string>

using namespace std;

class LabeledTextField : public QWidget{
private:
    QLabel* label;
    QTextEdit* text;
public:
    LabeledTextField(char* name);
};


#endif //TP2_LABELEDTEXTFIELD_H
