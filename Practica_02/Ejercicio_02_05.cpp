// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int  main() {
    srand(time(NULL));
    int numeros=0;
    int sumatoria = 0;
    int mayor = 0;
    int menor = 1000;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: " << endl;
    cin >> numeros;
    cout << endl;
    for (int i = 0; i < numeros; i++) {
        int aleatorio = rand() % 1000 + 1;
        cout << aleatorio << endl;
        sumatoria = sumatoria + aleatorio;
        if (aleatorio > mayor) {
            mayor = aleatorio;
        }
        else if (aleatorio < menor) {
            menor = aleatorio;  
        }
    } 
cout << "La sumatoria de los numeros es: " << sumatoria << endl;
cout << "El promedio de los numeros es: " << sumatoria/numeros << endl;
cout << "El mayor valor generado es: " << mayor << endl;
cout << "El menor valor generado es: " << menor << endl;

return 0;
}

