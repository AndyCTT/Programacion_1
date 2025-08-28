// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 15

#include <iostream>

using namespace std;

int main(){
    int numero_notas = 0;
    float suma = 0;
    float promedio = 0;
    cout << "Ingrese el numero de notas: " << endl;
    cin >> numero_notas;
    for (int i = 1; i <= numero_notas; i++){
        float nota = 0.0;
        cout << "Ingrese la nota " << i << ": " << endl;
        cin >> nota;
        suma = suma + nota;
    }
    promedio = suma / numero_notas;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}
