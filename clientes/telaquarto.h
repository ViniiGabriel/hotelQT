#ifndef TELAQUARTO_H
#define TELAQUARTO_H

#include <QDialog>

namespace Ui {
class telaQuarto;
}

class telaQuarto : public QDialog
{
    Q_OBJECT

public:
    explicit telaQuarto(QWidget *parent = nullptr, int id = 0);
    ~telaQuarto();

private:
    Ui::telaQuarto *ui;
    int m_id;
};

#endif // TELAQUARTO_H
