#include "cadastrocliente.h"
#include "ui_cadastrocliente.h"
#include <QtSql>
#include <QMessageBox>

cadastroCliente::cadastroCliente(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroCliente)
{
    ui->setupUi(this);
    ui->txt_nome->setFocus();
}

cadastroCliente::~cadastroCliente()
{
    delete ui;
}

void cadastroCliente::on_btn_cadastrar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString username = ui->txt_username->text();
    QString senha = ui->txt_senha->text();
    QString endereco = ui->txt_endereco->text();
    QString cpf = ui->txt_cpf->text();

    QSqlQuery query;
    query.prepare("insert into tb_clientes (nome, username, senha, endereco, cpf) values (:nome, :username, :senha, :endereco, :cpf)");
    query.bindValue(":nome", nome);
    query.bindValue(":username", username);
    query.bindValue(":senha", senha);
    query.bindValue(":endereco", endereco);
    query.bindValue(":cpf", cpf);
    if(query.exec())
    {
        QMessageBox::information(this,"Sucesso","Cliente cadastrado com sucesso");
        ui->txt_nome->clear();
        ui->txt_username->clear();
        ui->txt_senha->clear();
        ui->txt_endereco->clear();
        ui->txt_cpf->clear();
        ui->txt_nome->setFocus();
    } else {
        QMessageBox::warning(this,"Erro", "Erro ao inserir cliente");
    }

}

