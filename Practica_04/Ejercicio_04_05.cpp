// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 5 

#include <iostream>

using namespace std;

float CalcularSalario(int horas, float tarifa);
float CalcularBonificacion(int horas, float tarifa);

int main() {
    int horas;
    float tarifa;
    
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa;
    
    float salario = CalcularSalario(horas, tarifa);
    float bonificacion = CalcularBonificacion(horas, tarifa);
    
    cout << "Salario TOTAL del trabajador: " << salario << endl;
    if (bonificacion > 0) {
        cout << "Salario bonificacion: " << bonificacion << endl;
    } else {
        cout << "No hay bonificacion." << endl;
    }
    
    return 0;
}
float CalcularSalario(int horas, float tarifa) {
    return horas * tarifa;
}
float CalcularBonificacion(int horas, float tarifa) {
    if (horas > 8) {
        int Extra = horas - 8;
        return Extra * tarifa; 
    }else 
        return 0.0;

}