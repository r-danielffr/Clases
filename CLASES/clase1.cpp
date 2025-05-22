#include <iostream>
//librería de entradas y salidas
using namespace std;

int main (){
    cout << "hola mundo   ";
    //salida de texto
    
    //indica que finalizó el programa
    //declarar las variables
    int numero1,numero2,total1,total2,total3,total4;
    
    cout<<"Ingrese el primer numero";
    cin >>numero1;
    cout<<"Ingrese el segundo numero";
    cin >>numero2;
    
    total1= numero1 + numero2;
    cout<<"Respuesta Suma= "<<total1;

    total2= numero1 - numero2;
    cout<<", Respuesta Resta= "<<total2;

    total3= numero1 * numero2;
    cout<<", Respuesta Multiplicacion= "<<total3;

    total4= numero1 / numero2;
    cout<<", Respuesta Division= "<<total4;

    return 0;

    }
