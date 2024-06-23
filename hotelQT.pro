QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clientes/telacliente.cpp \
    clientes/telalogin.cpp \
    colaboradores/cadastroquartos.cpp \
    colaboradores/listaQuartos/telafiltrar.cpp \
    colaboradores/listaquartos.cpp \
    colaboradores/telacolaborador.cpp \
    colaboradores/telalogincolaborador.cpp \
    main.cpp \
    telainicial.cpp

HEADERS += \
    clientes/telacliente.h \
    clientes/telalogin.h \
    colaboradores/cadastroquartos.h \
    colaboradores/listaQuartos/telafiltrar.h \
    colaboradores/listaquartos.h \
    colaboradores/telacolaborador.h \
    colaboradores/telalogincolaborador.h \
    telainicial.h

FORMS += \
    clientes/telacliente.ui \
    clientes/telalogin.ui \
    colaboradores/cadastroquartos.ui \
    colaboradores/listaQuartos/telafiltrar.ui \
    colaboradores/listaquartos.ui \
    colaboradores/telacolaborador.ui \
    colaboradores/telalogincolaborador.ui \
    telainicial.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    dataBase/db_hotel
