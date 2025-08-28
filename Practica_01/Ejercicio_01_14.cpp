// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio: 14

#include <iostream>

using namespace std;

int main(){
  int numero = 0;
  cout << "Ingrese un numero: " << endl;
  cin >> numero;
  for (int i = 1; i <= numero; i++){
    for (int j = 1 ; j <= i; j++){
        cout << "*";
    }
    cout << endl;
  }
  return 0;
}

