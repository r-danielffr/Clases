#include <iostream>

    float suma(float numuno, float numdos)
    {   float resultado = 0;
        resultado = numuno + numdos;
        return resultado;
    }   
    
    float resta(float numuno, float numdos)
    {   float resultado = 0;
        resultado = numuno - numdos;
        return resultado;
    }   
    
    float multi(float numuno, float numdos)
    {   float resultado = 0;
        resultado = numuno * numdos;
        return resultado;
    }
    
    float divi(float numuno, float numdos)
    {   float resultado = 0;
        resultado = numuno / numdos;
        return resultado;
    }   if (numuno < numdos && numdos == 0)
    {   resultado = 500;
    return resultado;
    }   else
    {   resultado = numuno / numdos;
    return resultado
    }

using namespace std;

int main() 
{   float numero1, numero2, sumatoria = 0, numero3 = 7, numero4 = 56, sumatoria2 = 0, restat = 0, division = 0, multiplicacion = 0;
    
    
    cout << "Operaciones" << endl;
    cout << "Ingrese el primer numero: ";
    cin >>  numero1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> numero2; cout << "\n";
    
    sumatoria = suma(numero1,numero2);
    
    restat = resta(numero1,numero2);
    
    multiplicacion = multi(numero1,numero2);
    
    division = divi(numero1,numero2);
    if (division == 5000){
        cout << "division invalida" << endl ;
    }
    
    sumatoria2 = suma(numero3,numero4);
    
    cout << "El resultado de la suma es: " << sumatoria << endl;
        cout << "El resultado de la resta es: " << restat << endl;
            cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
                cout << "El resultado de la division es: " << division << endl;
                    cout << "El resultado de la segunda suma es: " << sumatoria2 << endl;
    
return 0;}
