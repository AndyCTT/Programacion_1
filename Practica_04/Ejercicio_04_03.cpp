// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 3 

#include <iostream> 
using namespace std;
void ModificarValores(int Valor, int &Referencia);
   

int main() {
    int Valor = 5;
    int Referencia = 15;
    
    cout << "Antes de Modificar valores:" << endl;
    cout << "Por valor: " << Valor << endl; 
    cout << "Por referencia: " << Referencia << endl; 
    
    ModificarValores(Valor, Referencia);
    
    cout << "Despues de Modificar valores:" << endl;
    cout << "Por valor: " << Valor << endl; 
    cout << "Por referencia: " << Referencia << endl; 
    return 0;
}
void ModificarValores(int Valor, int &Referencia) {
    Valor *= 2; 
    Referencia += 10; 
    cout << "Valor por dos: " << Valor << endl;
}
