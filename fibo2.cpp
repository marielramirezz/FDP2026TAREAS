#include <iostream>
using namespace std;

int main()
{
int numero, termino = 1;
int a = 0, b = 1;
int siguiente;

cout << "inserte la cantidad de terminos para la secuencia fibonacci" << endl;
cin >> numero;
cout << "secuencia fibonacci: " << endl;

for (int i = 0; i < numero; i++)
{
cout << "Termino " << termino << ": " << a << endl;
siguiente = a + b;
a = b;
 b = siguiente;
termino++;
}

    return 0;
}