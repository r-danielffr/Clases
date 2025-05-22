#include <iostream>
//librería de entradas y salidas
using namespace std;

int main(){
    int dia;
    
    cout<<"Ingrese una letra";
    cin >> dia;
    switch (dia)
        case "a": cout << dia << "Hoy es lunes"; 
            break;
        case "b": cout << dia << "Hoy es martes"; 
            break;
        case "c": cout << dia << "Hoy es miercoles"; 
            break;
        case "d": cout << dia << "Hoy es jueves"; 
            break;
        case "e": cout << dia << "Hoy es viernes"; 
            break;
        case "f": cout << dia << "Hoy es sabado"; 
            break;
        case "g": cout << dia << "Hoy es domingo"; 
            break;
                default: cout << "Datos incorrectos\n";

return 0; }