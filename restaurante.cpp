#include <iostream>
using namespace std;

int main() {
    int opcion;
do {
cout << "===== MENU =====" << endl;
cout << "1. PIZZA" << endl;
cout << "2. PASTA" << endl;
cout << "3. HAMBURGUESA" << endl;
cout << "para salir seleccione el numero 4." <<endl;
cout << "Seleccione una opcion: ";
cin >> opcion;
switch (opcion) {
case 1:
cout << "Has elegido PIZZA" << endl;
break;

case 2:
cout << "Has elegido PASTA" << endl;
break;

case 3:
cout << "Has elegido HAMBURGUESA" << endl;
cout << "Saliendo del menu..." << endl;
break;

case 4:
cout << "Saliendo del menu..." << endl;
break;
 default:
cout << "Opcion no valida, intente de nuevo." << endl;
}

} while (opcion != 4);

 return 0;
}