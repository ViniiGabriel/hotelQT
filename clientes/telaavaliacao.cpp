#include "telaavaliacao.h"
#include "ui_telaavaliacao.h"
#include <QtSql>
#include <QMessageBox>

telaAvaliacao::telaAvaliacao(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaAvaliacao)
    , m_id(id)
{
    ui->setupUi(this);
}

telaAvaliacao::~telaAvaliacao()
{
    delete ui;
}

void telaAvaliacao::on_btn_enviar_clicked()
{
    QString avaliacao;
    if(ui->a1->isChecked())
    {
        avaliacao = "1";
    } else if(ui->a2->isChecked())
    {
        avaliacao = "2";
    } else if(ui->a3->isChecked())
    {
        avaliacao = "3";
    } else if(ui->a4->isChecked())
    {
        avaliacao = "4";
    } else if(ui->a5->isChecked())
    {
        avaliacao = "5";
    }


    QString notificacao = "Um cliente avaliou o quarto id " + QString::number(m_id) + " com " + avaliacao + " estrelas.";
    QSqlQuery query;
    query.prepare("insert into tb_notificacoesColaborador (notificacao) values (:notif)");
    query.bindValue(":notif", notificacao);
    if(query.exec())
    {
        QMessageBox::information(this,"Sucesso","Obrigado pela avaliação!");
        this->close();
    }
}

