// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void tiempo(int minutos);
int main() {
    int minutos = 0;
    cout << "Ingrese el tiempo total trabajado en minutos: ";
    cin >> minutos;
    tiempo(minutos);
    return 0;
}
void tiempo(int minutos) {
    int jornada= 8 * 60; 
    if (minutos > jornada) {
        cout << "Ha trabajado " << minutos - jornada<< " minutos extra." << endl;
    } else if (minutos < jornada) {
        cout << "Debe trabajar " << jornada- minutos << " minutos mas." << endl;
    } else {
        cout << "Ha cumplido con su jornada laboral." << endl;
    }

}

