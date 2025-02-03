#include <iostream>
#include <string>  
using namespace std;

class vehiculo{

private:
std::string marca;
std::string modelo;
int year;

public: 

vehiculo(std::string xmarca,std::string xmodelo,int a){
    marca=xmarca;
    modelo=xmodelo;
    year=a;
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
int getYear() const { return year; }
    void setYear(int a) {
        year = a;
    }

void  MostrarInfo() {
        cout << "modelo: " << modelo << "\n";
        cout << "marca: " << marca << "\n";
        cout << "Año: " << year << "\n";
    }

 
};

class coche : public vehiculo{
    private:
    int numpuertas;

    public:

    coche(std::string marca,std::string modelo,int a,int b):vehiculo(marca,modelo,a){
        numpuertas=b;
    }

     int getNumpuertas() const { 
        return numpuertas; 
    }

    void setNumpuertas(int b) {
        numpuertas = b;
    }

       void  arrancarc() {
        cout << "El coche esta arrancando--- bruumm ";
     
    }

    void MostrarInfo(){
        vehiculo::MostrarInfo();
        cout<<"numero de puertas "<<numpuertas<<"\n";
    }
};

class moto: public vehiculo{
private:
bool tienecasco;

public:
moto(std::string marca, std::string modelo, int a, bool cascos) : vehiculo(marca, modelo, a) {
        tienecasco = cascos;
    }

    bool getTieneCasco() const { 
        return tienecasco; 
    }

    void setTieneCasco(bool cascos) {
        tienecasco = cascos;
    }

    void arrancarMoto() {
        cout << "La moto está arrancando--- vroom vroom\n";
    }

void MostrarInfo(){
    vehiculo::MostrarInfo();
    cout << "Tiene casco: " << (tienecasco ? "Sí" : "No") << "\n";
    }
};

class camion: public vehiculo{
private:
float capacidadCarga;

public:
camion(std::string marca, std::string modelo, int a, float xcapacidadCarga) : vehiculo(marca, modelo, a) {
       capacidadCarga=xcapacidadCarga;
    }

    float getcapacidadCarga()const{
        return capacidadCarga;
    }
    void setcapacidadCarga(float xcapacidadCarga){
        capacidadCarga=xcapacidadCarga;
    }

    void arrancarca(){
        cout<<"el camion esta arrancando BROOOMMMMM";
    }
    void MostrarInfo(){
        vehiculo::MostrarInfo();
        cout<<"capacidad de carga"<<capacidadCarga;
    }
};

int main(){

    cout<<"Datos del coche "<<"\n";
    coche objcoche("susuki","swift",2013,4);
    objcoche.MostrarInfo();
    objcoche.arrancarc();

    cout<<"Datos de la moto "<<"\n";
    moto objmoto("kawasaki","ninja",2020,true);
    objmoto.MostrarInfo();
    objmoto.arrancarMoto();

    cout<<"Datos del camion "<<"\n";
    camion objcamion("volkswagen","crafter",2020,5000);
    objcamion.MostrarInfo();
    objcamion.arrancarca();

    return 0;
}


