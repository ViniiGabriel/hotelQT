#include "telacliente.h"
#include "ui_telacliente.h"

telaCliente::telaCliente(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaCliente)
{
    ui->setupUi(this);
}

telaCliente::~telaCliente()
{
    delete ui;
}
