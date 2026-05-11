# include <iostream>
using namespace std;

int main () {
int numero, suma = 0;
do {
    cout << " ingrese un numero (0 para terminar)" <<endl;
    cin >>numero;
    suma += numero;
} while (numero != 0);
cout << "la suma de los digitos es: " <<suma <<endl;
    return 0;
}