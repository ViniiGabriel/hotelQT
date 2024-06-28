#include "cadastroquartos.h"
#include "ui_cadastroquartos.h"
#include <QDebug>
#include <QtSql>
#include <QMessageBox>
#include "Quartos.h"

cadastroQuartos::cadastroQuartos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroQuartos)
{
    ui->setupUi(this);
}

cadastroQuartos::~cadastroQuartos()
{
    delete ui;
}

void cadastroQuartos::on_buttonBox_accepted()
{
    QString tipoQuarto = ui->boxTipoQuarto->currentText();
    QString titulo = ui->txt_tituloQuarto->text();
    QString descricao = ui->txt_descricao->toPlainText();
    QString valor = ui->txt_valor->text();
    QString wifi, ar, tv, sacada, cofre, banheira, cafe, roupao, higiene, servicoQuarto, bar;
    std::vector<QString>adicionais;

    wifi = "false";
    ar = "false";
    tv = "false";
    sacada = "false";
    cofre = "false";
    banheira = "false";
    cafe = "false";
    roupao = "false";
    higiene = "false";
    servicoQuarto = "false";
    bar = "false";

    if(ui->check_wifi->isChecked()){
        wifi = "true";
    }
    if(ui->check_ar->isChecked()){
        ar = "true";
    }
    if(ui->check_tv->isChecked()){
        tv = "true";
    }
    if(ui->check_sacada->isChecked()){
        sacada = "true";
    }
    if(ui->check_cofre->isChecked()){
        cofre = "true";
    }
    if(ui->check_banheira->isChecked()){
        banheira = "true";
    }
    if(ui->check_cafe->isChecked()){
        cafe = "true";
    }
    if(ui->check_roupao->isChecked()){
        roupao = "true";
    }
    if(ui->check_higiene->isChecked()){
        higiene = "true";
    }
    if(ui->check_servico->isChecked()){
        servicoQuarto = "true";
    }
    if(ui->check_miniBar->isChecked()){
        bar = "true";
    }

    if(tipoQuarto == "Simples")
    {

    }



    /*
    QSqlQuery query;
    query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, "
                  "descricaoQuarto, wifi, ar, tv, sacada, cofre, banheira, "
                  "cafe, roupao, higiene, servicoQuarto, minibar) values "
                  "(:tituloQuarto, :tituloQuarto, :descricaoQuarto, :wifi, "
                  ":ar, :tv, :sacada, :cofre, :banheira, :cafe, :roupao, "
                  ":higiene, :servicoQuarto, :minibar)");
    query.bindValue(":tituloQuarto", titulo);
    query.bindValue(":descricaoQuarto", descricao);
    query.bindValue(":tipoQuarto", tipoQuarto);
    query.bindValue(":wifi", wifi);
    query.bindValue(":ar", ar);
    query.bindValue(":tv", tv);
    query.bindValue(":sacada", sacada);
    query.bindValue(":cofre", cofre);
    query.bindValue(":banheira", banheira);
    query.bindValue(":cafe", cafe);
    query.bindValue(":roupao", roupao);
    query.bindValue(":higiene", higiene);
    query.bindValue(":servicoQuarto", servicoQuarto);
    query.bindValue(":minibar", bar);
    if(query.exec()){
        QMessageBox::information(this, "Sucesso", "Quarto cadastrado com sucesso.");
    } else {
        QMessageBox::warning(this, "Erro", query.lastError().text());
    }
    */
}


