#ifndef TP2_SQLCLIENTWINDOW_H
#define TP2_SQLCLIENTWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <QtWidgets/QTableWidget>
#include "ButtonsPanel.h"

class SQLClientWindow : public QMainWindow{
private:
    ButtonsPanel* buttons;
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;
public:
    SQLClientWindow();
};


#endif //TP2_SQLCLIENTWINDOW_H
