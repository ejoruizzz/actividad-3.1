#include <iostream>
using namespace std;

class animal {

private:
    int edad;
    double peso;

public:
    animal(int a = 1, double b = 2.0) {
        edad = a;
        peso = b;
    }

    int getEdad() const { return edad; }
    void setEdad(int a = 9) {
        edad = a;
    }

    double getPeso() const { return peso; }
    void setPeso(double b = 5.0) {  
        peso = b;
    }

    void imprimir() {
        cout << "Peso: " << peso << "\n";
        cout << "Edad: " << edad << "\n";
    }
};

class Perro : public animal {  
public:
    Perro(int xedad, double xpeso) : animal(xedad, xpeso) {  
    }
    void ladrar() {
        cout << "El perro está ladrando: Guau Guau Guau !!!" << "\n";
    }
};

class Gato : public animal {  
public:
    void maullar() {
        cout << "El gato está maullando" << "\n";
    }
};

int main() {
    cout << "Datos Gatunos" << "\n";
    Gato objgato;
    objgato.setEdad(10);
    objgato.setPeso(2);
    objgato.imprimir();
    objgato.maullar();

    cout << "mmmmmmmmmmmmmmm" << "\n";

    cout << "Datos Perrunos" << "\n";
    Perro objperro(2, 5.6);
    objperro.imprimir();
    objperro.ladrar();

    return 0;
}


