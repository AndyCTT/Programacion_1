// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> voltios;
    double valor = 1;  
    
    cout << "Ingrese los valores de voltios (0 para terminar):" << endl;
    
    while(valor != 0) {
        cout << "Valor: ";
        cin >> valor;
        
        if(valor != 0) {
            voltios.push_back(valor); 
        }
    }
    
    cout << "\nValores de voltios ingresados:" << endl;
    
    for(int i = 0; i < voltios.size(); i++) {
        cout << voltios[i] << " ";
        
        if((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
    
    if(voltios.size() % 3 != 0) {
        cout << endl;
    }
    
    cout << "Total de valores ingresados: " << voltios.size() << endl;
    
    return 0;
}
