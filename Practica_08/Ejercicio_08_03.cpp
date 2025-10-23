// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Ingrese un numero entero para calcular la serie de Fibonacci: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Por favor, ingrese un numero entero no negativo." << endl;
    } else {
        cout << "Serie de Fibonacci hasta la posicion " << n << ":" << endl;
        for (int i = 0; i <= n-1; i++) {
            cout << "  " << fibonacci(i);
        }
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}