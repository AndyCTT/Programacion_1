// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int validarCorreo(const string& correo);
int main() {
    string correo;
    
    cout << "Ingrese una direccion de correo electronico: ";
    cin >> correo;
    
    if (validarCorreo(correo) == 1) {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }
    
    return 0;
}

int validarCorreo(const string& correo) {
    vector<int> posicionesArroba;
    
    for (int i = 0; i < correo.length(); i++) {
        if (correo[i] == '@') {
            posicionesArroba.push_back(i);
        }
    }
    
    if (posicionesArroba.size() != 1) {
        return 0;
    }
    
    int posArroba = posicionesArroba[0];
    
    vector<int> posicionesPunto;
    for (int i = posArroba + 1; i < correo.length(); i++) {
        if (correo[i] == '.') {
            posicionesPunto.push_back(i);
        }
    }
    
    if (posicionesPunto.size() > 0) {
        return 1; 
    } else {
        return 0; 
    }
}