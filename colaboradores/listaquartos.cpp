#include "listaquartos.h"
#include "ui_listaquartos.h"
#include <QMessageBox>
#include <QDebug>

listaQuartos::listaQuartos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::listaQuartos)
{
    ui->setupUi(this);
    tela = new telaFiltrar(this);
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
    bool verific = false;
    QString codigo = "select * from tb_quartos where ";

    QStringList conditions;

    if (tela->wifiTrue()) {
        conditions << "wifi = :wifi";
        verific = true;
    }
    if (tela->arTrue()) {
        conditions << "ar = :ar";
        verific = true;
    }
    if (tela->tvTrue()) {
        conditions << "tv = :tv";
        verific = true;
    }
    if (tela->sacadaTrue()) {
        conditions << "sacada = :sacada";
        verific = true;
    }
    if (tela->cofreTrue()) {
        conditions << "cofre = :cofre";
        verific = true;
    }
    if (tela->cafeTrue()) {
        conditions << "cafe = :cafe";
        verific = true;
    }
    if (tela->roupaoTrue()) {
        conditions << "roupao = :roupao";
        verific = true;
    }
    if (tela->higieneTrue()) {
        conditions << "higiene = :higiene";
        verific = true;
    }
    if (tela->servicoTrue()) {
        conditions << "servicoQuarto = :servico";
        verific = true;
    }
    if (tela->miniBarTrue()) {
        conditions << "minibar = :minibar";
        verific = true;
    }
    if (tela->banheiraTrue()) {
        conditions << "banheira = :banheira";
        verific = true;
    }

    codigo += conditions.join(" and ");
    if (verific) {
        query.prepare(codigo);
        query.bindValue(":wifi", "true");
        query.bindValue(":ar", "true");
        query.bindValue(":tv", "true");
        query.bindValue(":sacada", "true");
        query.bindValue(":banheira", "true");
        query.bindValue(":cofre", "true");
        query.bindValue(":cafe", "true");
        query.bindValue(":roupao", "true");
        query.bindValue(":higiene", "true");
        query.bindValue(":servico", "true");
        query.bindValue(":minibar", "true");

        if (!query.exec()) {
            qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        } else {
            ui->tb_listaQuartos->clear();
            ui->tb_listaQuartos->setRowCount(0);
            int linha = 0;
            ui->tb_listaQuartos->setColumnCount(5);
            while (query.next()) {
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
        query.prepare("select * from tb_quartos");
        if(query.exec())
        {
            ui->tb_listaQuartos->clear();
            ui->tb_listaQuartos->setRowCount(0);
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

            QStringList cabecalho = {"ID", "Tipo do Quarto", "Título do Quarto", "Descrição", "Valor"};
            ui->tb_listaQuartos->setHorizontalHeaderLabels(cabecalho);
            ui->tb_listaQuartos->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tb_listaQuartos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tb_listaQuartos->selectRow(0);
            ui->tb_listaQuartos->verticalHeader()->setVisible(false);
            ui->tb_listaQuartos->setStyleSheet("QTableView {selection-background-color:blue}");
    }
}
}


void listaQuartos::on_btn_excluir_clicked()
{
    int linha=ui->tb_listaQuartos->currentRow();
    int id=ui->tb_listaQuartos->item(linha, 0)->text().toInt();

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

