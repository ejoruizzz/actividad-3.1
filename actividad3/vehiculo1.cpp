#include <iostream>
#include <string>  
using namespace std;

class vehiculo{

private:
std::string marca;
std::string modelo;
int potenciacv;

public: 

vehiculo(std::string xmarca,std::string xmodelo,int a){
    marca=xmarca;
    modelo=xmodelo;
    potenciacv=a;
}
std::string getMarca(){
    return marca;
}
void setMarca(std::string xmarca){
    marca=xmarca;
}
std::string getModelo(){
    return modelo;
}
void setModelo(std::string xmodelo){
    modelo=xmodelo;
}
int getPotenciacv() const { return potenciacv; }
    void setPotenciacv(int a) {
        potenciacv = a;
    }

void  MostrarInfo() {
        cout << "Modelo: " << modelo << "\n";
        cout << "Marca: " << marca << "\n";
        cout << "Potenciacv: " << potenciacv << "\n";
        
    }

 
};

class taxi : public vehiculo{
    private:
    int numlicencia;

    public:

    taxi(std::string marca,std::string modelo,int a,int b):vehiculo(marca,modelo,a){
        numlicencia=b;
    }

     int getNumlicencia() const { 
        return numlicencia; 
    }

    void setNumlicencia(int b) {
        numlicencia = b;
    }

     

    void MostrarInfo(){
        vehiculo::MostrarInfo();
        cout<<"numero de licencia "<<numlicencia<<"\n";
        cout<< "==============================="<< "\n";
    }
};

class autobus: public vehiculo{
private:
int numplazas;

public:
autobus(std::string marca, std::string modelo, int a, int xplazas) : vehiculo(marca, modelo, a) {
    numplazas = xplazas;
    }

    int getTieneCasco() const { 
        return numplazas; 
    }

    void setTieneCasco(int xplazas) {
        numplazas = xplazas;
    }


void MostrarInfo(){
    vehiculo::MostrarInfo();
    cout << "Numero de plazas: "<< numplazas << "\n";
    }
};



int main(){

    cout<<"Datos del taxi "<<"\n";
    taxi objtaxi("susuki","swift",1200,01012004);
    objtaxi.MostrarInfo();
   

    cout<<"Datos del autobus "<<"\n";
    autobus objautobus("Mercedes benz","citaro",2600,106);
    objautobus.MostrarInfo();
    

    return 0;
}
