#include "telacliente.h"
#include "ui_telacliente.h"
#include "telalogin.h"
#include "telareserva.h"
#include "telanotificacoes.h"
#include "telaavaliacao.h"
#include "telaquarto.h"



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


void telaCliente::on_tb_menu_cellDoubleClicked(int row, int column)
{
    telaQuarto tela;
    tela.setModal(true);
    tela.exec();
}


void telaCliente::on_btn_reservas_clicked()
{
    telaReserva tela;
    tela.setModal(true);
    tela.exec();
}


void telaCliente::on_btn_notificacoes_clicked()
{
    telaNotificacoes tela;
    tela.setModal(true);
    tela.exec();
}


void telaCliente::on_btn_avaliacoes_clicked()
{
    telaAvaliacao tela;
    tela.setModal(true);
    tela.exec();
}

