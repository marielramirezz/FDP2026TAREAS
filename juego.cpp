# include <iostream>
using namespace std;

int main () {
    int numero;
    cout <<"BIENVENIDO AL SISTEMA DE PUNTUACION" <<endl;
cout <<"Ingrese el numero de estrellas recibido" <<endl;
cin >> numero;
switch (numero){
    case 1:
    cout << "NIVEL BAJO, DEBE MEJORAR"<<endl;
    break;
    case 2: 
    cout <<"NIVEL BAJO, DEBE MEJORAR"<<endl;
break;
case 3:
cout <<"BUEN NIVEL DE JUEGO" <<endl;
break;
case 4:
cout <<" BUEN NIVEL DE JUEGO" <<endl;
break;
case 5:
cout <<"EXCELENTE NIVEL, FELICIDADES." <<endl;
break;
default: 
cout <<" ERROR, PUNTUACION FUERA DE RANGO" <<endl;
break;
    return 0;
}
}