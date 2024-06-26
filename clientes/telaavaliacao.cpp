#include "telaavaliacao.h"
#include "ui_telaavaliacao.h"

telaAvaliacao::telaAvaliacao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaAvaliacao)
{
    ui->setupUi(this);
}

telaAvaliacao::~telaAvaliacao()
{
    delete ui;
}
