// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int sumaVector(vector<int>& vec, int indice); 
int main() {
    srand(time(0));   
    vector<int> numeros;
    int n, valor;
    cout << "Ingrese la cantidad de numeros a sumar: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        valor = rand() % 100;
        numeros.push_back(valor);
    }   

    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    int resultado = sumaVector(numeros, 0); 
    cout << "La suma es: " << resultado << endl;


    return 0;
}

int sumaVector(vector<int>& vec, int indice) { 
    if (indice == vec.size()) {
        return 0;
    }
    return vec[indice] + sumaVector(vec, indice + 1);
}