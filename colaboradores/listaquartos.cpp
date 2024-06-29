#include "listaquartos.h"
#include "ui_listaquartos.h"
#include <QtSql>
#include <QMessageBox>
#include <QDebug>

listaQuartos::listaQuartos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::listaQuartos)
{
    ui->setupUi(this);
    tela = new telaFiltrar(this);
    QSqlQuery query;
    query.prepare("select * from tb_quartos");
    if(query.exec())
    {
        int linha=0;
        ui->tb_listaQuartos->setColumnCount(5);
        while(query.next())
        {
            ui->tb_listaQuartos->insertRow(linha);
            ui->tb_listaQuartos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tb_listaQuartos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tb_listaQuartos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tb_listaQuartos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tb_listaQuartos->setItem(linha, 4, new QTableWidgetItem(query.value(15).toString()));
            ui->tb_listaQuartos->setRowHeight(linha, 20);
            linha++;
        }
        ui->tb_listaQuartos->setColumnWidth(0, 20);
        ui->tb_listaQuartos->setColumnWidth(1, 100);
        ui->tb_listaQuartos->setColumnWidth(2, 100);
        ui->tb_listaQuartos->setColumnWidth(3, 200);
        ui->tb_listaQuartos->setColumnWidth(4, 70);

        QStringList cabecalho = {"ID","Tipo do Quarto","Título do Quarto","Descrição","Valor"};
        ui->tb_listaQuartos->setHorizontalHeaderLabels(cabecalho);
        ui->tb_listaQuartos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tb_listaQuartos->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tb_listaQuartos->selectRow(0);
        ui->tb_listaQuartos->verticalHeader()->setVisible(false);
        ui->tb_listaQuartos->setStyleSheet("QTableView {selection-background-color:blue}");
    }
}

listaQuartos::~listaQuartos()
{
    delete ui;
    delete tela;
}


void listaQuartos::on_btn_aplicarfiltros_clicked()
{
    QSqlQuery query;
    bool verific = false;
    QString codigo = "SELECT * FROM tb_quartos WHERE ";

    // Lista de condições
    QStringList conditions;
    QString teste = "true";

    // Adiciona condições baseadas nos critérios selecionados
    if (tela->wifiTrue()) {
        conditions << "wifi = :wifi";
        query.bindValue(":wifi", "trui");
        verific = true;
    }
    if (tela->arTrue()) {
        conditions << "ar = :ar";
        query.bindValue(":ar", "true");
        verific = true;
    }
    if (tela->tvTrue()) {
        conditions << "tv = :tv";
        query.bindValue(":tv", "true");
        verific = true;
    }
    if (tela->sacadaTrue()) {
        conditions << "sacada = :sacada";
        query.bindValue(":sacada", "true");
        verific = true;
    }
    if (tela->cofreTrue()) {
        conditions << "cofre = :cofre";
        query.bindValue(":cofre", "true");
        verific = true;
    }
    if (tela->cafeTrue()) {
        conditions << "cafe = :cafe";
        query.bindValue(":cafe", "true");
        verific = true;
    }
    if (tela->roupaoTrue()) {
        conditions << "roupao = :roupao";
        query.bindValue(":roupao", "true");
        verific = true;
    }
    if (tela->higieneTrue()) {
        conditions << "higiene = :higiene";
        query.bindValue(":higiene", "true");
        verific = true;
    }
    if (tela->servicoTrue()) {
        conditions << "servicoQuarto = :servico";
        query.bindValue(":servico", "true");
        verific = true;
    }
    if (tela->miniBarTrue()) {
        conditions << "minibar = :minibar";
        query.bindValue(":minibar", "true");
        verific = true;
    }

    // Adiciona as condições à consulta
    codigo += conditions.join(" AND ");

    // Verifica se ao menos um critério foi selecionado
    if (verific) {
        query.prepare(codigo);
        qDebug() << codigo;

        // Executa a consulta
        if (!query.exec()) {
            qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        } else {
            ui->tb_listaQuartos->clear();
            ui->tb_listaQuartos->setRowCount(0);
            int linha = 0;
            ui->tb_listaQuartos->setColumnCount(5);

            while (query.next()) {
                qDebug() << "Quarto encontrado:";
                ui->tb_listaQuartos->insertRow(linha);
                ui->tb_listaQuartos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tb_listaQuartos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tb_listaQuartos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tb_listaQuartos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                ui->tb_listaQuartos->setItem(linha, 4, new QTableWidgetItem(query.value(15).toString()));
                ui->tb_listaQuartos->setRowHeight(linha, 20);
                linha++;
            }
            ui->tb_listaQuartos->setColumnWidth(0, 20);
            ui->tb_listaQuartos->setColumnWidth(1, 100);
            ui->tb_listaQuartos->setColumnWidth(2, 100);
            ui->tb_listaQuartos->setColumnWidth(3, 200);
            ui->tb_listaQuartos->setColumnWidth(4, 70);

            QStringList cabecalho = {"ID", "Tipo do Quarto", "Título do Quarto", "Descrição", "Valor"};
            ui->tb_listaQuartos->setHorizontalHeaderLabels(cabecalho);
            ui->tb_listaQuartos->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tb_listaQuartos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tb_listaQuartos->selectRow(0);
            ui->tb_listaQuartos->verticalHeader()->setVisible(false);
            ui->tb_listaQuartos->setStyleSheet("QTableView {selection-background-color:blue}");
        }
    } else {
        qDebug() << "Nenhum critério de filtragem foi selecionado.";
    }
}


void listaQuartos::on_btn_excluir_clicked()
{
    int linha=ui->tb_listaQuartos->currentRow();
    int id=ui->tb_listaQuartos->item(linha, 0)->text().toInt();


    QSqlQuery query;
    query.prepare("delete from tb_quartos where id="+QString::number(id));
    if(query.exec())
    {
        ui->tb_listaQuartos->removeRow(linha);
        QMessageBox::information(this,"SUCESSO","Quarto excluido com sucesso");
    } else {
        QMessageBox::warning(this, "ERRO", "Erro ao excluir quarto");
    }
}


void listaQuartos::on_btn_filtrar_clicked()
{
    tela->show();
}

