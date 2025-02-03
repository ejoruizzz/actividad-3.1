#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Articulo {
protected:
    string nombre;
    double precio;
public:
    Articulo(string _nombre, double _precio) : nombre(_nombre), precio(_precio) {}

    string getNombre() { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    double getPrecio() { return precio; }

    double getParteIVA() { return 0.0; }  // Definido pero no se utiliza en Articulo
};

class Tipo4 : public Articulo {
public:
    Tipo4(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() {
        return precio * 0.04;
    }
};

class Tipo7 : public Articulo {
public:
    Tipo7(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() {
        return precio * 0.07;
    }
};

class Tipo16 : public Articulo {
public:
    Tipo16(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() {
        return precio * 0.16;
    }
};

int main() {
    // Crear los objetos directamente y almacenarlos en el vector
    vector<Articulo*> articulos = {
        new Tipo4("raton", 2500),
        new Tipo7("computadora", 15175),
        new Tipo16("headset", 195)
    };

   
    for (Articulo* articulo : articulos) {
        cout << "Articulo: " << articulo->getNombre() 
             << ", Precio: " << articulo->getPrecio() 
             << ", IVA: " << articulo->getParteIVA() << endl;
    }

  
    for (Articulo* articulo : articulos) {
        delete articulo;
    }

    return 0;
}