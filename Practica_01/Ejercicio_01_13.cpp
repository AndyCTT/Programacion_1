// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 13

#include <iostream>

using namespace std;

int main(){
    int numero = 0;
    int suma = 0;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    for (int i = 1; i <= numero; i++){
        suma += i;
    }
    cout << "La suma de losnumeros es: " << suma << endl;
    return 0;
}