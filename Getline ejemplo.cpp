#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{       string nombres;
        char cadena1 [20] = {"rene "};
        const char* cadena2 = {"franco"};
        
        strcat(cadena1,cadena2);
        
        
        cout << "introduzca un nombre: ";
        getline(cin, nombres);
        transform(nombres.begin(), nombres.end(), nombres.begin(), ::tolower);
            if (nombres == cadena1)
                {   cout << "Bienvenido amigo";
                }   else (cout<<"Bienvenido");{}

return 0;}