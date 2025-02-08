#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Empleado {
protected:
    string nombre;
public:
    Empleado(string _nombre) : nombre(_nombre) {}

    void setNombre(string _nombre) { nombre = _nombre; }
    string getNombre() const { return nombre; }

    string toString() const { 
        return "Nombre del empleado: " + nombre;
    }
};

class Operario : public Empleado {
public:
    Operario(string _nombre) : Empleado(_nombre) {}

    string toString() const {
        return "Operario: " + nombre;
    }
};

class Directivo : public Empleado {
public:
    Directivo(string _nombre) : Empleado(_nombre) {}

    string toString() const {
        return "Directivo: " + nombre;
    }
};

class Oficial : public Empleado {
public:
    Oficial(string _nombre) : Empleado(_nombre) {}

    string toString() const {
        return "Oficial: " + nombre;
    }
};

class Tecnico : public Empleado {
public:
    Tecnico(string _nombre) : Empleado(_nombre) {}

    string toString() const {
        return "Técnico: " + nombre;
    }
};

int main() {

    vector<Empleado*> empleados = {
        new Operario("Emilio"),
        new Directivo("Abigail"),
        new Oficial("Justin"),
        new Tecnico("Marvin")
    };

   
    for (Empleado* empleado : empleados) {
        cout << empleado->toString() << endl;
    }

    for (Empleado* empleado : empleados) {
        delete empleado;
    }

    return 0;
}