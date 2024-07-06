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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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
    QPushButton *btn_voltar;

    void setupUi(QDialog *listaClientes)
    {
        if (listaClientes->objectName().isEmpty())
            listaClientes->setObjectName("listaClientes");
        listaClientes->resize(662, 530);
        listaClientes->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: #cffdff;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: #afdcde;\n"
"	border-radius: 14px;\n"
"	border: 2px solid #3d5557;\n"
"	color: #3d5557;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	background-color: #b9faf4;\n"
"}\n"
"\n"
"\n"
"QLabel{\n"
"	color: #3d5557;\n"
"	font-weight:bold;\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background-color: #ebfffd;\n"
"	border: 1px solid #3d5557;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"	background-color: #9db3b1;\n"
"	font-weight: bold;\n"
"}"));
        label = new QLabel(listaClientes);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(listaClientes);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 440, 195, 31));
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
        btn_voltar = new QPushButton(listaClientes);
        btn_voltar->setObjectName("btn_voltar");
        btn_voltar->setGeometry(QRect(560, 500, 93, 29));

        retranslateUi(listaClientes);

        QMetaObject::connectSlotsByName(listaClientes);
    } // setupUi

    void retranslateUi(QDialog *listaClientes)
    {
        listaClientes->setWindowTitle(QCoreApplication::translate("listaClientes", "Clientes", nullptr));
        label->setText(QCoreApplication::translate("listaClientes", "Lista de Clientes", nullptr));
        btn_editar->setText(QCoreApplication::translate("listaClientes", "Editar", nullptr));
        btn_excluir->setText(QCoreApplication::translate("listaClientes", "Excluir", nullptr));
        btn_voltar->setText(QCoreApplication::translate("listaClientes", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaClientes: public Ui_listaClientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTACLIENTES_H
