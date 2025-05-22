#include <iostream>
using namespace std;

int main(){
    //declaracion de variables
        int numero, sumaTotal=0,residuo;
        cout<<"Ingrese un numero entero y que no sea 1";
        cin>>numero;

        //Los numeros deben de estar entre 2 y 100, incluidos ellos

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