// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

void imc(float peso, float altura);
int main() {
    float peso = 0.0;
    float altura = 0.0;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    imc(peso, altura);
    return 0;
}

void imc(float peso, float altura) {

    cout << "Su IMC es: " << peso / (altura * altura) << endl;
        
}
