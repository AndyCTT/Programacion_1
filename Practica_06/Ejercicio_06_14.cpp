// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 14

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string frase;
    vector<int> contadorVocales(5, 0); 
    
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    
    for (int i = 0; i < frase.length(); i++) {
        char c = frase[i];
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        
        switch(c) {
            case 'a': contadorVocales[0]++; break;
            case 'e': contadorVocales[1]++; break;
            case 'i': contadorVocales[2]++; break;
            case 'o': contadorVocales[3]++; break;
            case 'u': contadorVocales[4]++; break;
        }
    }
    
    cout << "\nConteo de vocales en la frase:" << endl;
    cout << "a = " << contadorVocales[0] << endl;
    cout << "e = " << contadorVocales[1] << endl;
    cout << "i = " << contadorVocales[2] << endl;
    cout << "o = " << contadorVocales[3] << endl;
    cout << "u = " << contadorVocales[4] << endl;
    
    int totalVocales = contadorVocales[0] + contadorVocales[1] + contadorVocales[2] + 
                      contadorVocales[3] + contadorVocales[4];
    cout << "Total de vocales = " << totalVocales << endl;
    
    return 0;
}