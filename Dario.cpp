#include <iostream>
using namespace std;

int main(){
    //declaraqcion de variables
    string nombres="";
    float horas,precio_hora,salario;
    string datos;

        //pedir datos del usuario
        cout<<"Ingrese su nombre: ";
        cin>> nombres; cout<<endl;
        cout<<" Ingrese su cantidad de horas trabajadas: ";
        cin >>horas;
        cout<<" Ingrese el precio a devengar por cada hora: $";
        cin>> precio_hora; cout<<endl;

        //declarar las condiciones
    if(horas<=44){
        salario=horas*precio_hora;
    }else {
        salario= 44*precio_hora + 1.5 *precio_hora *(horas-44);
    }
        //salida de datos
        cout<< "Gracias por sus servicios "<<nombres<<endl;
        cout<<"Su salario a devengar sera de: $"<<salario<<", Por haber trabajado "<<horas<<" horas"<<endl<<" "<<endl;

        //preguntar al usuario si deasea otros datos o terminar su procedimiento


        cout<<"Deseas realizar otro calculo? " <<endl <<"Escribe Si para continuar la operacion" <<endl<<"Escribe No para finalizar la operacion"<<endl;
        cin>> datos; cout<<""<<endl;

        while(datos =="Si"){
            
             //pedir datos del usuario
            cout<<"Ingrese su nombre: ";
        cin>> nombres; cout<<endl;
        cout<<" Ingrese su cantidad de horas trabajadas: ";
        cin >>horas;
        cout<<" Ingrese el precio a devengar por cada hora: $";
        cin>> precio_hora; cout<<endl;

                 //declarar las condiciones
                if(horas<=44){
                    salario=horas*precio_hora;
                 }else {
                      salario= 44*precio_hora + 1.5 *precio_hora *(horas-44);}
                            
                //salida de datos
                     cout<< "Gracias por sus servicios "<<nombres<<endl;
                     cout<<"Su salario a devengar sera de: $"<<salario<<", Por haber trabajado "<<horas<<" horas"<<endl<<" "<<endl;

                     cout<<"Deseas realizar otro calculo? " <<endl <<"Escribe Si para continuar la operacion" <<endl<<"Escribe No para finalizar la operacion"<<endl;
                     cin>> datos; cout<<""<<endl;


        }
        cout<<"Gracias por usar nuestro sistema";
        

return 0;}