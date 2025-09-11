// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

float celsius_fahrenheit(float celsius);

int main() {
    float celsius = 0.0;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    celsius_fahrenheit(celsius);
    return 0;
}
float celsius_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit";
    return fahrenheit;
}
    
