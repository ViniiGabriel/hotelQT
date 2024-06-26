/********************************************************************************
** Form generated from reading UI file 'telareservas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELARESERVAS_H
#define UI_TELARESERVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_telaReservas
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *telaReservas)
    {
        if (telaReservas->objectName().isEmpty())
            telaReservas->setObjectName("telaReservas");
        telaReservas->resize(400, 300);
        buttonBox = new QDialogButtonBox(telaReservas);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(telaReservas);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaReservas, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaReservas, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaReservas);
    } // setupUi

    void retranslateUi(QDialog *telaReservas)
    {
        telaReservas->setWindowTitle(QCoreApplication::translate("telaReservas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaReservas: public Ui_telaReservas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELARESERVAS_H
