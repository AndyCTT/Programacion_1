// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 9 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main (){
    srand(time(0));
    int numero_vendedoras = 0;
    float total = 0;
    cout << "Ingrese el numero de vendedoras: ";
    cin >> numero_vendedoras;   
    for (int i = 1; i <= numero_vendedoras; i++){
        int antiguedad = rand() % 11; 
        int sueldo_basico = 0;
        if (antiguedad < 1){
            sueldo_basico = 1000;
        } else if (antiguedad >= 1 && antiguedad <= 3){
            sueldo_basico = 1500;
        } else if (antiguedad >= 4 && antiguedad <= 7){
            sueldo_basico = 2000;
        } else {
            sueldo_basico = 2500;
        }
        int total_vendido = rand() % 10001; 
        double comision = total_vendido * 0.10;
        double sueldo_total = sueldo_basico + comision;
        cout << "Vendedora " << i << ":\n";
        cout << "Antiguedad: " << antiguedad << " anios\n";
        cout << "Sueldo basico: $" << sueldo_basico << "\n";
        cout << "Total vendido: $" << total_vendido << "\n";
        cout << "Comision (10%): $" << comision << "\n";
        cout << "Sueldo total a pagar: $" << sueldo_total << "\n\n";
        total += sueldo_total;

    }
    cout << "Total a pagar a todas las vendedoras: $" << total << "\n";
    return 0;
}
