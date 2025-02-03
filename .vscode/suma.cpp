#include<iostream>

int main(){
    int n, suma=0, numero;

    std::cout<<"escriba la cantidad de numeros a sumar ";
    std::cin>>n;
    std::cout<<"escriba el primer numero a sumar ";
    for(int x=0;x<n;x++){
        std::cin>>numero;
        suma+=numero;
        std::cout<<"escriba el proximo numero " ;
    }
    std::cout<<" la suma total es: "<<suma;
}