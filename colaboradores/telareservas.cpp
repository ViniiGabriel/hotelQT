#include "telareservas.h"
#include "ui_telareserva.h"

telaReservas::telaReservas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaReservas)
{
    ui->setupUi(this);
}

telaReservas::~telaReservas()
{
    delete ui;
}
