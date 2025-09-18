// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 16

#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    int cont = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    for (int i = 2; i <= numero / 2; i++) {        
        if (numero % i == 0) {
            cont = cont+1;  
        }  
    }
    if (cont == 0 ) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }
    return 0;
}
