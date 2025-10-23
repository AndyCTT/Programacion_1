// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 2 

#include <iostream>
#include <string>
#include <vector>

using namespace std;    
int main() {

    vector <string> minerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    vector <double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    cout << "Ingrese el nombre del mineral a buscar ";
    cout << "SN, SB, AU, PT, AG, CU: " << endl;
    string mineralBuscado;
    getline(cin, mineralBuscado);

    for (int i=0; i < minerales.size(); i++) {
        if (mineralBuscado == minerales[i]) {
            cout << "La produccion de " << mineralBuscado << " es: " << produccion[i] << " toneladas metricas." << endl;
        }
        
    }
    return 0;
}