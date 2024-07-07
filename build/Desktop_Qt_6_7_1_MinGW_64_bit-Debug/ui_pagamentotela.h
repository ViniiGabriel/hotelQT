/********************************************************************************
** Form generated from reading UI file 'pagamentotela.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGAMENTOTELA_H
#define UI_PAGAMENTOTELA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pagamentoTela
{
public:
    QLabel *label;
    QPushButton *btn_finalizar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *pagamentoTela)
    {
        if (pagamentoTela->objectName().isEmpty())
            pagamentoTela->setObjectName("pagamentoTela");
        pagamentoTela->resize(540, 273);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        pagamentoTela->setWindowIcon(icon);
        pagamentoTela->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border-radius: 4px;\n"
"	border: 1px solid #3d5557\n"
"}\n"
""));
        label = new QLabel(pagamentoTela);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 431, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        btn_finalizar = new QPushButton(pagamentoTela);
        btn_finalizar->setObjectName("btn_finalizar");
        btn_finalizar->setGeometry(QRect(90, 200, 351, 41));
        layoutWidget = new QWidget(pagamentoTela);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 80, 491, 102));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_2->addWidget(lineEdit_3);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout->addWidget(lineEdit_4);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(pagamentoTela);

        QMetaObject::connectSlotsByName(pagamentoTela);
    } // setupUi

    void retranslateUi(QDialog *pagamentoTela)
    {
        pagamentoTela->setWindowTitle(QCoreApplication::translate("pagamentoTela", "Tela de pagamento", nullptr));
        label->setText(QCoreApplication::translate("pagamentoTela", "Digite os dados do seu cart\303\243o:", nullptr));
        btn_finalizar->setText(QCoreApplication::translate("pagamentoTela", "Finalizar", nullptr));
        label_2->setText(QCoreApplication::translate("pagamentoTela", "Titular:", nullptr));
        label_3->setText(QCoreApplication::translate("pagamentoTela", "N\302\272 Cart\303\243o:", nullptr));
        label_4->setText(QCoreApplication::translate("pagamentoTela", "Validade:", nullptr));
        label_5->setText(QCoreApplication::translate("pagamentoTela", "CVV:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pagamentoTela: public Ui_pagamentoTela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGAMENTOTELA_H
