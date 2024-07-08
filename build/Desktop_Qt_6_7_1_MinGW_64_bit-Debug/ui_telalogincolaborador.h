/********************************************************************************
** Form generated from reading UI file 'telalogincolaborador.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGINCOLABORADOR_H
#define UI_TELALOGINCOLABORADOR_H

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

class Ui_telaLoginColaborador
{
public:
    QLabel *label_infoinvalida;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QPushButton *btn_login;

    void setupUi(QDialog *telaLoginColaborador)
    {
        if (telaLoginColaborador->objectName().isEmpty())
            telaLoginColaborador->setObjectName("telaLoginColaborador");
        telaLoginColaborador->resize(494, 204);
        telaLoginColaborador->setAcceptDrops(false);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
        telaLoginColaborador->setWindowIcon(icon);
        telaLoginColaborador->setStyleSheet(QString::fromUtf8("#telaLoginColaborador{\n"
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
"	font-weight:bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border-radius: 4px;\n"
"	border: 1px solid #3d5557\n"
"}\n"
""));
        label_infoinvalida = new QLabel(telaLoginColaborador);
        label_infoinvalida->setObjectName("label_infoinvalida");
        label_infoinvalida->setGeometry(QRect(150, 170, 211, 21));
        layoutWidget = new QWidget(telaLoginColaborador);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 441, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName("txt_username");

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txt_senha = new QLineEdit(layoutWidget);
        txt_senha->setObjectName("txt_senha");
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btn_login = new QPushButton(layoutWidget);
        btn_login->setObjectName("btn_login");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy);
        btn_login->setStyleSheet(QString::fromUtf8("#btn_login{\n"
"border-radius: 14px;\n"
"}"));

        verticalLayout_2->addWidget(btn_login);


        retranslateUi(telaLoginColaborador);

        QMetaObject::connectSlotsByName(telaLoginColaborador);
    } // setupUi

    void retranslateUi(QDialog *telaLoginColaborador)
    {
        telaLoginColaborador->setWindowTitle(QCoreApplication::translate("telaLoginColaborador", "Login", nullptr));
        label_infoinvalida->setText(QCoreApplication::translate("telaLoginColaborador", "Username ou senha inv\303\241lidos", nullptr));
        label->setText(QCoreApplication::translate("telaLoginColaborador", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("telaLoginColaborador", "Senha:", nullptr));
        btn_login->setText(QCoreApplication::translate("telaLoginColaborador", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaLoginColaborador: public Ui_telaLoginColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGINCOLABORADOR_H
