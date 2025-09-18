// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 19


#include <iostream>

using namespace std;
int main() {
    int numero= 0;

    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}