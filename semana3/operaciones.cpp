#include <iostream>
using namespace std;

class operacion{
    protected:
    int valor1;
    int valor2;
    int resultado;
    public:
    void cargar1(){
        cout << "ingrese primer valor: ";
        cin>>valor1;
    };
    void cargar2(){
        cout << "ingrese segundo valor: ";
        cin>>valor2;
    };
    void mostrarResultado(){
        cout << resultado<<"\n";
    };


};

class suma: public operacion{
public:
void operar(){
resultado=valor1+valor2;
};
};

class resta: public operacion{
    public:
    void operar(){
        resultado=valor1-valor2;
    };
};

class multi:public operacion{
public:
void operar(){
resultado=valor1*valor2;
};
};

int main(){
suma objsuma;
objsuma.cargar1();
objsuma.cargar2();
objsuma.operar();
cout<< "la suma de los valores es: ";
objsuma.mostrarResultado();
cout<<"==================================="<<"\n";

resta objresta;
objresta.cargar1();
objresta.cargar2();
objresta.operar();
cout<< "la resta de los valores es: ";
objresta.mostrarResultado();
cout<<"==================================="<<"\n";

multi objmulti;
objmulti.cargar1();
objmulti.cargar2();
objmulti.operar();
cout<< "la multiplicacion de los valores es: ";
objmulti.mostrarResultado();

}