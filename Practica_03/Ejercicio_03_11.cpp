// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;

double retirarDinero(double saldo, double cantidad);

int main() {
    double saldo = 1000.0;
    double cantidad = 0.0;
    retirarDinero(saldo, cantidad);
    return 0;
}
double retirarDinero(double saldo, double cantidad) {
    do {
        cout << "Ingrese la cantidad a retirar: ";
        cin >> cantidad;
        if (int(cantidad) % 10 != 0) {
            cout << "La cantidad a retirar debe ser multiplo de 10." << endl;
        }

    } while (int(cantidad) % 10 != 0);

    if (cantidad > saldo) {
        cout << "Saldo insuficiente." << endl;
    } 
    else {
        saldo = saldo - cantidad;
        cout << "Retiro exitoso. Saldo actual: " << saldo << " Bs." << endl;
    }
    return saldo;
}
