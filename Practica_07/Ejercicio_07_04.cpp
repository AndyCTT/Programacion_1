// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/10/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el orden de la matriz (N x N): ";
    cin >> n;
    int matriz[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = i + j + 1;
        }
    }
    cout << "Matriz generada:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
