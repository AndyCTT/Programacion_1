// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;
int main() {
    int numero=0;
    int cifra=0;
    int numero_invertido = 0;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    while (numero != 0) {
        cifra = numero % 10; 
        numero_invertido = numero_invertido * 10 + cifra; 
        numero /= 10; 
    }
    cout << "Número con las cifras al revés: " << numero_invertido << endl;

    return 0;
}

