#include "editarcliente.h"
#include "ui_editarcliente.h"
#include <QtSql>

editarCliente::editarCliente(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::editarCliente)
    , m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_clientes where id = :id");
    query.bindValue(":id", m_id);
    query.exec();
    query.first();
    ui->txt_nome->setText(query.value(1).toString());
    ui->txt_username->setText(query.value(2).toString());
    ui->txt_senha->setText(query.value(3).toString());
    ui->txt_cpf->setText(query.value(4).toString());
    ui->txt_endereco->setText(query.value(5).toString());
}

editarCliente::~editarCliente()
{
    delete ui;
}

void editarCliente::on_btn_cadastrar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString username = ui->txt_username->text();
    QString senha = ui->txt_senha->text();
    QString endereco = ui->txt_endereco->text();
    QString cpf = ui->txt_cpf->text();
    QSqlQuery query;
    query.prepare("update tb_clientes set nome = :nome, username = :username, senha = :senha, cpf = :cpf, endereco = :endereco where id = :id");
    query.bindValue(":id", m_id);
    query.bindValue(":nome", nome);
    query.bindValue(":username", username);
    query.bindValue(":senha", senha);
    query.bindValue(":endereco", endereco);
    query.bindValue(":cpf", cpf);
    if(!query.exec()) {
        qDebug() << "Falhou";
    }
    this->close();
}

