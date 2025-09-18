// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 22

#include <iostream>

using namespace std;

int main() {
    int numero1 = 0;
    int numero2 = 0;

    cout << "Ingrese el primer numero entero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> numero2;

    if (numero1 % numero2 == 0 || numero2 % numero1 == 0) {
        cout << "Los numeros son multiplos entre si." << endl;
    } else {
        cout << "Los numeros no son multiplos entre si." << endl;
    }

    return 0;
}