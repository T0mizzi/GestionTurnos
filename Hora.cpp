#include "Hora.h"
#include <iostream>
using namespace std;

Hora::Hora(int h, int m) : hora(h), minuto(m) {}

void Hora::setHora(int h) { hora = h; }
void Hora::setMinuto(int m) { minuto = m; }

int Hora::getHora() const { return hora; }
int Hora::getMinuto() const { return minuto; }

void Hora::cargar() {
    cout << "Hora (0-23): "; cin >> hora;
    cout << "Minuto (0-59): "; cin >> minuto;
}

void Hora::mostrar() const {
    cout << (hora < 10 ? "0" : "") << hora << ":"
         << (minuto < 10 ? "0" : "") << minuto;
}
