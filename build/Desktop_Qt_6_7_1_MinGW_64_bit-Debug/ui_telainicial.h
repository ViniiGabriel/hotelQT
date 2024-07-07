/********************************************************************************
** Form generated from reading UI file 'telainicial.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIAL_H
#define UI_TELAINICIAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaInicial
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_cliente;
    QLabel *label_2;
    QPushButton *btn_colaborador;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *telaInicial)
    {
        if (telaInicial->objectName().isEmpty())
            telaInicial->setObjectName("telaInicial");
        telaInicial->resize(578, 348);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        telaInicial->setWindowIcon(icon);
        telaInicial->setStyleSheet(QString::fromUtf8("#telaInicial{\n"
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
"}\n"
""));
        centralwidget = new QWidget(telaInicial);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 451, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(52);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        btn_cliente = new QPushButton(centralwidget);
        btn_cliente->setObjectName("btn_cliente");
        btn_cliente->setGeometry(QRect(80, 200, 191, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 160, 291, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria Math")});
        font1.setPointSize(11);
        label_2->setFont(font1);
        btn_colaborador = new QPushButton(centralwidget);
        btn_colaborador->setObjectName("btn_colaborador");
        btn_colaborador->setGeometry(QRect(310, 200, 191, 71));
        telaInicial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(telaInicial);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 578, 22));
        telaInicial->setMenuBar(menubar);
        statusbar = new QStatusBar(telaInicial);
        statusbar->setObjectName("statusbar");
        telaInicial->setStatusBar(statusbar);

        retranslateUi(telaInicial);

        QMetaObject::connectSlotsByName(telaInicial);
    } // setupUi

    void retranslateUi(QMainWindow *telaInicial)
    {
        telaInicial->setWindowTitle(QCoreApplication::translate("telaInicial", "Hotel ZZZoneca", nullptr));
        label->setText(QCoreApplication::translate("telaInicial", "Hotel ZZZoneca", nullptr));
        btn_cliente->setText(QCoreApplication::translate("telaInicial", "Sou cliente", nullptr));
        label_2->setText(QCoreApplication::translate("telaInicial", "Bem vindo, selecione uma op\303\247\303\243o para navegar:", nullptr));
        btn_colaborador->setText(QCoreApplication::translate("telaInicial", "Sou colaborador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaInicial: public Ui_telaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIAL_H
