// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 25

#include <iostream>

using namespace std;

int main() {
    int numero, resultado;
    char respuesta;

    do {
        cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
        cin >> numero;

        cout << "Tabla de multiplicar del " << numero << ":\n";
        for (int i = 1; i <= 10; ++i) {
            resultado = numero * i;
            cout << numero << " x " << i << " = " << resultado << endl;
        }

        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "¡Gracias por usar el programa!" << endl;

    return 0;
}