#include <iostream>
using namespace std;

int main()
{   //Hacer un menu.
    string nombre;
    char salida;
    int opcion = 0;
    
    cout << "Menu para el almuerzo: " << endl;
    
    do{ 
        cout << "Opciones de platos" << endl;
        cout << "Seleccione un platillo: "   << endl;
        cout << "1- Comida China "   << endl;
        cout << "2- Comida Mexicana " << endl;
        cout << "3- Platillos variados de Pollo " << endl;
        cout << "4- Comida Italiana "   << endl;
        cout << "5- Pupusas "   << endl;
        cout << "6- Salir "   << endl;
        cin >> opcion;
        
        switch(opcion)
        {
            case 1:
                cout << "Patas de pollo" << endl;
                cout << "Sopa de Murcielago" << endl;
            break;
            
            case 2:
                cout << "Tacos Nopal" << endl;
                cout << "Chapulines Tostados" << endl;
            break;
            
            case 3:
                cout << "Pollo a la Bigcola" << endl;
                cout << "Menudos en salsa" << endl;
            break;
            
            case 4:
                cout << "Ensalada de Monte" << endl;
                cout << "Lasagna de Garrobo" << endl;
            break;
            
            case 5:
                cout << "Pupusas de Iguana" << endl;
                cout << "Pupusas Pacaya" << endl;
            break;
            
            case 6:
                cout << "Gracias por venir" << endl;
                return 0;
            break;
            
            default:
                cout << "Numero Incorrecto" << endl;
                return 0;
            break;
        }   cout << "Desea salir?" << endl << "Escriba S para salir" << endl << "Escriba N para volver" << endl;
            cin >> salida;
        
    }    while (salida != 'S');
            cout << "Gracias por venir" << endl;
    
return 0;}