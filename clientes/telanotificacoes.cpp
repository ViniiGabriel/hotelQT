#include "telanotificacoes.h"
#include "ui_telanotificacoes.h"

telaNotificacoes::telaNotificacoes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaNotificacoes)
{
    ui->setupUi(this);
}

telaNotificacoes::~telaNotificacoes()
{
    delete ui;
}
