#include <iostream>

    float suma(float numuno, float numdos)
    {   float resultado = 0;
        resultado = numuno + numdos;
        return resultado;
    }   
    
using namespace std;

int main() 
{   float numero1, numero2, sumatoria = 0;
    
    
    cout << "Operaciones" << endl;
    cout << "Ingrese el primer numero: ";
    cin >>  numero1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> numero2; cout << "\n";
    
    sumatoria = suma(numero1,numero2);
    
    cout << "El resultado de la suma es: " << sumatoria << endl;
    
return 0;}