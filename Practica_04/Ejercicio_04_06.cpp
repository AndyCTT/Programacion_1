// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 6
 
#include <iostream>

using namespace std;

int esPrimo(int numero) ;
int sumaDigitosDistintosDeCero(int numero) ;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int suma = sumaDigitosDistintosDeCero(numero);
    cout << "La suma de los digitos distintos de cero es: " << suma << endl;

    if (esPrimo(suma)) {
        cout << "La suma de los digitos distintos de cero es primo." << endl;
    } else {
        cout << "La suma de los digitos distintos de cero no es primo." << endl;
    }

    return 0;
}

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int sumaDigitosDistintosDeCero(int numero) {
    int suma = 0;
    while (numero != 0) {
        int digito = numero % 10;
        if (digito != 0) {
            suma += digito;
        }
        numero /= 10;
    }
    return suma;
}
