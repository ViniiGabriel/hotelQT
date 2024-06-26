/********************************************************************************
** Form generated from reading UI file 'listaclientes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTACLIENTES_H
#define UI_LISTACLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listaClientes
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_editar;
    QPushButton *btn_excluir;
    QTableWidget *tb_listaClientes;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *listaClientes)
    {
        if (listaClientes->objectName().isEmpty())
            listaClientes->setObjectName("listaClientes");
        listaClientes->resize(662, 530);
        label = new QLabel(listaClientes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        layoutWidget = new QWidget(listaClientes);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 440, 158, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_editar = new QPushButton(layoutWidget);
        btn_editar->setObjectName("btn_editar");

        horizontalLayout->addWidget(btn_editar);

        btn_excluir = new QPushButton(layoutWidget);
        btn_excluir->setObjectName("btn_excluir");

        horizontalLayout->addWidget(btn_excluir);

        tb_listaClientes = new QTableWidget(listaClientes);
        tb_listaClientes->setObjectName("tb_listaClientes");
        tb_listaClientes->setGeometry(QRect(10, 70, 621, 361));
        buttonBox = new QDialogButtonBox(listaClientes);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(310, 490, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(listaClientes);

        QMetaObject::connectSlotsByName(listaClientes);
    } // setupUi

    void retranslateUi(QDialog *listaClientes)
    {
        listaClientes->setWindowTitle(QCoreApplication::translate("listaClientes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("listaClientes", "Lista de Clientes", nullptr));
        btn_editar->setText(QCoreApplication::translate("listaClientes", "Editar", nullptr));
        btn_excluir->setText(QCoreApplication::translate("listaClientes", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaClientes: public Ui_listaClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTACLIENTES_H
