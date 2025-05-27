#include <iostream>
using namespace std;

int main(){

String nombres="";
float horas,preciohora,salario,datos;

    cout<<"Ingrese su nombre: ";
    cin>>nombres; cout<<" "<<endl;

    cout<<"Ingresar horas trabajadas: ";
    cin>>horas; cout<<" "<<endl;

    cout<<"Ingrese el precio a devengar por hora: ";
    cin>>preciohora; cout<<" "<<endl;

    if(horas<=44)
    {   salario=horas*preciohora;
    }   else if(horas>44)
    {   salario= 44*preciohora + 1.5 *preciohora *(horas-44);
    }
    

    
    
    
    


return 0;}