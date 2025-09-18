// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 8
 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main() {
    srand(time(0));
    int n = 0;
    float precio = 0.0;
    float total_sin_iva = 0.0;
    float iva = 0.0;
    float total_con_iva = 0.0;
    float descuento = 0.0;
    float total_final = 0.0;
    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        precio = rand() % 31 + 20; // Genera un numero aleatorio entre 20 y 50
        total_sin_iva += precio;
        cout << "Precio del producto " << i + 1 << ": " << precio << " Bs" << endl; 
    }
    iva = total_sin_iva * 0.13;
    total_con_iva = total_sin_iva + iva;
    if (total_con_iva > 2500) {
        descuento = total_con_iva * 0.05;
    }
    total_final = total_con_iva - descuento;
    cout << "Total sin IVA: " << total_sin_iva << " Bs" << endl;
    cout << "IVA (13%): " << iva << " Bs" << endl;
    cout << "Total con IVA: " << total_con_iva << " Bs" << endl;
    cout << "Descuento : " << descuento << " Bs" << endl;
    cout << "Total final a pagar: " << total_final << " Bs" << endl;

    return 0;

}
