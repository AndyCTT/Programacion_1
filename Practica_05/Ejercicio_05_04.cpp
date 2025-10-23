// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 4


#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    int N;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;

    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> resultado(N);

    srand(static_cast<unsigned int>(time(0)));

   
    for (int i = 0; i < N; i++) {
        vector1[i] = rand() % 10; // Valores entre 0 y 9
        vector2[i] = rand() % 10; // Valores entre 0 y 9
    }

    
    for (int i = 0; i < N; i++) {
        resultado[i] = vector1[i] * vector2[i];
    }

    
    cout << "Vector 1: ";
    for (int val : vector1) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Vector 2: ";
    for (int val : vector2) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Resultado de la multiplicacion: ";
    for (int val : resultado) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}