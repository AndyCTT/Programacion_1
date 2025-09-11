// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int lanzamientos = 0;
    int caras = 0;
    int cruz = 0;
    cout << "Ingrese el numero de lanzamientos de la moneda: " << endl;
    cin >> lanzamientos;
    cout <<endl;
    for (int i = 0; i <lanzamientos ; i++) {
        
        int moneda = rand() % 2;
        if (moneda == 0) {
            cout << "Cara" << endl;
            caras = caras +1;
        } else {
            cout << "Cruz" << endl;
            cruz = cruz +1;
        }
    }
cout << "El porcentaje de caras es: " << (caras*100)/lanzamientos << "%" << endl;
cout << "El porcentaje de cruz es: " << (cruz*100)/lanzamientos << "%" << endl; 
    return 0;
}