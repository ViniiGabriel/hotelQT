/********************************************************************************
** Form generated from reading UI file 'listaquartos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAQUARTOS_H
#define UI_LISTAQUARTOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_listaQuartos
{
public:
    QLabel *label;
    QTableWidget *tb_listaQuartos;
    QPushButton *pushButton;
    QPushButton *btn_filtrar;
    QPushButton *btn_aplicarfiltros;
    QPushButton *btn_excluir;

    void setupUi(QDialog *listaQuartos)
    {
        if (listaQuartos->objectName().isEmpty())
            listaQuartos->setObjectName("listaQuartos");
        listaQuartos->resize(664, 525);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        listaQuartos->setWindowIcon(icon);
        listaQuartos->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        label = new QLabel(listaQuartos);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        tb_listaQuartos = new QTableWidget(listaQuartos);
        tb_listaQuartos->setObjectName("tb_listaQuartos");
        tb_listaQuartos->setGeometry(QRect(20, 90, 621, 361));
        pushButton = new QPushButton(listaQuartos);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 488, 93, 31));
        btn_filtrar = new QPushButton(listaQuartos);
        btn_filtrar->setObjectName("btn_filtrar");
        btn_filtrar->setGeometry(QRect(21, 63, 91, 25));
        btn_aplicarfiltros = new QPushButton(listaQuartos);
        btn_aplicarfiltros->setObjectName("btn_aplicarfiltros");
        btn_aplicarfiltros->setGeometry(QRect(123, 63, 111, 25));
        btn_excluir = new QPushButton(listaQuartos);
        btn_excluir->setObjectName("btn_excluir");
        btn_excluir->setGeometry(QRect(20, 460, 101, 25));

        retranslateUi(listaQuartos);

        QMetaObject::connectSlotsByName(listaQuartos);
    } // setupUi

    void retranslateUi(QDialog *listaQuartos)
    {
        listaQuartos->setWindowTitle(QCoreApplication::translate("listaQuartos", "Quartos", nullptr));
        label->setText(QCoreApplication::translate("listaQuartos", "Lista de Quartos", nullptr));
        pushButton->setText(QCoreApplication::translate("listaQuartos", "Voltar", nullptr));
        btn_filtrar->setText(QCoreApplication::translate("listaQuartos", "Filtrar", nullptr));
        btn_aplicarfiltros->setText(QCoreApplication::translate("listaQuartos", "Aplicar filtros", nullptr));
        btn_excluir->setText(QCoreApplication::translate("listaQuartos", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaQuartos: public Ui_listaQuartos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAQUARTOS_H
