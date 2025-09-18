// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 1 

#include <iostream>
#include <ctime>
#include <cstdlib> 

using namespace std;
void IntercambiarValores(int &a, int &b);

int main(){
    srand(time(0));
    int Nro1 = rand() % 100;
    int Nro2 = rand() % 100;
    IntercambiarValores(Nro1, Nro2);
    return 0;
}
 
void IntercambiarValores(int &a, int &b){
    cout << "Valor numero 1 es: " << a << endl;
    cout << "Valor numero 2 es: " << b << endl;
    int almacenador = a;
    a = b;
    b = almacenador;
    cout << "Valor numero 1 es: " << a << endl;
    cout << "Valor numero 2 es: " << b << endl;
} 