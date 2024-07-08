#ifndef RESERVASTELA_H
#define RESERVASTELA_H

#include <QDialog>

namespace Ui {
class reservasTela;
}

class reservasTela : public QDialog
{
    Q_OBJECT

public:
    explicit reservasTela(QWidget *parent = nullptr);
    ~reservasTela();

private slots:
    void on_btn_checkin_clicked();
    void on_btn_checkout_clicked();

    void on_btn_voltar_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::reservasTela *ui;
    QString m_id;
};

#endif // RESERVASTELA_H
