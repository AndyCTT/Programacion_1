// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 17
#include <iostream>

using namespace std;
int main() {
    int numero = 0;
    int suma = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    for (int i = 1; i <= numero / 2; i++) {        
        if (numero % i == 0) {
            suma = suma + i;  
        }  
    }
    if (suma == numero ) {
        cout << "El numero " << numero << " es amigo." << endl;
    } else {
        cout << "El numero " << numero << " no es amigo." << endl;
    }
    return 0;
}