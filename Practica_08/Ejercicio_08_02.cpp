// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;    
int potencia(int a, int n);
int main() {
    int base, exponente;
    cout << "Ingrese la base (entero): ";
    cin >> base;
    cout << "Ingrese el exponente (entero no negativo): ";
    cin >> exponente;
    if (exponente < 0) {
        cout << "Por favor, ingrese un exponente no negativo." << endl;
    } else {
        int resultado = potencia(base, exponente);
        cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
    }
    return 0;
}
int potencia(int a, int n) {
    if (n == 0) {
        return 1; 
    } else {
        return a * potencia(a, n - 1);
    }
}