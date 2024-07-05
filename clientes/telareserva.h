#ifndef TELARESERVA_H
#define TELARESERVA_H

#include <QDialog>

namespace Ui {
class telaReserva;
}

class telaReserva : public QDialog
{
    Q_OBJECT

public:
    explicit telaReserva(QWidget *parent = nullptr, int id = 0);
    ~telaReserva();

private:
    Ui::telaReserva *ui;
    int m_id;
};

#endif // TELARESERVA_H
