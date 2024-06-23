#include "telacolaborador.h"
#include "ui_telacolaborador.h"
#include "cadastroquartos.h"
#include "listaquartos.h"

telaColaborador::telaColaborador(QWidget *parent, QString nome)
    : QDialog(parent)
    , ui(new Ui::telaColaborador),
    m_name(nome)
{
    ui->setupUi(this);
    ui->txt_nome->setText(nome);
}

telaColaborador::~telaColaborador()
{
    delete ui;
}



void telaColaborador::on_btn_cadastroQuarto_clicked()
{
    cadastroQuartos cadastro;
    cadastro.setModal(true);
    cadastro.exec();
}


void telaColaborador::on_btn_listaQuartos_clicked()
{
    listaQuartos lista;
    lista.setModal(true);
    lista.exec();
}

