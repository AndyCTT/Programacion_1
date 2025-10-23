// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;
    
    vector<int> calificaciones(N);
    
    
    for(int i = 0; i < N; i++) {
        calificaciones[i] = rand() % 101; 
    }
    
    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;
    
  
    for(int i = 0; i < N; i++) {
    int rango = calificaciones[i] / 10;
    
    switch(rango) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            reprobado++;
            break;
        case 6:
        case 7:
            regular++;
            break;
        case 8:
            bueno++;
            break;
        case 9:
        case 10:
            excelente++;
            break;
    }
}
    
  
    cout << "\nResultados:" << endl;
    cout << "0-59 (Reprobado): " << (reprobado * 100.0 / N) << "%" << endl;
    cout << "60-79 (Regular): " << (regular * 100.0 / N) << "%" << endl;
    cout << "80-89 (Bueno): " << (bueno * 100.0 / N) << "%" << endl;
    cout << "90-100 (Excelente): " << (excelente * 100.0 / N) << "%" << endl;
    
    return 0;
}