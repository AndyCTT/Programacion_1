// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int N;
    cout << "Ingrese la cantidad de pixeles: ";
    cin >> N;
    
    vector<int> imagen(N);
    
    for(int i = 0; i < N; i++) {
        imagen[i] = rand() % 256;
    }
    
    int rangos[26] = {0}; 
    
    
    for(int i = 0; i < N; i++) {
        int rango = imagen[i] / 10;
        rangos[rango]++;
    }
    
   
    cout << "\nDistribucion de pixeles por rangos:" << endl;
    for(int i = 0; i < 26; i++) {
        int inicio = i * 10;
        int fin = (i == 25) ? 255 : (i * 10 + 9);
        cout << inicio << "-" << fin << ": " << rangos[i] << " pixeles ("
             << (rangos[i] * 100.0 / N) << "%)" << endl;
    }
    
    return 0;
}