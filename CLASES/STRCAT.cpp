#include <iostream>
#include <cstring>
using namespace std;

int main()
{   char nombre, nombreCopia, longitud;
    
    cout<<strcat(nombre, nombreCopia);
    
    int longitud = 0;
    longitud = strlen(nombre);
    cout << longitud;
    
    strcpy(nombreCopia, nombre);
    cout<< nombreCopia;
    
    if (strcmp(nombreCopia,nombre) == 0)
    {   cout << "Cadenas iguales";
    }
    
    cout << strrev(nombre);
    
    cout << strupr(nombre);
    
    cout << strwl(nombre);


return 0;}