#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

class Vendedor {                    // clase vendedor
    public:
        string Cve_Vendedor;        // clave del vendedor
        string Nombre;              // nombre del vendedor
};

class Inventario {
    public:
    string getCve(){return Cve_Articulo;}
    string getDes(){return Descripcion;}
    double getPre(){return Precio;}
    
    void setCve(string Clave){
        Cve_Articulo = Clave;
    }
    
    void setDes(string Des){
        Descripcion = Des;
    }
    
    void setPre(double Pre){
        Precio = Pre;
    }
    
    void setArticulo(string Clave, string Des, double Pre){
        Cve_Articulo = Clave;
        Descripcion = Des;
        Precio = Pre;
    }
    
    private:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
};

class Factura {
    public:
        string NoFactura;
        string Cve_Vendedor;
        string Cve_Articulo;
        int Cantidad;
};

string GETDATE(){
    char out[14];
    std::time_t t=std::time(NULL);
    std::strftime(out, sizeof(out), "%Y%m%d%H%S", std::localtime(&t));
    Sleep(2000);  // pauses for 10 seconds
    return out;
};

void GeneraFactura(int contadorFactura, Factura arregloF[], Vendedor v1, Inventario i2, int Cant){

    Factura f1;
    f1.Cve_Vendedor = v1.Cve_Vendedor;
    f1.Cve_Articulo = i2.Cve_Articulo;
    f1.Cantidad = Cant;
    f1.NoFactura = "F" + GETDATE();
    arregloF[contadorFactura] = f1;
};

int main() {

    Vendedor arregloV[2];
    Inventario arregloI[4];
    Factura arregloF[5];

    Vendedor v1 = {"v100","Don Julio Estrella el Grande"}; // variable v1, vendedor 1
    Vendedor v2 = {"v200","Dona Esperanza Luna"};
    arregloV[0] = v1;           // metiendo los vendedores al arreglo
    arregloV[1] = v2;

    Inventario i1;
        i1.setArticulo("i500","Tornillo sin fin",10.0);
    Inventario i2;
    i2.setArticulo("i100","Pinon Cremallera",10.0);
    Inventario i3;
    i3.setArticulo("i700","Angulo de Ackerman",10.0);
    arregloI[0] = i1;
    arregloI[1] = i2;
    arregloI[2] = i3;

    int contadorFactura = 0;
    
    GeneraFactura(contadorFactura, arregloF, v1, i2, 32);

    // imprimimos todas las facturas
    cout << "Facturas Generadas "<< endl;
    cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;

    string nombreArticulo;

    for (int j = 0; j <= contadorFactura; j++){
        for (int k = 0;k < sizeof(arregloI)/sizeof(arregloI[0]);k++){
            if (arregloF[j].Cve_Articulo == arregloI[k].Cve_Articulo)
                nombreArticulo = arregloI[k].Descripcion;
        }
        cout <<arregloF[j].NoFactura<<"\t"
            <<arregloF[j].Cve_Vendedor<<"\t\t"
            <<arregloF[j].Cve_Articulo<<"\t"
            <<nombreArticulo<<endl;
    }

    return 0;
}
