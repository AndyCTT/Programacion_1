// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream> 
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
    int N=0;
    int n1= 0; 
    int n2= 0;
    int n3= 0;
    int total_panales= 0;
    
    srand(time(NULL));

    cout << "Ingrese la cantidad total de ninos (N): ";
    cin >> N;

    n1 = rand() % (N + 1);

    n2 = rand() % (N - n1 + 1); 

    n3 = N - n1 - n2;

    total_panales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Ninos de 1 : " << n1 << endl;
    cout << "Ninos de 2 : " << n2 << endl;
    cout << "Ninos de 3 : " << n3 << endl;
    cout << "Total de panales consumidos por dia: " << total_panales << endl;

    return 0;
}
