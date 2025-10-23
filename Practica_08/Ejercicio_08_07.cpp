// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;
int suma_cuadrados(int n);
int main(){
    int n;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    if(n<1){
        cout<<"El numero debe ser positivo y mayor que cero."<<endl;
        return 1;
    }
    int resultado = suma_cuadrados(n);
    cout<<"La suma de los cuadrados desde 1 hasta "<<n<<" es: "<<resultado<<endl;
    return 0;
}
int suma_cuadrados(int n){
    if(n==1){
        return 1; // Caso base: 1 al cuadrado es 1
    }else{
        return n*n + suma_cuadrados(n-1); // Caso recursivo
    }
}
