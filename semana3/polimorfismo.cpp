#include <iostream>
using namespace std;
//polimorfismo dinamico con clases y metodos virtuales
//clase base
class animal{
public:
virtual void sonido(){
    cout<< "el animal hace un sonido"<< endl;
}
};

//clase derivada 
class perro : public animal{
public:
//sobrescribir el metodo de la clase base
void sonido()override{
    cout<<"el perro ladra: Guau Guau!!!"<<endl;
}
};

class gato : public animal{
public:
//sobrescribir el metodo de la clase base
void sonido()override{
    cout<<"el gato maulla: miau miau!!!"<<endl;
}
};

int main(){
animal*animal1 = new perro();
animal*animal2 = new gato();

animal1->sonido();
animal2->sonido();

delete animal1;
delete animal2;
return 0;
}