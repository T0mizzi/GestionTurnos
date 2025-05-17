#ifndef PACIENTE_H
#define PACIENTE_H

#include "Fecha.h"

class Paciente {
private:
    char dni[20];
    int numAfiliado;
    int edad;
    char nombre[30];
    char apellido[30];
    char codigoObraSocial[30];
    Fecha fechaIngreso;

public:
    void cargar();
    void mostrar() const;

    const char* getDNI() const;
    int getNumAfiliado() const;
};

#endif
