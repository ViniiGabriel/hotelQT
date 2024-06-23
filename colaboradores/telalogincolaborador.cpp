#include "telalogincolaborador.h"
#include "ui_telalogincolaborador.h"
#include "telacolaborador.h"

telaLoginColaborador::telaLoginColaborador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaLoginColaborador)
{
    ui->setupUi(this);
    ui->label_infoinvalida->setVisible(false);
    ui->btn_login->setDefault(true);
    ui->txt_username->setText("vini");
    ui->txt_senha->setText("1234");
}

telaLoginColaborador::~telaLoginColaborador()
{
    delete ui;
}

void telaLoginColaborador::on_btn_login_clicked()
{
    QString username = ui->txt_username->text();
    QString senha = ui->txt_senha->text();

    QSqlQuery query;

    query.prepare("select * from tb_colaboradores where username = :username");
    query.bindValue(":username", username);
    query.exec();
    query.first();
    if(query.value(3) == username && query.value(2) == senha){
        QString nome = query.value(1).toString();
        telaColaborador tela(nullptr, nome);
        tela.setModal(true);
        this->close();
        tela.exec();
    } else {
        ui->label_infoinvalida->setVisible(true);
    }

}

