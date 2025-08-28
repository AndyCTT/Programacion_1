// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 24/08/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int main() {

    float radio = 0;
    float volumen = 0;

    cout << "Ingrese el radio de la esfera: " <<endl;
    cin >> radio;
    volumen = (4.0/3.05)*3.1416*(radio*radio*radio);
    cout <<"El volumen de la esfera es de: " << volumen <<endl;
    return 0;
}