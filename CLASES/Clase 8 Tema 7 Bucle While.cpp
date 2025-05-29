#include <iostream>
using namespace std;

int main(){

    int n=0, suma=0, posicion=0;
    int sumatoria [25]= {0};
    
        cout << "Ingrese un numero entero" << endl;
        cin >> sumatoria[posicion];

            while(sumatoria[posicion]>=0)

            {   posicion ++;
                cout << "Ingrese otro numero"<<endl;
                cin>>sumatoria[posicion];
            }

            for(int i=0; i<posicion; i++)
            {   suma = suma + sumatoria[i];
            }   cout<<"La suma total es de: "<<suma<<endl;


return 0;}