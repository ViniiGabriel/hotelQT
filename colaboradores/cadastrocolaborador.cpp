#include "cadastrocolaborador.h"
#include "ui_cadastrocolaborador.h"

cadastroColaborador::cadastroColaborador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroColaborador)
{
    ui->setupUi(this);
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
    } else {
        QMessageBox::warning(this,"Erro","Erro ao inserir no banco de dados");
    }
    //("insert into tb_clientes (nome,profissao,endereco,renda,tipoConta,limite,saldo) values "
                  //"('"+nome+"','"+profissao+"','"+endereco+"', '"+renda+"','"+tipoConta+"', '"+limite+"', '"+saldo+"')")
}

