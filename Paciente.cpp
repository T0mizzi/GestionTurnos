#include "Paciente.h"
#include <iostream>
#include <cstring>
using namespace std;

void Paciente::cargar() {
    cout << "DNI: ";
    cin.ignore();
    cin.getline(dni, 20);
    cout << "Numero de Afiliado: ";
    cin >> numAfiliado;
    cout << "Edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Nombre: ";
    cin.getline(nombre, 30);
    cout << "Apellido: ";
    cin.getline(apellido, 30);
    cout << "Codigo de Obra Social: ";
    cin.getline(codigoObraSocial, 30);
    cout << "Fecha de ingreso al sistema:" << endl;
    fechaIngreso.cargar();
}

void Paciente::mostrar() const {
    cout << "\n--- Datos del Paciente ---" << endl;
    cout << "DNI: " << dni << endl;
    cout << "Afiliado Nro: " << numAfiliado << endl;
    cout << "Edad: " << edad << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Obra Social: " << codigoObraSocial << endl;
    cout << "Fecha de Ingreso: ";
    fechaIngreso.mostrar();
    cout << endl;
}

const char* Paciente::getDNI() const {
    return dni;
}

int Paciente::getNumAfiliado() const {
    return numAfiliado;
}
