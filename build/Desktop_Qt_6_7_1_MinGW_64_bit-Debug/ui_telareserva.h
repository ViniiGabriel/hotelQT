/********************************************************************************
** Form generated from reading UI file 'telareserva.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELARESERVA_H
#define UI_TELARESERVA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaReserva
{
public:
    QTableWidget *tb_reservas;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *telaReserva)
    {
        if (telaReserva->objectName().isEmpty())
            telaReserva->setObjectName("telaReserva");
        telaReserva->resize(676, 461);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        telaReserva->setWindowIcon(icon);
        telaReserva->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        tb_reservas = new QTableWidget(telaReserva);
        tb_reservas->setObjectName("tb_reservas");
        tb_reservas->setGeometry(QRect(10, 50, 651, 361));
        label = new QLabel(telaReserva);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 351, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(telaReserva);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(532, 420, 131, 29));

        retranslateUi(telaReserva);

        QMetaObject::connectSlotsByName(telaReserva);
    } // setupUi

    void retranslateUi(QDialog *telaReserva)
    {
        telaReserva->setWindowTitle(QCoreApplication::translate("telaReserva", "Reservas", nullptr));
        label->setText(QCoreApplication::translate("telaReserva", "Lista de Reservas", nullptr));
        pushButton->setText(QCoreApplication::translate("telaReserva", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaReserva: public Ui_telaReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELARESERVA_H
