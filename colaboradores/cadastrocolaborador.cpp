#include "cadastrocolaborador.h"
#include "ui_cadastrocolaborador.h"
#include <QDebug>

cadastroColaborador::cadastroColaborador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroColaborador)
{
    ui->setupUi(this);
    ui->txt_nome->setFocus();
}

cadastroColaborador::~cadastroColaborador()
{
    delete ui;
}

void cadastroColaborador::on_pushButton_clicked()
{
    QString nome = ui->txt_nome->text();
    QString username = ui->txt_username->text();
    QString senha = ui->txt_senha->text();
    QString endereco = ui->txt_endereco->text();
    QString cargo = ui->txt_cargo->text();

    QSqlQuery query;
    query.prepare("insert into tb_colaboradores (nome, username, senha, endereco, cargo) values (:nome, :username, :senha, :endereco, :cargo)");
    query.bindValue(":nome", nome);
    query.bindValue(":username", username);
    query.bindValue(":senha", senha);
    query.bindValue(":endereco", endereco);
    query.bindValue(":cargo", cargo);
    if(query.exec())
    {
        QMessageBox::information(this,"Sucesso","Cadastro feito com sucesso");
        ui->txt_nome->setFocus();
        ui->txt_nome->clear();
        ui->txt_senha->clear();
        ui->txt_cargo->clear();
        ui->txt_endereco->clear();
        ui->txt_username->clear();
    } else {
        QMessageBox::warning(this,"Erro","Erro ao inserir no banco de dados");
        qDebug() << query.lastError().text();
    }
    //("insert into tb_clientes (nome,profissao,endereco,renda,tipoConta,limite,saldo) values "
                  //"('"+nome+"','"+profissao+"','"+endereco+"', '"+renda+"','"+tipoConta+"', '"+limite+"', '"+saldo+"')")
}

