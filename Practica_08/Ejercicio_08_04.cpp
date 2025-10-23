// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int mcd(int a, int b);

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros para calcular su MCD: ";
    cin >> num1 >> num2;
    cout << "El Maximo Comun Divisor de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << endl;
    return 0;
}

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}

