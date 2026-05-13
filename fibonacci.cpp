#include <iostream>
using namespace std;

int main() {
int n;
int a = 0, b = 1, siguiente;
int contador = 1;

cout << "Ingrese la cantidad de terminos: ";
cin >> n;

while (contador <= n) {
cout << a << " ";

siguiente = a + b;
a = b;
b = siguiente;

contador++;
}

return 0;
}