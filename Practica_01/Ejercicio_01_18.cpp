// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 18

#include <iostream>

using namespace std;

int main() {
    int numero = 1;
    int primos = 0;
    int cont = 0;
    cout << "Los primeros 100 numeros primos son: " << endl;
    while (primos <= 100) {
        cont = 0;
        for (int i = 2; i <= numero / 2; i++) {        
            if (numero % i == 0) {
                cont = cont+1;  
            }  
        }
        if (cont == 0) {
            cout << numero << endl;
            primos = primos + 1;
        }
        numero = numero + 1;
    }

   return 0;
}
