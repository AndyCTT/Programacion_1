// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>
using namespace std;

vector<string> encontrarInterseccion(const vector<string>& lista1, const vector<string>& lista2);


int main() {
   
    vector<string> empresa1 = {"Ana García", "Carlos López", "María Rodríguez", 
                               "Juan Pérez", "Laura Martínez"};
    
   
    vector<string> empresa2 = {"Carlos López", "Sofia Torres", "Juan Pérez", 
                               "Miguel Ángel", "Laura Martínez", "Elena Ruiz"};
    

    vector<string> clientesComunes = encontrarInterseccion(empresa1, empresa2);

    cout << "Lista de la Empresa 1:" << endl;
    for (int i = 0; i < empresa1.size(); i++) {
        cout << "- " << empresa1[i] << endl;
    }
    
    cout << "\nLista de la Empresa 2:" << endl;
    for (int i = 0; i < empresa2.size(); i++) {
        cout << "- " << empresa2[i] << endl;
    }
    
    cout << "\nClientes en común (" << clientesComunes.size() << " clientes):" << endl;
    if (clientesComunes.empty()) {
        cout << "No hay clientes en común." << endl;
    } else {
        for (int i = 0; i < clientesComunes.size(); i++) {
            cout << "- " << clientesComunes[i] << endl;
        }
    }
    
    return 0;
}

vector<string> encontrarInterseccion(const vector<string>& lista1, const vector<string>& lista2) {
    vector<string> interseccion;
    
  
    for (int i = 0; i < lista1.size(); i++) {
       
        bool encontrado = false;
        for (int j = 0; j < lista2.size(); j++) {
            if (lista1[i] == lista2[j]) {
                encontrado = true;
                break;
            }
        }
        
        if (encontrado) {
            bool yaExiste = false;
            for (int k = 0; k < interseccion.size(); k++) {
                if (lista1[i] == interseccion[k]) {
                    yaExiste = true;
                    break;
                }
            }
            if (!yaExiste) {
                interseccion.push_back(lista1[i]);
            }
        }
    }
    
    return interseccion;
}