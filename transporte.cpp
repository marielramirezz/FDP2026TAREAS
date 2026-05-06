#include <iostream>
using namespace std;
int main() {
    int opcion;
cout <<"BIENVENIDO AL SISTEMA DE TRANSPORTE PUBLICO" <<endl;
cout<< "TENEMOS 3 TIPOS DE TRANSPORTE" <<endl;
cout <<"1-bus, 2-metro, 3-taxi"<<endl;
cin>> opcion;
switch (opcion) {
case 1:
cout <<" El precio del bus es 50ctvs" <<endl;
break;
case 2: 
cout <<"El precio del metro es $2" <<endl;
break;
case 3: 
cout <<"El precio del taxi es $5" <<endl;
break;
default: 
cout <<"ERROR, NO HAS ESCOGIDO NINGUNO" <<endl;
break;
}
    return 0;
}