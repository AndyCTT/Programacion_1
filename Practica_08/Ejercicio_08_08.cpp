// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 8

//Realizar un algoritmo recursivo para elaborar un programa en el que dado
//un entero n > 1, calcule e imprima los elementos correspondientes a la
//conjetura de Ullman (en honor al matemático Ullman) que consiste en lo
//siguiente:
//• Empiece con cualquier entero positivo.
//• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele
//1.
//• Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendrá el número 1, independientemente del entero inicial. Por
//ejemplo, cuando el entero inicial es 26, la secuencia será:
//26 13 40 20 10 5 16 8 4 2 1
#include <iostream>
using namespace std;
int conjeturaUllman(int n);
int main()
{
    int n;
    cout << "Ingrese un entero positivo mayor que 1: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "El numero debe ser mayor que 1." << endl;
        return 1;
    }
    cout << "Secuencia de la conjetura de Ullman: " << endl;
    conjeturaUllman(n);
    return 0;
}
int conjeturaUllman(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return conjeturaUllman(n / 2);
    }
    else
    {
        return conjeturaUllman(3 * n + 1);
    }
}