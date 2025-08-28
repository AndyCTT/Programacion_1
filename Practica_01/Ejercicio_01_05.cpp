// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 24/08/2025
// Número de ejercicio: 5
 
#include <iostream>

using namespace std;

int main() {
    
    float grado_kelvin = 0;
    float grado_centigrado = 0;
    cout <<"Ingrese el valor en grados centigrados: " <<endl;
    cin >> grado_centigrado;
    grado_kelvin = grado_centigrado +273.15;
    cout <<"Elvalor en grados kelvin es de ; " <<grado_kelvin <<endl;
    return 0;
}