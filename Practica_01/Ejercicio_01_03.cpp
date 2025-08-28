// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 24/08/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int main()
{
    float altura = 0;
    float base = 0;
    float area = 0;
    cout << "Ingrse la altura del triangulo: " << endl;
    cin >> altura;
    cout << "Ingrese la ase del triangulo: " << endl;
    cin >> base;
    area = (base * altura)/2;
    cout << "Elarea del triangulo es: " << area << endl;
    return 0;
}
