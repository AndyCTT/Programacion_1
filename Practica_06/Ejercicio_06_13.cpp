// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 13

#include <iostream>
#include <vector>
#include <string>

using namespace std;
string capitalizarPalabras(const string& texto);


int main() {
    string texto;
    
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    
    string textoCapitalizado = capitalizarPalabras(texto);
    
    cout << "Texto original: " << texto << endl;
    cout << "Texto capitalizado: " << textoCapitalizado << endl;
    
    return 0;
}

string capitalizarPalabras(const string& texto) {
    string resultado = "";
    vector<int> estadoPalabra;
    estadoPalabra.push_back(1); 
    
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        
        if (estadoPalabra[0] == 1 && c >= 'a' && c <= 'z') {
            
            c = c - 32;
            estadoPalabra[0] = 0; 
        } else if (c == ' ' ) {
            
            estadoPalabra[0] = 1;
        } else {
            estadoPalabra[0] = 0;
        }
        
        resultado += c;
    }
    
    return resultado;
}

