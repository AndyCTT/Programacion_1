// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int lanzamientos = 0;
    int pares = 0;
    cout << "Ingrese el numero de lanzamientos del dado: " << endl;
    cin >> lanzamientos;
    cout <<endl;
    for (int i = 0; i <lanzamientos ; i++) {
        
        int dado = rand() % 6 + 1;
        cout << dado << endl;
        if (dado % 2 == 0) {
            pares = pares +1;
        }
    }
cout << "La frecuencia de las caras pares es: " << (pares*100)/lanzamientos << "%" << endl;     
    return 0;
}