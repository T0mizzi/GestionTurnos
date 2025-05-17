#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia, mes, anio;

public:
    Fecha(int d = 1, int m = 1, int a = 2000);

    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);

    int getDia() const;
    int getMes() const;
    int getAnio() const;

    void cargar();
    void mostrar() const;
};

#endif
