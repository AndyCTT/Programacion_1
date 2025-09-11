// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void par_impar(int numero);

int main() {
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    par_impar(numero);

    return 0;
}

void par_impar(int numero) {
    if (numero % 2 == 0){
        cout << "El numero es par" << endl;
    }
    else {
        cout << "El numero es impar" << endl;
    }
}