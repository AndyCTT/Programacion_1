// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 7
 
#include <iostream>
using namespace std;
int main() {
    int m= 0;
    int n= 0;
    int a= 0; 
    int b= 0;
    int r= 0;
    int mcd= 0;
    int mcm= 0;

    cout << "Ingrese el numero entero positivo de M: ";
    cin >> m ;  
    cout << "Ingrese el numero entero positivo de N: ";
    cin >> n ;

    if (m < n) {
        int valor = m;  
         m = n;         
        n = valor;      
    }

    a = m;
    b = n;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    mcd = a;

    mcm = (m * n) / mcd;

    cout << "El Maximo Comun Divisor (MCD) de " << m << " y " << n << " es: " << mcd << endl;
    cout << "El Minimo Comun Multiplo (MCM) de " << m << " y " << n << " es: " << mcm << endl;

    return 0;
}
