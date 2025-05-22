#include "iostream"
using namespace std;

int main(){
    //declaracion de variables
    int nota1,nota2,nota3,sumaTotal,promedio;

    cout<<"Ingrese primer nota";
    cin>> nota1;
    cout<<"Ingrese segunda nota";
    cin>> nota2;
    cout<<"Ingrese tercera nota";
    cin>> nota3;
    //si el promedio es mayor a 6 es aprobado y si es menor es reprobado
        sumaTotal = nota1+nota2+nota3;
        promedio = sumaTotal/3;
        cout<<" Tu promedio es: "<<promedio;
            if(promedio>=6){

                cout<<", Has aprobado";
            }else{
                if(promedio<6){
                cout<<", Has Reprobado";
                }
            }

    return 0;
}