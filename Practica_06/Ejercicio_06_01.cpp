// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 1 

#include <iostream>
#include <vector>   
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;
double calcularDesviacionTipica(const vector<int>& edades);
int main() {
    srand((time(0)));
    vector<int> edades;
    int edad;
    int numPersonas = 0;
    cout << "Ingrese el numero de personas: ";
    cin >>numPersonas;
    for (int i = 0; i < numPersonas; i++) {
        cout << "Edad de la persona " << (i + 1) << ": ";
        cin >> edad;
        if (edad == -1) {
            break;
        }
        edades.push_back(edad);
    }
    double desviacionTipica = calcularDesviacionTipica(edades);
    cout << "La desviacion tipica de las edades es: " << desviacionTipica << endl;
    return 0;   
}
double calcularDesviacionTipica(const vector<int>& edades) {
    int n = edades.size();
    if (n == 0) {
        return 0.0; 
    }
    double suma = 0.0;
    for (int edad : edades) {
        suma += edad;
    }
    double media = suma / n;
    double sumaDiferenciasCuadradas = 0.0;
    for (int edad : edades) {
        sumaDiferenciasCuadradas += (edad - media) * (edad - media);
    }
    double varianza = sumaDiferenciasCuadradas / n;
    return sqrt(varianza);
}


  
    

   