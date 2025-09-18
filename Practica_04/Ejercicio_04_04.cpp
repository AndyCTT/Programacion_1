// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 4 

#include <iostream>

using namespace std;
float ConvertirCelsiusAFahrenheit(float celsius);
float MayorTemperatura(float temp1, float temp2);

int main() {
    float celsius1, celsius2;
    
    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> celsius1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> celsius2;
    
    float fahrenheit1 = ConvertirCelsiusAFahrenheit(celsius1);
    float fahrenheit2 = ConvertirCelsiusAFahrenheit(celsius2);
    
    cout << "Primera temperatura en Fahrenheit: " << fahrenheit1 << endl;
    cout << "Segunda temperatura en Fahrenheit: " << fahrenheit2 << endl;
    
    float mayor = MayorTemperatura(fahrenheit1, fahrenheit2);
    cout << "La mayor temperatura es: " << mayor << " Fahrenheit" << endl;
    
    return 0;
}
float ConvertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
float MayorTemperatura(float temp1, float temp2) {
    if (temp1 > temp2) 
        return temp1; 
    else 
        return temp2;  
}