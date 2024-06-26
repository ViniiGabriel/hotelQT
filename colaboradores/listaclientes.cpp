#include "listaclientes.h"
#include "ui_listaclientes.h"

listaClientes::listaClientes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::listaClientes)
{
    ui->setupUi(this);
}

listaClientes::~listaClientes()
{
    delete ui;
}
