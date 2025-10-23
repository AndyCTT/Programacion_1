// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int generarNumeroAleatorio(int a, int b);
int sumaUltimaColumna(int matriz[][100], int n);
int productoUltimaFila(int matriz[][100], int n);
int mayorValor(int matriz[][100], int n, int &fila, int &columna);
double desviacionEstandar(int matriz[][100], int n);

int main(){
    srand((time(0)));
    int n, a, b;
    cout << "Ingrese el orden de la matriz (N x N): ";
    cin >> n;
    cout << "Ingrese el valor minimo (A): ";
    cin >> a;
    cout << "Ingrese el valor maximo (B): ";
    cin >> b;
    int matriz[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = generarNumeroAleatorio(a, b);
        }
    }
    cout << "Matriz generada:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Suma de la ultima columna: " << sumaUltimaColumna(matriz, n) << endl;
    cout << "Producto de la ultima fila: " << productoUltimaFila(matriz, n) << endl;
    int fila, columna;
    int mayor = mayorValor(matriz, n, fila, columna);
    cout << "Mayor valor: " << mayor << " en la posicion (" << fila <<
    ", " << columna << ")\n";
    cout << "Desviacion estandar de los elementos de la matriz: " << desviacionEstandar(matriz, n) << endl;
    return 0;
}
int generarNumeroAleatorio(int a, int b){
    return rand() % (b - a + 1) + a;
}
int sumaUltimaColumna(int matriz[][100], int n){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += matriz[i][n - 1];
    }
    return suma;
}
int productoUltimaFila(int matriz[][100], int n){
    int producto = 1;
    for(int j = 0; j < n; j++){
        producto *= matriz[n - 1][j];
    }
    return producto;
}
int mayorValor(int matriz[][100], int n, int &fila, int &columna){
    int mayor = matriz[0][0];
    fila = 0;
    columna = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] > mayor){
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }
    return mayor;
}

double desviacionEstandar(int matriz[][100], int n){
    double suma = 0.0;
    double sumaCuadrados = 0.0;
    int totalElementos = n * n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            suma += matriz[i][j];
            sumaCuadrados += matriz[i][j] * matriz[i][j];
        }
    }
    double media = suma / totalElementos;
    double varianza = (sumaCuadrados / totalElementos) - (media * media);
    return sqrt(varianza);
}
