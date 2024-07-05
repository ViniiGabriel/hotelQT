#include "pagamentotela.h"
#include "ui_pagamentotela.h"
#include <QMessageBox>

pagamentoTela::pagamentoTela(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pagamentoTela)
{
    ui->setupUi(this);
}

pagamentoTela::~pagamentoTela()
{
    delete ui;
}

void pagamentoTela::on_btn_finalizar_clicked()
{
    verificaPagamento = true;
    QMessageBox::information(this,"Sucesso","Pagamento realizado com sucesso!");
    this->close();
}

