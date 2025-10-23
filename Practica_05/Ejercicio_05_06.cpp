// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 6


#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int sumarVectores(vector<int>& vec1,vector<int>& vec2, vector<int>& resultado);
int mostrarVector(vector<int>& vec);
int main() {
    srand((time(0)));
    int N;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;
    vector<int> vector1;
    vector<int> vector2;
    vector<int> resultado;

    for (int i = 0; i < N; i++) {
        vector1.push_back(rand() % 10); 
        vector2.push_back(rand() % 10); 
    }
    sumarVectores(vector1, vector2, resultado);
    cout << "Vector 1: ";
    mostrarVector(vector1);
    cout << "Vector 2: ";
    mostrarVector(vector2);
    cout << "Vector resultado (suma): ";
    mostrarVector(resultado);

    return 0;
}
int sumarVectores(vector<int>& vec1,vector<int>& vec2, vector<int>& resultado) {
    for (int i = 0; i < vec1.size(); i++) {
        resultado.push_back(vec1[i] + vec2[i]);
    }
    return 0;
}
int mostrarVector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}