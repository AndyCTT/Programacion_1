// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 12

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> esPalindromo(const string& texto);

int main() {
    string texto;
    
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    
    vector<int> resultado = esPalindromo(texto);
    
    cout << "Texto: \"" << texto << "\"" << endl;
    if (resultado[0] == 1) {
        cout << "Es un palindromo" << endl;
    } else {
        cout << "NO es un palindromo" << endl;
    }
    
    return 0;
}

vector<int> esPalindromo(const string& texto) {
    vector<int> resultado;
    vector<char> caracteresLimpios;
    
    
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32; 
        }
        
        if (c >= 'a' && c <= 'z') {
            caracteresLimpios.push_back(c);
        }
    }
    
   
    int n = caracteresLimpios.size();
    for (int i = 0; i < n / 2; i++) {
        if (caracteresLimpios[i] != caracteresLimpios[n - 1 - i]) {
            resultado.push_back(0); 
            return resultado;
        }
    }
    
    resultado.push_back(1); 
    return resultado;
}
