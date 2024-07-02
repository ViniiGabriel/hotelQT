#include "telaquarto.h"
#include "ui_telaquarto.h"
#include <QtSql>
#include <QPixmap>

telaQuarto::telaQuarto(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaQuarto)
    ,m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_quartos where id="+QString::number(m_id));
    query.exec();
    query.first();
    ui->txt_titulo->setText(query.value(2).toString());
    ui->txt_decricao->setText(query.value(3).toString());
    ui->txt_decricao->setWordWrap(true);
    QPixmap pixmap(query.value(16).toString());
    ui->foto_pixmap->setPixmap(pixmap);
}

telaQuarto::~telaQuarto()
{
    delete ui;
}
