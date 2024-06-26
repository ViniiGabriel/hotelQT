#include "cadastrocliente.h"
#include "ui_cadastrocliente.h"

cadastroCliente::cadastroCliente(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroCliente)
{
    ui->setupUi(this);
}

cadastroCliente::~cadastroCliente()
{
    delete ui;
}

void cadastroCliente::on_btn_cadastrar_clicked()
{

}

