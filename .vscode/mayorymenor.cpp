#include <iostream>

int main(){
int num1,num2;
std::string resultado;
std::cout <<"escriba el primer numero: ";
std::cin>>num1;
std::cout <<"escriba el segundo numero: ";
std::cin>>num2;
if(num1>num2){
    std::cout <<num1<<"es mayor que"<<num2;
}
else if(num2>num1){
    std::cout <<num2<<"es mayor que"<<num1;
}
else{
    std::cout <<num2<<"es igual que"<<num2;
}
}