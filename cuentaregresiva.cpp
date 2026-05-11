#include <iostream>
using namespace std;

int main() {
int contador = 0;
cout << "INGRESE EL NUMERO PARA HACER LA CUENTA REGRESIVA: " <<endl;
cin >> contador;
do 
{
    cout << contador <<endl;
    contador--;
}
while (contador >=0); 
cout << "cuenta regresiva finalizada " ;

    return 0;
}