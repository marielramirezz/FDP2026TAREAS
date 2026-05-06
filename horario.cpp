#include <iostream>
using namespace std;

int main() {
    int dia;
cout << "INGRESE UN DIA DE LA SEMANA DEL 1-5" <<endl;
cin >> dia;
switch(dia){
    case 1: 
    cout << "LUNES: MATEMATICA, SOCIALES, LENGUAJE Y FISICA" <<endl;
    break;
    case 2:
    cout << " MARTES: MATEMATICAS, CIENCIAS, BIOLOGIA, SOCIALES Y RELIGION" <<endl;
    break;
    case 3: cout << "MIERCOLES: SOCIALES, CIENCIAS, ARTISTICA, MORAL Y FISICA " <<endl;
    break;
    case 4:cout << "JUEVES: SOCIALES, MATEMATICA, LENGUAJE, ARTISTICA Y FISICA" <<endl;
    break;
    case 5: 
    cout << "VIERNES: LENGUAJE, FISICA, MATEMATICA. CIENCIAS Y SOCIALES" <<endl;
    break;
    default: 
    cout << "ERROR" <<endl;
}
    return 0;
}