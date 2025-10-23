// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void transponerMatriz(int matriz[100][100], int transpuesta[100][100], int n, int m);

int main() {
    srand(time(0));
    int n, m;
    cout << "Ingrese el numero de filas de la matriz (N): ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la matriz (M): ";
    cin >> m;
    
    int matriz[100][100];
    int transpuesta[100][100] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10; 
        }
    }
 
    transponerMatriz(matriz, transpuesta, n, m);
    
    cout << "Matriz Original (" << n << " x " << m << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz Transpuesta (" << m << " x " << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void transponerMatriz(int matriz[100][100], int transpuesta[100][100], int n, int m) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}