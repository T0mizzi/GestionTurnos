#include "Medico.h"
#include <iostream>
using namespace std;

void Medico::cargar() {
    cout << "Legajo del medico: ";
    cin >> legajo;
    cin.ignore();
    cout << "Nombre: ";
    cin.getline(nombre, 30);
    cout << "Apellido: ";
    cin.getline(apellido, 30);
    cout << "ID Tipo de Especialidad: ";
    cin >> tipoEspecialidad;
}

void Medico::mostrar() const {
    cout << "\n--- Datos del Medico ---" << endl;
    cout << "Legajo: " << legajo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "ID Especialidad: " << tipoEspecialidad << endl;
}

int Medico::getLegajo() const {
    return legajo;
}
