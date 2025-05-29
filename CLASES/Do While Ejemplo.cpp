#include <iostream>
using namespace std;

int main()
{   std::string nombres;
    float horas,preciohora,salario;
    int datos;

        cout<<"Ingrese su nombre a continuacion: ";
        cin>>nombres; cout<<" "<<endl;
        
        cout<<"Ingresar horas trabajadas: ";
        cin>>horas; cout<<" ";

        cout<<"Ingrese el precio a devengar por hora: $";
        cin>>preciohora; cout<<" "<<endl;

        if(horas<=44)
            {   salario=horas*preciohora;
            }   else if(horas>44)
            
            {   salario= 44*preciohora + 1.5 *preciohora *(horas-44);
            }   cout<<"Gracias por su trabajo "<<nombres<<endl;
                cout<<"Usted ha trabajado "<<horas; cout<<" horas."<<endl<<"Por lo que su salario a devengar sera de: $"<<salario<<endl<<" "<<endl;
        
        cout<<"Desea realizar otra operacion?:"<<endl<<"1- Si"<<endl<<"2- No"<<endl;
        cout<<"Opcion: ";   cin>>datos; cout<<" "<<endl;
        switch(datos)
        {   case 1:
                cout<<"vuelve al inicio"<<endl;
            break;
            
            case 2:
                cout<<"Gracias por utiizar nuestro sistema"<<endl;
                return 0;
            break;
            
            default:
                cout<<"Opcion incorrecta"<<endl;
                return 0;
            break;
        }
        

return 0;}