// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 6

#include <iostream>

using namespace std;

int main() {

    float numero = 0;
    cout <<  "Ingrese un numero: " <<endl;
    cin >> numero;
    if (numero > 0){
        cout << "El numero es positivo" <<endl;
    }
    else if (numero < 0){
        cout << "El numero es negativo" <<endl;
    }
    else{
        cout << "El numero es igual a 0" <<endl;
    }
    return 0;
}
