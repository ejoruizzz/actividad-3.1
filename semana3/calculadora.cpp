#include <iostream>
using namespace std;

class calculadora{
    public:
    int sumar(int a,int b){
        return a+b;
    }

    double sumar (double a, double b){
        return a+b;
    }

    int sumar(int a,int b, int c){
        return a+b+c;
    }


    int dividir(int a,int b){
        return a/b;
    }

    int dividir(double a,double b){

        return a/b;
    }
};

int main(){
    calculadora calc;
    cout<<"suma de enteros: "<<
    calc.sumar(3,5) << endl;
    cout << "suma de decimales: "<<
    calc.sumar(2.5,3.7)<< endl;
    cout<< "suma de tres enteros: "<<
    calc.sumar(1,2,3)<<endl;
    cout<< "division de enteros"<<
    calc.dividir(2,2)<< endl;
    cout<< "division de decimales"<<
    calc.dividir(2.2,2.2)<< endl;



return 0;
}