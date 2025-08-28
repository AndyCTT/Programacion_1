// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int main() {
    int nota = 0;

    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;

    switch (nota) {
        case 51 ... 59:
            cout << "Calificacion = C" << endl;
            break;
        case 60 ... 69:
            cout << "Calificacion = C+" << endl;
            break;
        case 70 ... 79:
            cout << "Calificacion = B" << endl;
            break;
        case 80 ... 89:
            cout << "Calificacion = B+" << endl;
            break;
        case 90 ... 94:
            cout << "Calificacion = A" << endl;
            break;
        case 95 ... 100:
            cout << "Calificacion = A+" << endl;
            break;
        default:
            cout << "Esta reprobado" << endl;
    }
    return 0;
}