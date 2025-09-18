// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 20

#include <iostream>

using namespace std;
int main() {
    int numero=0;
    int contador = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Contar los dígitos
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    cout << "El numero tiene " << contador << " digitos." << endl;

    return 0;
}