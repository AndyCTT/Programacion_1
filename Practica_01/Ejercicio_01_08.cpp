// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 8

#include <iostream>

using namespace std;

int main(){
    
    int numero = 0;
    cout << "Ingrese un numero entero: " <<endl;
    cin >> numero;
    if (numero % 2 == 0){
        cout << "El numero es par" <<endl;
    } else {
        cout <<"El numero es impar" <<endl;
    }
    return 0;
}