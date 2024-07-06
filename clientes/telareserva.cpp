#include "telareserva.h"
#include "ui_telareserva.h"
#include <QtSql>
#include <QMessageBox>


telaReserva::telaReserva(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaReserva)
    , m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_reservas where idCliente="+QString::number(m_id));
    if(!query.exec()) {QMessageBox::warning(this, "Erro", "Falha ao acessar o banco de dados");}
    else {
            int linha=0;
            ui->tb_reservas->setColumnCount(3);
            while(query.next())
            {

                int dI = query.value(1).toInt();
                int mI = query.value(2).toInt();
                QString aI = query.value(3).toString();
                int dF = query.value(4).toInt();
                int mF = query.value(5).toInt();
                QString aF = query.value(6).toString();

                QString diaI, mesI, diaF, mesF;

                if(dI <= 9){
                    diaI = "0"+QString::number(dI);
                }
                if(mI <= 9){
                    mesI = "0"+QString::number(mI) ;
                }
                if(dF <= 9){
                    diaF = "0"+QString::number(dF);
                }
                if(mF <= 9){
                    mesF = "0"+QString::number(mF);
                }


                QString dataCheckin = diaI + "/" + mesI + "/" + aI;
                QString dataCheckout = diaF + "/" + mesF + "/" + aF;

                ui->tb_reservas->insertRow(linha);
                ui->tb_reservas->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tb_reservas->setItem(linha, 1, new QTableWidgetItem(dataCheckin));
                ui->tb_reservas->setItem(linha, 2, new QTableWidgetItem(dataCheckout));
                ui->tb_reservas->setRowHeight(linha, 20);
                linha++;
            }
            ui->tb_reservas->setColumnWidth(0, 200);
            ui->tb_reservas->setColumnWidth(1, 100);
            ui->tb_reservas->setColumnWidth(2, 100);

            QStringList cabecalho = {"Quarto","Check-in","Check-out"};
            ui->tb_reservas->setHorizontalHeaderLabels(cabecalho);
            ui->tb_reservas->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tb_reservas->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tb_reservas->selectRow(0);
            ui->tb_reservas->verticalHeader()->setVisible(false);
            ui->tb_reservas->setStyleSheet("QTableView {selection-background-color:blue}");
        }

        query.prepare("select * from tb_quartos");
        if(query.exec()){
            while(query.next()){
                for(int i=0; i < ui->tb_reservas->rowCount(); i++){
                    if(query.value(0) == ui->tb_reservas->item(i, 0)->text())
                    {
                        ui->tb_reservas->setItem(i, 0, new QTableWidgetItem(query.value(2).toString()));
                    }
                }
            }

        }
    }


telaReserva::~telaReserva()
{
    delete ui;
}

void telaReserva::on_pushButton_clicked()
{
    this->close();
}

