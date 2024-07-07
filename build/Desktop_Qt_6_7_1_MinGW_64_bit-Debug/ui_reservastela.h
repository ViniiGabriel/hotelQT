/********************************************************************************
** Form generated from reading UI file 'reservastela.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVASTELA_H
#define UI_RESERVASTELA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reservasTela
{
public:
    QTableWidget *tb_reservas;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_cancelar;
    QPushButton *btn_checkin;
    QPushButton *btn_checkout;
    QPushButton *btn_voltar;

    void setupUi(QDialog *reservasTela)
    {
        if (reservasTela->objectName().isEmpty())
            reservasTela->setObjectName("reservasTela");
        reservasTela->resize(697, 529);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        reservasTela->setWindowIcon(icon);
        reservasTela->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        tb_reservas = new QTableWidget(reservasTela);
        tb_reservas->setObjectName("tb_reservas");
        tb_reservas->setGeometry(QRect(20, 70, 651, 361));
        label = new QLabel(reservasTela);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 281, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(reservasTela);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 440, 295, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName("btn_cancelar");

        horizontalLayout->addWidget(btn_cancelar);

        btn_checkin = new QPushButton(layoutWidget);
        btn_checkin->setObjectName("btn_checkin");

        horizontalLayout->addWidget(btn_checkin);

        btn_checkout = new QPushButton(layoutWidget);
        btn_checkout->setObjectName("btn_checkout");

        horizontalLayout->addWidget(btn_checkout);

        btn_voltar = new QPushButton(reservasTela);
        btn_voltar->setObjectName("btn_voltar");
        btn_voltar->setGeometry(QRect(562, 488, 121, 31));

        retranslateUi(reservasTela);

        QMetaObject::connectSlotsByName(reservasTela);
    } // setupUi

    void retranslateUi(QDialog *reservasTela)
    {
        reservasTela->setWindowTitle(QCoreApplication::translate("reservasTela", "Reservas", nullptr));
        label->setText(QCoreApplication::translate("reservasTela", "Lista de Reservas", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("reservasTela", "Cancelar", nullptr));
        btn_checkin->setText(QCoreApplication::translate("reservasTela", "Check-in", nullptr));
        btn_checkout->setText(QCoreApplication::translate("reservasTela", "Check-out", nullptr));
        btn_voltar->setText(QCoreApplication::translate("reservasTela", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reservasTela: public Ui_reservasTela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVASTELA_H
