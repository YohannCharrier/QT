//
// Created by Yohann Ch on 18/03/2020.
//
#include <QVBoxLayout>
#include "LabeledTextField.h"
#include "ConfigurationDialog.h"

ConfigurationDialog::ConfigurationDialog() {
    this->setWindowTitle("Configuration");
    LabeledTextField* ip = new LabeledTextField("IP Address");
    LabeledTextField* user = new LabeledTextField("User");
    LabeledTextField* pwd = new LabeledTextField("Password");
    QVBoxLayout* layV = new QVBoxLayout();

    layV->addWidget(ip);
    layV->addWidget(user);
    layV->addWidget(pwd);

    this->setLayout(layV);

}
