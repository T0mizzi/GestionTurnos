#ifndef MEDICO_H
#define MEDICO_H

class Medico {
private:
    int legajo;
    char nombre[30];
    char apellido[30];
    int tipoEspecialidad;

public:
    void cargar();
    void mostrar() const;

    int getLegajo() const;
};

#endif
