// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/10/2025
// Número de ejercicio: 1


#include <iostream>

using namespace std;
const int MAX = 100;
void intercambiarFilas(int matriz[MAX][MAX], int n, int fila1, int fila2);
void imprimirMatriz(int matriz[MAX][MAX], int n);
int main() {
    int n;

    cout << "Ingrese el orden de la matriz (n x n): ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Orden invalido. Debe estar entre 1 y " << MAX << ".\n";
        return 1;
    }

    int matriz[MAX][MAX];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }

    intercambiarFilas(matriz, n, 0, n - 1);

    cout << "Matriz despues de intercambiar la fila 1 con la fila " << n << ":\n";
    imprimirMatriz(matriz, n);

    return 0;
}
void intercambiarFilas(int matriz[MAX][MAX], int n, int fila1, int fila2) {
    for (int j = 0; j < n; ++j) {
        swap(matriz[fila1][j], matriz[fila2][j]);
    }
}
void imprimirMatriz(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}  



