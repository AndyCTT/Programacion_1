// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

double calcularTarifa(double kmRecorridos);

int main() {
    double kmRecorridos = 0.0;
    cout << "Ingrese la distancia recorrida en kilometros: ";
    cin >> kmRecorridos;
    calcularTarifa(kmRecorridos);
    return 0;
}
double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 10.0;
    double precioPorKm = 2.0;
    double total = tarifaBase + (precioPorKm * kmRecorridos);
    if (kmRecorridos > 10) {
        total *= 0.9;
    }
    cout << "El precio total del viaje es: " << total << " Bs." << endl;
    return total;
}

