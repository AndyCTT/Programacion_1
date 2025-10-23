// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 11

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string cadena;
    char delimitador;
    
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    
    cout << "Ingrese el delimitador: ";
    cin >> delimitador;
    
    vector<string> tokens;
    string tokenActual = "";
    

    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == delimitador) {
            if (!tokenActual.empty()) {
                tokens.push_back(tokenActual);
                tokenActual = "";
            }
        } else {
            tokenActual += cadena[i];
        }
    }
    
   
    if (!tokenActual.empty()) {
        tokens.push_back(tokenActual);
    }
    
  
    cout << "\nTokens encontrados:" << endl;
    for (int i = 0; i < tokens.size(); i++) {
        cout << tokens[i] << endl;
    }
    
    return 0;
}