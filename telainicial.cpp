#include "telainicial.h"
#include "ui_telainicial.h"
#include "clientes/telalogin.h"
#include "colaboradores/telalogincolaborador.h"

telaInicial::telaInicial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::telaInicial)
{
    ui->setupUi(this);

    QSqlDatabase db_hotel = QSqlDatabase::addDatabase("QSQLITE");
    db_hotel.setDatabaseName("../../dataBase/db_hotel");
    db_hotel.open();
}

telaInicial::~telaInicial()
{
    delete ui;
}


void telaInicial::on_btn_cliente_clicked()
{
    telaLogin tela;
    tela.setModal(true);
    tela.exec();
}


void telaInicial::on_btn_colaborador_clicked()
{
    telaLoginColaborador tela;
    tela.setModal(true);
    tela.exec();
}

