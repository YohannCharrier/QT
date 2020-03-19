#include <QHBoxLayout>
#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel() {
    b1->setText("Configure");
    b2->setText("Connect");
    b3->setText("Disconnect");
    QHBoxLayout* layoutH = new QHBoxLayout;
    layoutH->addWidget(b1);
    layoutH->addWidget(b2);
    layoutH->addWidget(b3);
    this->setLayout(layoutH);
}
