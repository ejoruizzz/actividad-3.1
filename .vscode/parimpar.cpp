#include <iostream>

int main(){
int numero;
std::string resultado;
std::cout<<"escriba un numero ";
std::cin>>numero;
if (numero%2==0){
    resultado="el numero es par ";
}
else{
    resultado="el numero es impar ";
}
std::cout<<resultado;
}
