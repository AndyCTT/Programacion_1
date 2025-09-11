// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int Numeros= 0;
    int Primos = 0;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> Numeros;
    srand(time(NULL));
    cout << "Numeros generados: " << endl;
    for (int i = 0; i < Numeros; ++i) {
        int num = rand() % 10000 + 1;
        cout << num << endl; 
        int cont = 0;
        for (int j = 2; j <= num / 2; ++j) {
            if (num % j == 0){
                cont = cont+1;
            }
        } 
        if (cont == 0 && num != 1){
                Primos = Primos + 1;
            }  
    }
   
    cout << "\nCantidad de números primos generados: " << Primos << endl;
    return 0;
}


