/********************************************************************************
** Form generated from reading UI file 'telacliente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACLIENTE_H
#define UI_TELACLIENTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaCliente
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *txt_nome;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *txt_id;
    QTableWidget *tb_menu;
    QPushButton *btn_reservas;
    QPushButton *btn_notificacoes;
    QPushButton *btn_servico;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_filtrar;
    QPushButton *btn_aplicarFiltros;

    void setupUi(QDialog *telaCliente)
    {
        if (telaCliente->objectName().isEmpty())
            telaCliente->setObjectName("telaCliente");
        telaCliente->resize(804, 551);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        telaCliente->setWindowIcon(icon);
        telaCliente->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
"QLabel{\n"
"	color: #3d5557;\n"
"}\n"
"\n"
"QTableWidget {\n"
"	background-color: #ebfffd;\n"
"	border: 1px solid #3d5557;\n"
"}\n"
""));
        layoutWidget = new QWidget(telaCliente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(29, 28, 761, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold SemiConden")});
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        txt_nome = new QLabel(layoutWidget);
        txt_nome->setObjectName("txt_nome");
        txt_nome->setFont(font);

        horizontalLayout->addWidget(txt_nome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        txt_id = new QLabel(layoutWidget);
        txt_id->setObjectName("txt_id");
        txt_id->setFont(font);

        horizontalLayout->addWidget(txt_id);

        tb_menu = new QTableWidget(telaCliente);
        tb_menu->setObjectName("tb_menu");
        tb_menu->setGeometry(QRect(30, 80, 561, 421));
        btn_reservas = new QPushButton(telaCliente);
        btn_reservas->setObjectName("btn_reservas");
        btn_reservas->setGeometry(QRect(600, 80, 191, 51));
        btn_notificacoes = new QPushButton(telaCliente);
        btn_notificacoes->setObjectName("btn_notificacoes");
        btn_notificacoes->setGeometry(QRect(600, 140, 191, 51));
        btn_servico = new QPushButton(telaCliente);
        btn_servico->setObjectName("btn_servico");
        btn_servico->setGeometry(QRect(600, 200, 191, 51));
        layoutWidget1 = new QWidget(telaCliente);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 500, 202, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_filtrar = new QPushButton(layoutWidget1);
        btn_filtrar->setObjectName("btn_filtrar");

        horizontalLayout_2->addWidget(btn_filtrar);

        btn_aplicarFiltros = new QPushButton(layoutWidget1);
        btn_aplicarFiltros->setObjectName("btn_aplicarFiltros");

        horizontalLayout_2->addWidget(btn_aplicarFiltros);


        retranslateUi(telaCliente);

        QMetaObject::connectSlotsByName(telaCliente);
    } // setupUi

    void retranslateUi(QDialog *telaCliente)
    {
        telaCliente->setWindowTitle(QCoreApplication::translate("telaCliente", "Tela Inicial", nullptr));
        label_2->setText(QCoreApplication::translate("telaCliente", "Bem vindo ", nullptr));
        txt_nome->setText(QCoreApplication::translate("telaCliente", "Nome", nullptr));
        label->setText(QCoreApplication::translate("telaCliente", "ID:", nullptr));
        txt_id->setText(QCoreApplication::translate("telaCliente", "Nome", nullptr));
        btn_reservas->setText(QCoreApplication::translate("telaCliente", "Reservas", nullptr));
        btn_notificacoes->setText(QCoreApplication::translate("telaCliente", "Notifica\303\247\303\265es", nullptr));
        btn_servico->setText(QCoreApplication::translate("telaCliente", "Pedir servi\303\247o de limpeza", nullptr));
        btn_filtrar->setText(QCoreApplication::translate("telaCliente", "Filtrar", nullptr));
        btn_aplicarFiltros->setText(QCoreApplication::translate("telaCliente", "Aplicar Filtros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaCliente: public Ui_telaCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTE_H
