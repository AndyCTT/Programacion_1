// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 10

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string cadena;
    
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    
    vector<char> caracteresNoDigitos;
    
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] < '0' || cadena[i] > '9') {
            caracteresNoDigitos.push_back(cadena[i]);
        }
    }
   
    string cadenaSinDigitos = "";
    for (int i = 0; i < caracteresNoDigitos.size(); i++) {
        cadenaSinDigitos += caracteresNoDigitos[i];
    }
    
    cout << "Cadena original: " << cadena << endl;
    cout << "Cadena sin digitos: " << cadenaSinDigitos << endl;
    
    return 0;
}