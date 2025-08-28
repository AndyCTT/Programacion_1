// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

int main() {
    int edad = 0;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 12) {
        cout << "Usted es un niño" << endl;
    } else if (edad < 18) {
        cout << "Usted es un adolescente" << endl;
    } else if (edad < 60) {
        cout << "Usted es mayor de edad" << endl;
    } else {
        cout << "Usted es un adulto mayor" << endl;
    }
    return 0;
}