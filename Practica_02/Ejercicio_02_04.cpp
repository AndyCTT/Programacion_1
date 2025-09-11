// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int numero = rand() % 50+1; 
    int intento = 0;
    int min = 0;
    int max = 50;
    int i = 1; 

    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    while (i <= 5 && intento != numero) { 
        cout << "Intento " << i << ": ";
        cin >> intento;

        if (intento == numero) {
            cout << "Felicitaciones ¡Adivinaste el numero!" << endl;
        } 
        else if (intento < numero) {
            min = intento;
            cout << "El numero esta entre " << min << " y " << max << endl;
           
        } 
        else {
            max = intento;
            cout << "El numero esta entre " << min << " y " << max << endl;
            
        }

        i= i+1; 
        if (i > 5 and intento != numero) {
            cout << "Lo siento has agotado tus intentos" << endl<< "El numero era: " << numero << endl;
        }
    }
    return 0;
}
