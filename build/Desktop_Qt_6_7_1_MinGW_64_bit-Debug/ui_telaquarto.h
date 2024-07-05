/********************************************************************************
** Form generated from reading UI file 'telaquarto.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAQUARTO_H
#define UI_TELAQUARTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaQuarto
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *foto_pixmap;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *txt_titulo;
    QLabel *txt_decricao;
    QLineEdit *txt_mesInicial;
    QLineEdit *txt_anoInicial;
    QLineEdit *txt_mesFinal;
    QLineEdit *txt_anoFinal;
    QLineEdit *txt_diaFinal;
    QPushButton *btn_reserva;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txt_diaInicial;
    QLabel *txt_avisoData;

    void setupUi(QDialog *telaQuarto)
    {
        if (telaQuarto->objectName().isEmpty())
            telaQuarto->setObjectName("telaQuarto");
        telaQuarto->resize(488, 410);
        buttonBox = new QDialogButtonBox(telaQuarto);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(130, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        foto_pixmap = new QLabel(telaQuarto);
        foto_pixmap->setObjectName("foto_pixmap");
        foto_pixmap->setGeometry(QRect(10, 20, 141, 141));
        foto_pixmap->setScaledContents(true);
        layoutWidget = new QWidget(telaQuarto);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(161, 11, 301, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_titulo = new QLabel(layoutWidget);
        txt_titulo->setObjectName("txt_titulo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txt_titulo->sizePolicy().hasHeightForWidth());
        txt_titulo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(txt_titulo);

        txt_decricao = new QLabel(layoutWidget);
        txt_decricao->setObjectName("txt_decricao");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txt_decricao->sizePolicy().hasHeightForWidth());
        txt_decricao->setSizePolicy(sizePolicy1);
        txt_decricao->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(txt_decricao);

        txt_mesInicial = new QLineEdit(telaQuarto);
        txt_mesInicial->setObjectName("txt_mesInicial");
        txt_mesInicial->setGeometry(QRect(140, 270, 31, 21));
        txt_anoInicial = new QLineEdit(telaQuarto);
        txt_anoInicial->setObjectName("txt_anoInicial");
        txt_anoInicial->setGeometry(QRect(180, 270, 41, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_anoInicial->sizePolicy().hasHeightForWidth());
        txt_anoInicial->setSizePolicy(sizePolicy2);
        txt_mesFinal = new QLineEdit(telaQuarto);
        txt_mesFinal->setObjectName("txt_mesFinal");
        txt_mesFinal->setGeometry(QRect(290, 270, 31, 21));
        txt_anoFinal = new QLineEdit(telaQuarto);
        txt_anoFinal->setObjectName("txt_anoFinal");
        txt_anoFinal->setGeometry(QRect(330, 270, 41, 21));
        sizePolicy2.setHeightForWidth(txt_anoFinal->sizePolicy().hasHeightForWidth());
        txt_anoFinal->setSizePolicy(sizePolicy2);
        txt_diaFinal = new QLineEdit(telaQuarto);
        txt_diaFinal->setObjectName("txt_diaFinal");
        txt_diaFinal->setGeometry(QRect(250, 270, 31, 21));
        btn_reserva = new QPushButton(telaQuarto);
        btn_reserva->setObjectName("btn_reserva");
        btn_reserva->setGeometry(QRect(380, 270, 75, 24));
        label_3 = new QLabel(telaQuarto);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(12, 272, 81, 16));
        label_4 = new QLabel(telaQuarto);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 270, 16, 16));
        txt_diaInicial = new QLineEdit(telaQuarto);
        txt_diaInicial->setObjectName("txt_diaInicial");
        txt_diaInicial->setGeometry(QRect(100, 270, 31, 21));
        txt_avisoData = new QLabel(telaQuarto);
        txt_avisoData->setObjectName("txt_avisoData");
        txt_avisoData->setGeometry(QRect(130, 310, 211, 16));
        txt_avisoData->setAlignment(Qt::AlignCenter);

        retranslateUi(telaQuarto);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaQuarto, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaQuarto, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaQuarto);
    } // setupUi

    void retranslateUi(QDialog *telaQuarto)
    {
        telaQuarto->setWindowTitle(QCoreApplication::translate("telaQuarto", "Quarto", nullptr));
        foto_pixmap->setText(QCoreApplication::translate("telaQuarto", "foto", nullptr));
        txt_titulo->setText(QCoreApplication::translate("telaQuarto", "Tipo quarto", nullptr));
        txt_decricao->setText(QCoreApplication::translate("telaQuarto", "TextLabel", nullptr));
        btn_reserva->setText(QCoreApplication::translate("telaQuarto", "Reservar", nullptr));
        label_3->setText(QCoreApplication::translate("telaQuarto", "Dias de estadia:", nullptr));
        label_4->setText(QCoreApplication::translate("telaQuarto", "at\303\251", nullptr));
        txt_avisoData->setText(QCoreApplication::translate("telaQuarto", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaQuarto: public Ui_telaQuarto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAQUARTO_H
