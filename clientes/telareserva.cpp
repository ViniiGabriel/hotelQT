#include "telareserva.h"
#include "ui_telareserva.h"

telaReserva::telaReserva(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaReserva)
{
    ui->setupUi(this);
}

telaReserva::~telaReserva()
{
    delete ui;
}
