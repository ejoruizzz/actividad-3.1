#include <iostream>
using namespace std;

class figura{
    public:
    virtual void dibujar()=0;
};

class circulo:public figura{
public:
void dibujar() override{
    cout <<"dibujando un circulo"<<endl;
}
};

class cuadrado:public figura{
public:
void dibujar() override{
    cout<<"dibujando un cuadrado"<<endl;
}

};

class triangulo:public figura{
public:
void dibujar() override{
    cout<<"dibujando un triangulo"<<endl;
}

};

int main(){
    figura*f1=new circulo();
    figura*f2=new cuadrado();
    figura*f3=new triangulo();


    f1->dibujar();
    f2->dibujar();
    f3->dibujar();


delete f1;
delete f2;
delete f3;

return 0;
}