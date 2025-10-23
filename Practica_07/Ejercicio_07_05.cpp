// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int multiplicarMatrices(int matrizA[100][100], int matrizB[100][100], int resultado[100][100], int n, int m);

int main() {
    srand(time(0));
    int n, m;
    cout << "Ingrese el numero de filas de la primera matriz (N): ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la primera matriz / filas de la segunda matriz (M): ";
    cin >> m;
    
    int matrizA[100][100];
    int matrizB[100][100];
    int resultado[100][100] = {0};


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrizA[i][j] = rand() % 10; 
        }
    }
 
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizB[i][j] = rand() % 10; 
        }
    } 

   
    multiplicarMatrices(matrizA, matrizB, resultado, n, m);
    
    cout << "Matriz A (" << n << " x " << m << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B (" << m << " x " << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Matriz Resultado (" << n << " x " << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
   
    return 0;
} 

int multiplicarMatrices(int matrizA[100][100], int matrizB[100][100], int resultado[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < m; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    return 0;
}







