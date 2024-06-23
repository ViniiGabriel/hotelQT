#include "telafiltrar.h"
#include "ui_telafiltrar.h"

telaFiltrar::telaFiltrar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaFiltrar)
{
    ui->setupUi(this);
}

telaFiltrar::~telaFiltrar()
{
    delete ui;
}
