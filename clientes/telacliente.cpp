#include "telacliente.h"
#include "ui_telacliente.h"
#include "telareserva.h"
#include "telanotificacoes.h"
#include "telaavaliacao.h"
#include "telaquarto.h"



telaCliente::telaCliente(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaCliente)
    , m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_clientes where id= :id");
    query.bindValue(":id", m_id);
    query.exec();
    query.first();
    ui->txt_nome->setText(query.value(1).toString());
    ui->txt_id->setText(query.value(0).toString());

}

telaCliente::~telaCliente()
{
    delete ui;
}


void telaCliente::on_tb_menu_cellDoubleClicked()
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

