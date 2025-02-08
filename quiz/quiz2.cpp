#include <iostream>
#include <string>
using namespace std;

class tienda {
private:
    int ncuenta;        
    int saldo;          
    int cargos;         
    int creditos;       
    std::string tipo;   

public:
    
    tienda(int xcuenta, int xsaldo, int xcargos, int xcreditos) {
        ncuenta = xcuenta;
        saldo = xsaldo;
        cargos = xcargos;
        creditos = xcreditos;
       
    }

   
    int getCuenta() {
        return ncuenta;
    }

    void setCuenta(int xcuenta) {
        ncuenta = xcuenta;
    }

    int getSaldo() {
        return saldo;
    }

    void setSaldo(int xsaldo) {
        saldo = xsaldo;
    }

    int getCargos() {
        return cargos;
    }

    void setCargos(int xcargos) {
        cargos = xcargos;
    }

    int getCreditos() {
        return creditos;
    }

    void setCreditos(int xcreditos) {
        creditos = xcreditos;
    }

    
    void calcularSaldo(int limiteCredito) {
        int nuevoSaldo = saldo + cargos - creditos;
        cout << "El nuevo saldo es: " << nuevoSaldo << endl;

        
        if (nuevoSaldo > limiteCredito) {
            cout << "Se excedio el limite de su credito" << endl;
        }
    }

    void imprimir() {
        cout << "Datos del cliente:" << endl;
        cout << "Numero de cuenta: " << getCuenta() << endl;
        cout << "Saldo inicial: " << getSaldo() << endl;
        cout << "Cargos: " << getCargos() << endl;
        cout << "Creditos: " << getCreditos() << endl;
      
    }
};

int main() {
    int numeroCuenta, saldoInicial, cargos, creditos;
    string tipoCliente;


    cout << "Ingrese el numero de cuenta: ";
    cin >> numeroCuenta;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldoInicial;

    cout << "Ingrese los articulos cargados: ";
    cin >> cargos;

    cout << "Ingrese los creditos: ";
    cin >> creditos;


  
    tienda objCliente(numeroCuenta, saldoInicial, cargos, creditos);

    
    objCliente.imprimir();

    
    int limiteCredito = 5000;

    objCliente.calcularSaldo(limiteCredito);

    return 0;
}



