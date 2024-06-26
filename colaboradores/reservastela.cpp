#include "reservastela.h"
#include "ui_reservastela.h"

reservasTela::reservasTela(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::reservasTela)
{
    ui->setupUi(this);
}

reservasTela::~reservasTela()
{
    delete ui;
}
