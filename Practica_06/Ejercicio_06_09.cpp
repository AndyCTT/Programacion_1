// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string oracion;
    
    cout << "Ingrese una oracion: ";
    getline(cin, oracion);
    
    vector<string> palabras;
    string palabraActual = "";
    
    
    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] == ' ') {
            if (!palabraActual.empty()) {
                palabras.push_back(palabraActual);
                palabraActual = "";
            }
        } else {
            palabraActual += oracion[i];
        }
    }
    

    if (!palabraActual.empty()) {
        palabras.push_back(palabraActual);
    }
    
    
    string oracionInvertida = "";
    for (int i = palabras.size() - 1; i >= 0; i--) {
        oracionInvertida += palabras[i];
        if (i > 0) {
            oracionInvertida += " ";
        }
    }
    
    cout << "Oracion original: " << oracion << endl;
    cout << "Oracion invertida: " << oracionInvertida << endl;
    
    return 0;
}