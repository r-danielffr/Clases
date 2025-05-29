#include <iostream>
using namespace std;

int main(){
    //declaracion de variables
        int a,b,c;
        cout<<"Ingrese un numero entero a distinto a cero";
        cin>>a;

        cout<<"Ingrese un numero entero b distinto a cero";
        cin>>b;

        cout<<"Ingrese un numero entero c distinto a cero";
        cin>>c;

        if (numero<2){

            cout<<"El numero no es valido";
        }
            else{
                if(numero>=2 && numero<100){
                    residuo = numero % 2;
                    if(residuo==0){
                        sumaTotal = numero + sumaTotal;
                        cout<<"la suma es: "<<sumaTotal;

                        }else{
                            cout <<"el numero es impar";
                        }
                    }
                    else
                    {cout<<"El numero no es valido";}
                }
    return 0;
}