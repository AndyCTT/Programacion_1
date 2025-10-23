// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <vector>
using namespace std;
int sonIguales(int vec1[], int vec2[], int tamaño, int indice);

int main() {
    vector<int> vector1= {1,2,3,4,5};
    vector<int> vector2= {1,2,3,4,5};
    vector<int> vector3= {1,2,3,4,6};
    int tamaño= vector1.size();
    if (sonIguales(&vector1[0], &vector2[0], tamaño, 0)) {
        cout << "Vector1 y Vector2 son iguales." << endl;
    } else {
        cout << "Vector1 y Vector2 no son iguales." << endl;
    }
    if (sonIguales(&vector1[0], &vector3[0], tamaño, 0)) {
        cout << "Vector1 y Vector3 son iguales." << endl;
    } else {
        cout << "Vector1 y Vector3 no son iguales." << endl;
    }


    return 0;
}
int sonIguales(int vec1[], int vec2[], int tamaño, int indice){
    if (indice == tamaño) {
        return 1; 
    }
    if (vec1[indice] != vec2[indice]) {
        return 0; 
    }
    return sonIguales(vec1, vec2, tamaño, indice + 1);
}