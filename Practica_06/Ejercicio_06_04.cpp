// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 4

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, k;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> N;

    vector<int> numeros(N);
    cout << "Ingrese " << N << " numeros:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> numeros[i];
    }

    cout << "Ingrese el numero de posiciones a rotar a la derecha: ";
    cin >> k;
    k = k % N; 

    vector<int> rotado(N);
    for (int i = 0; i < N; ++i) {
        rotado[(i + k) % N] = numeros[i];
    }

    cout << "Vector despues de la rotacion:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << rotado[i] << " ";
    }
    cout << endl;

    return 0;
}

