#ifndef LISTAQUARTOS_H
#define LISTAQUARTOS_H

#include <QDialog>

namespace Ui {
class listaQuartos;
}

class listaQuartos : public QDialog
{
    Q_OBJECT

public:
    explicit listaQuartos(QWidget *parent = nullptr);
    ~listaQuartos();

private slots:

    void on_btn_filtrar_clicked();

private:
    Ui::listaQuartos *ui;
};

#endif // LISTAQUARTOS_H
