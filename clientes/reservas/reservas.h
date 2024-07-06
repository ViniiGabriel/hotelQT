#ifndef RESERVAS_H
#define RESERVAS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

class Reservas{
private:
    int m_id;
    int DiaInicialReserva;
    int MesInicialReserva;
    int AnoInicialReserva;
    int DiaFinalReserva;
    int MesFinalReserva;
    int AnoFinalReserva;


public:
    Reservas(int id, int diaI, int mesI, int anoI, int diaF, int mesF, int anoF) : m_id(id), DiaInicialReserva(diaI),
        MesInicialReserva(mesI), AnoInicialReserva(anoI), DiaFinalReserva(diaF), MesFinalReserva(mesF), AnoFinalReserva(anoF) {}


    int verifConflito()
    {
        int cont = 0;
        int contRet = 0;
        int tamanhoQuery = 0;
        QSqlQuery query;
        query.prepare("select * from tb_reservas where idQuarto = :id");
        query.bindValue(":id", QString::number(m_id));
        if(!query.exec())
        {
            return 2;
        } else {
        while(query.next())
        {
            tamanhoQuery++;
            cont++;
            int DiaInicialExistente = query.value(1).toInt();
            int MesInicialExistente = query.value(2).toInt();
            int AnoInicialExistente = query.value(3).toInt();
            int DiaFinalExistente = query.value(4).toInt();
            int MesFinalExistente = query.value(5).toInt();
            int AnoFinalExistente = query.value(6).toInt();

            if(AnoInicialReserva >= AnoInicialExistente && AnoFinalReserva <= AnoFinalExistente){
            if(MesInicialReserva == MesInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P1";
                contRet++;
                continue;
            } else if (MesInicialReserva == MesFinalExistente && MesFinalReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P2";
                contRet++;
                continue;

            } else if (MesInicialReserva < MesInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P3";
                contRet++;
                continue;

            } else if (MesInicialReserva == MesFinalExistente && MesFinalReserva > MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P4";
                contRet++;
                continue;

            } else if (MesFinalReserva < MesInicialExistente)
            {
                qDebug() << "P5";
                contRet++;
                continue;

            } else if (MesInicialReserva > MesFinalExistente)
            {
                qDebug() << "P6";
                contRet++;
                continue;
            }
            }

            if(AnoInicialReserva < AnoInicialExistente && AnoFinalReserva == AnoInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P7";
                contRet++;
                continue;
            }

            if(AnoFinalReserva < AnoInicialExistente){
                qDebug() << "P8";
                contRet++;
                continue;
            }
            if(AnoInicialReserva == AnoFinalExistente && AnoFinalReserva > AnoFinalExistente && MesInicialReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P9";
                contRet++;
                continue;
            }
            if (AnoInicialReserva > AnoFinalExistente)
            {
                qDebug() << "P10";
                contRet++;
                continue;
            }
            if(AnoInicialReserva == AnoFinalExistente && MesInicialReserva == MesFinalExistente && DiaInicialReserva > DiaFinalExistente)
            {
                qDebug() << "P11";
                contRet++;
                continue;
            }
            if(AnoFinalReserva == AnoInicialExistente && MesFinalReserva == MesInicialExistente && DiaFinalReserva < DiaInicialExistente)
            {
                qDebug() << "P12";
                contRet++;
                continue;
            }
            if(AnoInicialReserva == AnoFinalExistente && MesInicialReserva > MesFinalExistente)
            {
                qDebug() << "P13";
                contRet++;
                continue;
            }
            if(AnoFinalReserva == AnoInicialExistente && MesFinalReserva < MesInicialExistente){
                qDebug() << "P14";
                contRet++;
                continue;
            }

        }

        if(contRet == tamanhoQuery){
            return 0;
        }

        if(cont!=0){
        return 1;
        } else {
            return 0;
        }
        }
    }

};

#endif
