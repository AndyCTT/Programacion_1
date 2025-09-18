// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 24

#include <iostream>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "Menu de opciones:" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: "<<endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Has seleccionado la Opcion 1." << endl;
                break;
            case 2:
                cout << "Has seleccionado la Opcion 2." << endl;
                break;
            case 3:
                cout << "Has seleccionado la Opcion 3." << endl;
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
        }
        cout << endl; 
    } while (opcion != 0);

    return 0;
}