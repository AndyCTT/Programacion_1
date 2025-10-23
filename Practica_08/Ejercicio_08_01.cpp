// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 1


#include <iostream>
using namespace std;
int suma_digitos(int n);

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    if (numero < 0) {
        cout << "Por favor, ingrese un numero positivo." << endl;
    } else {
        int resultado = suma_digitos(numero);
        cout << "La suma de los digitos de " << numero << " es: " << resultado << endl;
    }
    return 0;
}

int suma_digitos(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + suma_digitos(n / 10);
    }
}
