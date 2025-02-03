#include <iostream>
#include <string>  
using namespace std;

class persona {
private:
    std::string nombres;
    std::string apellidos;
    std::string documentos;
    std::string tipo;

public:
    persona(std::string xnombre, std::string xapellido, std::string xdocumentos, std::string xtipo) {
        nombres = xnombre;
        apellidos = xapellido;
        documentos = xdocumentos;
        tipo = xtipo;
    }

    std::string getNombre() {
        return nombres;
    }

    void setNombre(std::string xnombre) {
        nombres = xnombre;
    }

    std::string getApellido() {  // Corregí el nombre del método
        return apellidos;
    }

    void setApellido(std::string xapellido) {
        apellidos = xapellido;  // Corregí el punto y coma
    }

    std::string getDocumento() {  // Corregí el nombre del método
        return documentos;
    }

    void setDocumento(std::string xdocumentos) {
        documentos = xdocumentos;  // Corregí el punto y coma
    }

    std::string getTipo() {  // Corregí el nombre del método
        return tipo;
    }

    void setTipo(std::string xtipo) {
        tipo = xtipo;
    }
};

class cliente : public persona {
private:
    std::string categoria;
    std::string codigo;

public:
    cliente(std::string nombre, std::string apellido, std::string documento, std::string tipo, std::string xcategoria, std::string xcodigo)
        : persona(nombre, apellido, documento, tipo) {  // Llamada al constructor de la clase base
        categoria = xcategoria;
        codigo = xcodigo;
    }

    std::string getCategoria() {
        return categoria;
    }

    void setCategoria(std::string xcategoria) {
        categoria = xcategoria;
    }

    std::string getCodigo() {  // Corregí el nombre del método
        return codigo;
    }

    void setCodigo(std::string xcodigo) {
        codigo = xcodigo;
    }

    void imprimir() {
        cout << "Datos del cliente" << "\n";
        cout << "Nombre: " << getNombre() << "\n";
        cout << "Apellido: " << getApellido() << "\n";  // Corregí el nombre del método
        cout << "Documento: " << getDocumento() << "\n";  // Corregí el nombre del método
        cout << "Tipo: " << getTipo() << "\n";  // Corregí el nombre del método
        cout << "Categoria: " << getCategoria() << "\n";  // Corregí el nombre del método
        cout << "Codigo: " << getCodigo() << "\n";  // Corregí el nombre del método
    }
};

int main() {
    cliente objCliente("Juan", "Perez", "12345678", "VIP", "CategoriaA", "C001");
    objCliente.imprimir();

    return 0;
}