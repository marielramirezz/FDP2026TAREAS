
# include <iostream>
using namespace std;

int main () {
int fecha;
int mes;
cout << "Ingrese su fecha de nacimiento para saber su signo zodiacal" <<endl;
cin>> fecha;
cout <<"ingrese su mes de nacimiento del 1-12" <<endl;
cin>> mes;
switch (mes){
    case 1: 
    if (fecha<=19)
    cout<<" tu signo es Capricornio"<<endl;
    else 
    cout<< "tu signo es Acuario" <<endl;
    break;
    case 2: 
    if (fecha<=18)
    cout <<"tu signo es Acuario" <<endl;
    else 
    cout<< "tu signo es Piscis" <<endl;
    break;
    case 3:
    if (fecha <=20)
    cout<<"tu signo es Piscis" <<endl;
    else 
    cout<< "tu signo es Aries" <<endl;
    break;
    case 4: 
    if (fecha <=19)
    cout << "tu signo es Aries"<<endl;
    else 
    cout<< "tu signo es Tauro" <<endl;
    break;
    case 5:
    if (fecha <=20)
    cout<< "tu signo es Tauro" <<endl;
    else 
    cout<<"tu signo es Geminis" <<endl;
    break;
    case 6:
    if (fecha <=20)
    cout<< "tu signo es Geminis" <<endl;
    else 
    cout<<"tu signo es Cancer" <<endl;
    break;
    case 7:
    if (fecha <=22)
    cout<< "tu signo es Cancer" <<endl;
    else 
    cout<<"tu signo es Leo" <<endl;
    break;
    case 8:
if (fecha <=22)
    cout<< "tu signo es Leo" <<endl;
    else 
    cout<<"tu signo es Virgo" <<endl;
    break;
    case 9:
if (fecha <=22)
    cout<< "tu signo es Virgo" <<endl;
    else 
    cout<<"tu signo es Libra" <<endl;
    break;
case 10:
if (fecha <=22)
    cout<< "tu signo es Libra" <<endl;
    else 
    cout<<"tu signo es Escorpio" <<endl;
    break;
    case 11:
if (fecha <=21)
    cout<< "tu signo es Escorpio" <<endl;
    else 
    cout<<"tu signo es Sagitario" <<endl;
    break;
    case 12:
if (fecha <=21)
    cout<< "tu signo es Sagitario" <<endl;
    else 
    cout<<"tu signo es Capricornio" <<endl;
    break;
    default:
    cout<< "ERROR FECHA FUERA DE RANGO" <<endl;
}
return 0;
}