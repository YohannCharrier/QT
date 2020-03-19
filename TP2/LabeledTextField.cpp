#include <QHBoxLayout>
#include "LabeledTextField.h"
#include <QString>


LabeledTextField::LabeledTextField(char* name) {
    label = new QLabel();
    label->setText(name);
    text = new QTextEdit();
    QHBoxLayout* layoutH = new QHBoxLayout;

    text->setMaximumSize(300,25);

    layoutH->addWidget(label);
    layoutH->addWidget(text);

    this->setLayout(layoutH);
}
