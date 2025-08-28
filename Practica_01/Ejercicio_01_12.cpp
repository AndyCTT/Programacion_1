// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 12

#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    do{
        cout << "Ingrese un numero entre 1 y 5: " << endl;
        cin >> numero;
    }while (numero < 1 || numero > 5);
    cout << "El numero ingresado es valido "<< endl;
    return 0;
}

