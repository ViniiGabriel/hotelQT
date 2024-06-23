#include "telalogin.h"
#include "ui_telalogin.h"
#include "telacliente.h"

telaLogin::telaLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaLogin)
{
    ui->setupUi(this);
    ui->btn_login->setDefault(true);
    ui->label_infoinvalida->setVisible(false);
}

telaLogin::~telaLogin()
{
    delete ui;
}

void telaLogin::on_btn_login_clicked()
{
    QString username = ui->txt_username->text();
    QString senha = ui->txt_senha->text();

    QSqlQuery query;

    query.prepare("select * from tb_clientes where username = :username");
    query.bindValue(":username", username);
    query.exec();
    query.first();
    if(query.value(2) == username && query.value(3) == senha){
        telaCliente tela;
        tela.setModal(true);
        this->close();
        tela.exec();
    } else {
        ui->label_infoinvalida->setVisible(true);
    }
}

