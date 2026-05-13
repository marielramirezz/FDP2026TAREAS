#include <iostream>
using namespace std;

int main() {
float calificacion, suma = 0;
int contador = 0;

do {
cout << "Ingrese calificaciones (numero negativo para terminar): ";
cin >> calificacion; 
if (calificacion >= 0) {
suma += calificacion;
contador++;
}

} while (calificacion >= 0);

if (contador > 0) {
cout << "El promedio es: " << (suma / contador) << endl;
} else {
cout << "No se ingresaron calificaciones validas." << endl;
}

return 0;
}