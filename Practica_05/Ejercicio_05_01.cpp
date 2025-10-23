// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 1 

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
void generarVoltajes(vector<double>& voltajes, int cantidad);
void generarTemperaturas(vector<double>& temperaturas, int cantidad);
void generarCaracteres(vector<char>& caracteres, int cantidad);
void generarAnios(vector<int>& anios, int cantidad);
void generarVelocidades(vector<double>& velocidades, int cantidad);
void generarDistancias(vector<double>& distancias, int cantidad);

int main() {
    srand(time(0)); 

    vector<double> voltajes;
    vector<double> temperaturas;
    vector<char> caracteres;
    vector<int> anios;
    vector<double> velocidades;
    vector<double> distancias;

    generarVoltajes(voltajes, 100);
    generarTemperaturas(temperaturas, 50);
    generarCaracteres(caracteres, 30);
    generarAnios(anios, 100);
    generarVelocidades(velocidades, 32);
    generarDistancias(distancias, 1000);

    cout << "Voltajes:\n ";
    for (double v : voltajes) {
        cout << v << " ";
    }
    cout << "\nTemperaturas:\n ";
    for (double t : temperaturas) {
        cout << t << " ";
    }
    cout << "\nCaracteres:\n ";
    for (char c : caracteres) {
        cout << c << " ";
    }
    cout << "\nAnios:\n ";
    for (int a : anios) {
        cout << a << " ";
    }
    cout << "\nVelocidades:\n ";
    for (double vel : velocidades) {
        cout << vel << " ";
    }
    cout << "\nDistancias: ";
    for (double d : distancias) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
void generarVoltajes(vector<double>& voltajes, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        double voltaje = 20.00 + static_cast<double>(rand()) / RAND_MAX * (220.00 - 20.00);
        voltajes.push_back(voltaje);
    }
}
void generarTemperaturas(vector<double>& temperaturas, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        double temperatura = static_cast<double>(rand()) / RAND_MAX * 100.00;
        temperaturas.push_back(temperatura);
    }
}
void generarCaracteres(vector<char>& caracteres, int cantidad) {
    const string alfanumericos = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < cantidad; ++i) {
        char caracter = alfanumericos[rand() % alfanumericos.size()];
        caracteres.push_back(caracter);
    }
}
void generarAnios(vector<int>& anios, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        int anio = 1990 + rand() % (2025 - 1990 + 1);
        anios.push_back(anio);
    }
}
void generarVelocidades(vector<double>& velocidades, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        double velocidad = 10.00 + static_cast<double>(rand()) / RAND_MAX * (300.00 - 10.00);
        velocidades.push_back(velocidad);
    }
}
void generarDistancias(vector<double>& distancias, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        double distancia = 1.00 + static_cast<double>(rand()) / RAND_MAX * (1000.00 - 1.00);
        distancias.push_back(distancia);
    }
}



