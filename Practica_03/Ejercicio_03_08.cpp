// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 8

#include <iostream>

using namespace std;

void convertir_dinero(int monto);

int main() {
    int monto = 0;
    cout << "Ingrese una cantidad de dinero en Bs: ";
    cin >> monto;
    convertir_dinero(monto);
    return 0;
}


void convertir_dinero(int monto) {
    int billete_200 = 0; 
    int billete_100 = 0;
    int billete_50 = 0;
    int moneda_5 = 0;
    int moneda_1 = 0;

    if (monto >= 200) {
        billete_200 = monto / 200;
        monto = monto % 200;
    }
    if (monto >= 100) {
        billete_100 = monto / 100;
        monto = monto % 100;
    }
    if (monto >= 50) {
        billete_50 = monto / 50;
        monto = monto % 50;
    }
    if (monto >= 5) {
        moneda_5 = monto / 5;
        monto = monto % 5;
    }
    if (monto >= 1) {
        moneda_1 = monto / 1;
        monto = monto % 1;
    }
    cout << billete_200 << " billetes de 200 Bs." << endl;
    cout << billete_100 << " billetes de 100 Bs." << endl;
    cout << billete_50 << " billetes de 50 Bs." << endl;
    cout << moneda_5 << " monedas de 5 Bs." << endl;
    cout << moneda_1 << " monedas de 1 Bs." << endl;

    
}