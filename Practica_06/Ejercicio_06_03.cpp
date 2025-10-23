// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int SIZE = 10;
    string nombres[SIZE] = {"Ana", "Luis", "Carlos", "Marta", "Jorge", "Sofia", "Pedro", "Lucia", "Diego", "Elena"};
    string apellidos[SIZE] = {"Gomez", "Perez", "Rodriguez", "Lopez", "Garcia", "Martinez", "Sanchez", "Ramirez", "Torres", "Flores"};
    int edades[SIZE] = {18, 22, 25, 30, 35, 40, 45, 50, 55, 60};

    int N;
    cout << "Ingrese el numero de combinaciones a generar: ";
    cin >> N;

    srand((time(0)));

    for (int i = 0; i < N; ++i) {
        int indiceNombre = rand() % SIZE;
        int indiceApellido = rand() % SIZE;
        int indiceEdad = rand() % SIZE;

        cout << "- " << (i + 1) << ": ";
        cout << nombres[indiceNombre] << " ";
        cout << apellidos[indiceApellido] << ", ";
        cout << edades[indiceEdad] << " anios." << endl;
    }

    return 0;
}

