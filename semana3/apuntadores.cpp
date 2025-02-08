#include <iostream>
using namespace std;

int main(){
int valor = 10;
int*puntero=&valor;

cout <<"valor de la variable: "<<valor<< endl;
cout <<"Direccion de memoria'valor': "<<&valor<<endl;
cout <<"valor almacenado en el puntero: "<<*puntero<<endl;
cout <<"Direccion de memoria almacenada en el puntero: "<<puntero<<endl;

*puntero=20;

cout << "valor modificado de la variable: " << valor <<endl;
return 0;
}