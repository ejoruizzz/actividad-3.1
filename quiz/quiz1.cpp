#include <iostream>
using namespace std;

double peso,alt,bmi;


int main(){

    cout<<"ingrese su peso en KG: ";
    cin>>peso;
    cout<<"ingrese su altura en metros: ";
    cin>>alt;

    bmi=peso/(alt*alt);
    cout<<"su indice de masa corporal es "<<bmi<<endl;

    if (bmi>18.5){
        cout<<"su indice de masa corporal indica que su peso es bajo";
    }
     if (bmi>=18.5 && bmi<=24.9){
        cout<<"su indice de masa corporal indica que su peso es normal";
    }

    if (bmi>=25 && bmi<=29.9){
        cout<<"su indice de masa corporal indica que tiene sobrepeso ";
    }

     if (bmi>=30 ){
        cout<<"su indice de masa corporal indica que esta obeso ";
    }


return 0;
}