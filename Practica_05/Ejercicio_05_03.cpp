// Materia: Programación I, Paralelo 4
// Autor: Andy Jorge Burgoa Callejas
// Carnet: 11074746 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 22/10/2025
// Número de ejercicio: 3 

#include <iostream>
#include <vector>
#include <cstdlib>20
#include <ctime>

using namespace std;

int main(){
    srand((time(0)));
    vector<int> calificaciones;
    int n_numeros=0;
    cout<<"Ingrese la cantidad de calificaciones a generar: ";
    cin>>n_numeros;
    for(int i=0;i<n_numeros;i++){
        int calif=rand()%101; 
        calificaciones.push_back(calif);
    }
    cout<<"\nCalificaciones generadas:\n";
    for(int i=0;i<calificaciones.size();i++){
        cout<<calificaciones[i]<<" ";
        if((i+1)%5==0){
            cout<<endl;
        }
    }
    if(calificaciones.size()%5!=0){
        cout<<endl;
    }
    cout<<"Total de calificaciones generadas: "<<calificaciones.size()<<endl;
    return 0;
}