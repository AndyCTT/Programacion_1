// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;

void DiasMes(int anio, int mes);

int main() {
    int anio=0;
    int mes = 0;
    cout << "Ingrese un año: ";
    cin >> anio;
    cout << "Ingrese un mes (número): ";
    cin >> mes;
    DiasMes(anio, mes);
    return 0;
}

void DiasMes(int anio, int mes) {
    int dias;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        dias = 31;
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } 
    else if (mes == 2) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            dias = 29; 
        } 
        else {
            dias = 28; 
        }
    } 
cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;
    
}

   