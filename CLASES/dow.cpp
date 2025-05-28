#include <iostream>
using namespace std;

int main(){

std::string nombres;
float horas,preciohora,salario,datos;

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
    }
    cout<<"Gracias por su trabajo "<<nombres<<endl;
    cout<<"Usted ha trabajado "<<horas; cout<<" horas."<<endl<<"Por lo que su salario a devengar sera de: $"<<salario<<endl;
    

return 0;}