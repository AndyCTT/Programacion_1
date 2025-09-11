// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int numero = rand() % 10 + 1;
    int factorial = 1;
    cout << "El numero aleatorio generado es: " << numero << endl;
    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}