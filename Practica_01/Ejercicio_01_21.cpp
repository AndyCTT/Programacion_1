// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 21

#include <iostream>

using namespace std;
int main() {
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    cout << "Ingrese el primer numero entero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> numero2;

    for (int i = 1; i <= numero2; ++i) {
        resultado += numero1;
    }

    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}

