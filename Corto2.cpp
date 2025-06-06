#include <iostream>
using namespace std;

int main(){
//declaracion de variables//
int edad,cliente,plato,plato1,plato2,plato3,plato4,plato5,plato6;
float precio,saldototal,saldo;
saldo = 7;
plato1=8;
plato2=7;
plato3=10;
plato4=6;
plato5=9;
plato6=5;

cout<<" "<<endl;
cout<<"BIENVENIDO AL RESTAURANTE EN LINEA -FUNDAMENTOS- "<<endl;
cout<<"Para realizar compras de consumo, debe ser mayor de 12."<<endl;

cout<<"Ingrese su edad a continuacion: ";
cin>>edad;
cout<<" "<<endl;
    if(edad<=12){cout<<"No es posible continuar";return 0;}
cout<<"Su saldo disponible es de $"<<saldo<<endl;

cout<<" "<<endl;
cout<<"Seleccione su tipo de sesion para ver los precios"<<endl;
cout<<"1- Sesion Estudiantil"<<endl;
cout<<"2- Sesion de Adulto Mayor"<<endl;
cout<<"3- Ver todo el menu"<<endl;
cout<<"Sesion a revisar: ";
cin>>cliente;
cout<<" "<<endl;

switch (cliente){
case 1:
    if (cliente=1){
        saldo=saldo-precio;
        cout<<"-La sesion estudiantil incluye un descuento en su consumo del 25%-"<<endl;
        cout<<"Menu estudiantil:"<<endl;
        cout<<"Plato 1- Combo Hamburguesa - $"<<plato1<<endl;
        cout<<"Plato 2- Combo Pizza Personal - $"<<plato2<<endl;
        cout<<"Plato 3- Almuerzo Ejecutivo - $"<<plato3<<endl;
        cout<<"Seleccione el plato a ordenar: ";
        cin>>plato;
        cout<<" "<<endl;
        
        switch (plato){
    case 1:
        if (plato=1){precio=plato1-plato1*0.25;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 2:
        if (plato=2){precio=plato2-plato2*0.25;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 3:
        if (plato=3){precio=plato3-plato3*0.25;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    default:
        cout<<"Numero invalido "<<endl;
        break;  }
        
cout<<" "<<endl;
        saldototal=saldo-precio;
if (precio<=saldo){
    cout<<"Se ha realizado tu compra, buen provecho"<<endl;
    cout<<"Tu saldo restante es de $"<<saldototal;
} else {
    if (precio>saldo){cout<<" El saldo es insuficiente, no es posible realizar la compra";}
}
                }
    
    break;

case 2:
    if (cliente=2){
        saldo=saldo-precio;
        cout<<"-La sesion de Adulto Mayor incluye un descuento en su consumo del 30%-"<<endl;
        cout<<"Plato 4- Sopa Nutritiva - $"<<plato4<<endl;
        cout<<"Plato 5- Plato Casero - $"<<plato5<<endl;
        cout<<"Plato 6- Postre + Cafe - $"<<plato6<<endl;
        cout<<"Seleccione el plato a ordenar: ";
        cin>>plato;
        cout<<" "<<endl;

    switch (plato){
    case 4:
        if (plato=4){precio=plato4-plato4*0.30;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 5:
        if (plato=5){precio=plato5-plato5*0.30;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 6:
        if (plato=6){precio=plato6-plato6*0.30;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    default:
        cout<<"Numero invalido "<<endl;
        break;  }

cout<<" "<<endl;
        saldototal=saldo-precio;
if (precio<=saldo){
    cout<<"Se ha realizado tu compra, buen provecho"<<endl;
    cout<<"Tu saldo restante es de $"<<saldototal;
} else {
    if (precio>saldo){cout<<" El saldo es insuficiente, no es posible realizar la compra";}
}
                }
break;

case 3:
    if (cliente=3){
        cout<<"-La sesion actual no presenta descuentos-"<<endl;
        cout<<"Menu Completo:"<<endl;
        cout<<"Plato 1- Combo Hamburguesa - $"<<plato1<<endl;
        cout<<"Plato 2- Combo Pizza Personal - $"<<plato2<<endl;
        cout<<"Plato 3- Almuerzo Ejecutivo - $"<<plato3<<endl;
        cout<<"Plato 4- Sopa Nutritiva - $"<<plato4<<endl;
        cout<<"Plato 5- Plato Casero - $"<<plato5<<endl;
        cout<<"Plato 6- Postre + Cafe - $"<<plato6<<endl;
        cout<<"Seleccione el plato a ordenar: ";
        cin>>plato;
        cout<<" "<<endl;

        switch (plato){
    case 1:
        if (plato=1){precio=plato1;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 2:
        if (plato=2){precio=plato2;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 3:
        if (plato=3){precio=plato3;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 4:
        if (plato=4){precio=plato4;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 5:
        if (plato=5){precio=plato5;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
    break;
    case 6:
        if (plato=6){precio=plato6;}
        cout<<"El precio a cancelar es de: $"<<precio<<endl;
        break;
    default:
        cout<<"Numero invalido "<<endl;
        break;          }

cout<<" "<<endl;
        saldototal=saldo-precio;
if (precio<=saldo){
    cout<<"Se ha realizado tu compra, buen provecho"<<endl;
    cout<<"Tu saldo restante es de $"<<saldototal;
} else {
    if (precio>saldo){cout<<" El saldo es insuficiente, no es posible realizar la compra";}
}
                 }
break;

default:
    if (cliente>3){cout<<"Error en la sesion"<<endl;}
break;      }

return 0;}