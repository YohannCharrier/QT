#include <QVBoxLayout>
#include "SQLClientWindow.h"
#include "ConfigurationDialog.h"
#include <QHeaderView>

SQLClientWindow::SQLClientWindow() {
    this->setWindowTitle("SQL Client");
    this->setMinimumSize(600,400);
    QWidget* par = new QWidget;
    QVBoxLayout* layoutV = new QVBoxLayout;
    par->setLayout(layoutV);
    this->setCentralWidget(par);
    buttons = new ButtonsPanel();
    notificationPanel = new QTextEdit;

    resultTable = new QTableWidget(5,3);
    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    layoutV->addWidget(buttons);
    layoutV->addWidget(notificationPanel);
    layoutV->addWidget(resultTable);

    ConfigurationDialog* dial = new ConfigurationDialog;
    dial->show();
}
