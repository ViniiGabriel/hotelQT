#include "cadastroquartos.h"
#include "ui_cadastroquartos.h"
#include <QDebug>
#include <QtSql>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include "quartos/QuartoSimples.h"
#include "quartos/QuartoComfort.h"
#include "quartos/QuartoSuite.h"
#include "quartos/QuartoMaster.h"

QString destinationPath = "";

cadastroQuartos::cadastroQuartos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroQuartos)
{
    ui->setupUi(this);
    ui->check_wifi->setEnabled(true);
    ui->check_ar->setEnabled(false);
    ui->check_tv->setEnabled(true);
    ui->check_sacada->setEnabled(false);
    ui->check_cofre->setEnabled(false);
    ui->check_banheira->setEnabled(false);
    ui->check_cafe->setEnabled(false);
    ui->check_roupao->setEnabled(false);
    ui->check_higiene->setEnabled(false);
    ui->check_servico->setEnabled(false);
    ui->check_miniBar->setEnabled(false);
}

cadastroQuartos::~cadastroQuartos()
{
    delete ui;
}

void cadastroQuartos::on_btn_salvar_clicked()
{
    if(ui->txt_tituloQuarto->text() == "" || ui->txt_descricao->toPlainText() == "" || ui->txt_valor->text() == "")
    {
        QMessageBox::warning(this,"Erro","Preencha todos os campos");
        return;
    }

    if(destinationPath == ""){
        QMessageBox::warning(this,"Erro","Adicione uma imagem do quarto");
        return;
    }

    QString tipoQuarto = ui->boxTipoQuarto->currentText();
    QString titulo = ui->txt_tituloQuarto->text();
    QString descricao = ui->txt_descricao->toPlainText();
    QString valor = ui->txt_valor->text();
    QString wifi, ar, tv, sacada, cofre, banheira, cafe, roupao, higiene, servicoQuarto, bar;

    wifi = "falso";
    ar = "falso";
    tv = "falso";
    sacada = "falso";
    cofre = "falso";
    banheira = "falso";
    cafe = "falso";
    roupao = "falso";
    higiene = "falso";
    servicoQuarto = "falso";
    bar = "falso";

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
        QuartoSimples quarto(tipoQuarto, titulo, descricao, valor, destinationPath, wifi, tv);
        if(quarto.codigoQuery()){
            QMessageBox::information(this,"Sucesso","Quarto cadastrado com sucesso");
        } else {
            QMessageBox::warning(this,"Falha","Falha ao cadastrar quarto");
        }
    } else if (tipoQuarto == "Comfort")
    {
        QuartoComfort quarto(tipoQuarto, titulo, descricao, valor, destinationPath, wifi, tv, ar, sacada, banheira, roupao, higiene);
        if(quarto.codigoQuery()){
            QMessageBox::information(this,"Sucesso","Quarto cadastrado com sucesso");
        } else {
            QMessageBox::warning(this,"Falha","Falha ao cadastrar quarto");
        }
    } else if (tipoQuarto == "Suíte")
    {
        QuartoSuite quarto(tipoQuarto, titulo, descricao, valor, destinationPath, wifi, tv, ar, sacada, banheira, roupao, higiene, cafe, servicoQuarto);
        if(quarto.codigoQuery()){
            QMessageBox::information(this,"Sucesso","Quarto cadastrado com sucesso");
        } else {
            QMessageBox::warning(this,"Falha","Falha ao cadastrar quarto");
        }
    }   else if (tipoQuarto == "Master")
    {
        QuartoMaster quarto(tipoQuarto, titulo, descricao, valor, destinationPath);
        if(quarto.codigoQuery()){
            QMessageBox::information(this,"Sucesso","Quarto cadastrado com sucesso");
        } else {
            QMessageBox::warning(this,"Falha","Falha ao cadastrar quarto");
        }
    }

    ui->txt_descricao->clear();
    ui->txt_valor->clear();
    ui->txt_tituloQuarto->clear();
    ui->boxTipoQuarto->setCurrentIndex(0);
    ui->check_wifi->setEnabled(true);
    ui->check_ar->setEnabled(false);
    ui->check_tv->setEnabled(true);
    ui->check_sacada->setEnabled(false);
    ui->check_cofre->setEnabled(false);
    ui->check_banheira->setEnabled(false);
    ui->check_cafe->setEnabled(false);
    ui->check_roupao->setEnabled(false);
    ui->check_higiene->setEnabled(false);
    ui->check_servico->setEnabled(false);
    ui->check_miniBar->setEnabled(false);

    ui->check_wifi->setChecked(false);
    ui->check_ar->setChecked(false);
    ui->check_tv->setChecked(false);
    ui->check_sacada->setChecked(false);
    ui->check_cofre->setChecked(false);
    ui->check_banheira->setChecked(false);
    ui->check_cafe->setChecked(false);
    ui->check_roupao->setChecked(false);
    ui->check_higiene->setChecked(false);
    ui->check_servico->setChecked(false);
    ui->check_miniBar->setChecked(false);

    destinationPath = "";
}

void cadastroQuartos::on_btn_cancelar_clicked()
{
    this->close();
}

void cadastroQuartos::on_btn_imagen_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Selecione uma imagem", "", "Imagens (*.png *.jpg *.jpeg *.bmp)");
    if (filePath.isEmpty()) {
        return;
    }

    QString fileName = QFileInfo(filePath).fileName();
    QString destinationDir = "../../imagens";

    QDir dir;
    if (!dir.exists(destinationDir)) {
        dir.mkpath(destinationDir);
    }

    destinationPath = destinationDir + "/" + fileName;

    if (QFile::copy(filePath, destinationPath)) {
        qDebug() << "Imagem copiada para:" << destinationPath;
    } else {
        qDebug() << "Falha ao copiar a imagem.";
    }
}


void cadastroQuartos::on_boxTipoQuarto_currentTextChanged()
{
    if(ui->boxTipoQuarto->currentText() == "Simples"){
        ui->check_wifi->setEnabled(true);
        ui->check_ar->setEnabled(false);
        ui->check_tv->setEnabled(true);
        ui->check_sacada->setEnabled(false);
        ui->check_cofre->setEnabled(false);
        ui->check_banheira->setEnabled(false);
        ui->check_cafe->setEnabled(false);
        ui->check_roupao->setEnabled(false);
        ui->check_higiene->setEnabled(false);
        ui->check_servico->setEnabled(false);
        ui->check_miniBar->setEnabled(false);

        ui->check_wifi->setChecked(false);
        ui->check_ar->setChecked(false);
        ui->check_tv->setChecked(false);
        ui->check_sacada->setChecked(false);
        ui->check_cofre->setChecked(false);
        ui->check_banheira->setChecked(false);
        ui->check_cafe->setChecked(false);
        ui->check_roupao->setChecked(false);
        ui->check_higiene->setChecked(false);
        ui->check_servico->setChecked(false);
        ui->check_miniBar->setChecked(false);

    } else  if(ui->boxTipoQuarto->currentText() == "Comfort"){
        ui->check_wifi->setEnabled(true);
        ui->check_ar->setEnabled(true);
        ui->check_tv->setEnabled(true);
        ui->check_sacada->setEnabled(true);
        ui->check_cofre->setEnabled(false);
        ui->check_banheira->setEnabled(true);
        ui->check_cafe->setEnabled(false);
        ui->check_roupao->setEnabled(true);
        ui->check_higiene->setEnabled(true);
        ui->check_servico->setEnabled(false);
        ui->check_miniBar->setEnabled(false);

        ui->check_wifi->setChecked(false);
        ui->check_ar->setChecked(false);
        ui->check_tv->setChecked(false);
        ui->check_sacada->setChecked(false);
        ui->check_cofre->setChecked(false);
        ui->check_banheira->setChecked(false);
        ui->check_cafe->setChecked(false);
        ui->check_roupao->setChecked(false);
        ui->check_higiene->setChecked(false);
        ui->check_servico->setChecked(false);
        ui->check_miniBar->setChecked(false);


    } else  if(ui->boxTipoQuarto->currentText() == "Suíte"){
        ui->check_wifi->setEnabled(true);
        ui->check_ar->setEnabled(true);
        ui->check_tv->setEnabled(true);
        ui->check_sacada->setEnabled(true);
        ui->check_cofre->setEnabled(false);
        ui->check_banheira->setEnabled(true);
        ui->check_cafe->setEnabled(true);
        ui->check_roupao->setEnabled(true);
        ui->check_higiene->setEnabled(true);
        ui->check_servico->setEnabled(false);
        ui->check_miniBar->setEnabled(false);

        ui->check_wifi->setChecked(false);
        ui->check_ar->setChecked(false);
        ui->check_tv->setChecked(false);
        ui->check_sacada->setChecked(false);
        ui->check_cofre->setChecked(false);
        ui->check_banheira->setChecked(false);
        ui->check_cafe->setChecked(false);
        ui->check_roupao->setChecked(false);
        ui->check_higiene->setChecked(false);
        ui->check_servico->setChecked(false);
        ui->check_miniBar->setChecked(false);

    } else if(ui->boxTipoQuarto->currentText() == "Master"){
        ui->check_wifi->setChecked(true);
        ui->check_wifi->setEnabled(false);
        ui->check_ar->setChecked(true);
        ui->check_ar->setEnabled(false);
        ui->check_tv->setChecked(true);
        ui->check_tv->setEnabled(false);
        ui->check_sacada->setEnabled(false);
        ui->check_sacada->setChecked(true);
        ui->check_cofre->setChecked(true);
        ui->check_cofre->setEnabled(false);
        ui->check_banheira->setChecked(true);
        ui->check_banheira->setEnabled(false);
        ui->check_cafe->setChecked(true);
        ui->check_cafe->setEnabled(false);
        ui->check_roupao->setChecked(true);
        ui->check_roupao->setEnabled(false);
        ui->check_higiene->setEnabled(false);
        ui->check_higiene->setChecked(true);
        ui->check_servico->setChecked(true);
        ui->check_servico->setEnabled(false);
        ui->check_miniBar->setChecked(true);
        ui->check_servico->setEnabled(false);

    }
}

