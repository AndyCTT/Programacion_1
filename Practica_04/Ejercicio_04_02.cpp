// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

double CalcularVolumen(double radio, double altura = 10);

int main(){
    double radio =0;
    int altura = 10;
    cout << "Ingrese el valor del radio: ";
    cin >> radio;
    CalcularVolumen(radio, altura);
    return 0;
}

double CalcularVolumen(double radio, double altura){
    const double PI = 3.1416;
    double volumen = PI * radio * radio * altura;
    cout << "El volumen del cilindro es: " << volumen << endl;
    return volumen;
}






