#ifndef HORA_H
#define HORA_H

class Hora {
private:
    int hora, minuto;

public:
    Hora(int h = 0, int m = 0);

    void setHora(int h);
    void setMinuto(int m);

    int getHora() const;
    int getMinuto() const;

    void cargar();
    void mostrar() const;
};

#endif
