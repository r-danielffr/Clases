
#include <iostream>
#include <cstring>
using namespace std;

int main()
{       string nombres;
        char cadena1 [20] = {"Rene "};
        const char* cadena2 = {"Franco"};
        
        strcat(cadena1,cadena2);
        
        cout << "introduzca un nombre: ";
        getline(cin, nombres);
            if (nombres == cadena1)
                {   cout << "Bienvenido amigo";
                }   else (cout<<"Bienvenido");{}

return 0;}