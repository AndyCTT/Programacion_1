// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 3


#include <iostream>

using namespace std;

int capicua(int numero);

int main() {
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    capicua(numero);
    return 0;
}

int capicua(int numero) {
    int invertido = 0;
    int digito =0;
    int original = numero;
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    if (invertido == original)
    {
        cout << "El numero es capicua" << endl;
    }
    else
    {
        cout << "El numero no es capicua" << endl;              
    }
    return invertido == original;
}









