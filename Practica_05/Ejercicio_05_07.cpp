// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;
int mostrarVector(vector<int>& vec, int n);
int main() {
    vector<int> vectorEnteros;
    int numero;
    cout << "Ingrese hasta 10 numeros enteros (un numero negativo para terminar): " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numero;
        if (numero < 0) {
            break;
        }
        vectorEnteros.push_back(numero);
    }
    cout << "Elementos introducidos en el vector: ";
    mostrarVector(vectorEnteros, vectorEnteros.size());
    return 0;
}
int mostrarVector(vector<int>& vec, int n) {
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}

