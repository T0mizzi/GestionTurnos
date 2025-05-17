#include <iostream>
#include "Medico.h"
#include "Paciente.h"

using namespace std;

int main() {
    Paciente paciente;
    Medico medico;

    cout << "--- Cargar Paciente ---" << endl;
    paciente.cargar();
    paciente.mostrar();

    cout << "\n--- Cargar Medico ---" << endl;
    medico.cargar();
    medico.mostrar();

    return 0;
}
