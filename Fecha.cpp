#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

void Fecha::setDia(int d) { dia = d; }
void Fecha::setMes(int m) { mes = m; }
void Fecha::setAnio(int a) { anio = a; }

int Fecha::getDia() const { return dia; }
int Fecha::getMes() const { return mes; }
int Fecha::getAnio() const { return anio; }

void Fecha::cargar() {
    cout << "Dia: "; cin >> dia;
    cout << "Mes: "; cin >> mes;
    cout << "Anio: "; cin >> anio;
}

void Fecha::mostrar() const {
    cout << dia << "/" << mes << "/" << anio;
}
