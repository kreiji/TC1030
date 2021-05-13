// Maria Carelia Ibarra y Fernando Gonzalez
// A01251463 A01253694
// 13 de mayo del 2021
// TC1030.700

#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include <sstream> // for stringstream for tokenizing
#include <fstream> // open an archive
#include <vector>
using namespace std;

class Vendedor {                    // clase vendedor
        private:
        string Cve_Vendedor;        // clave del vendedor
        string Nombre;              // nombre del vendedor
        
        public:
        void setDatos(string clave, string nombre){
            Cve_Vendedor = clave;
            Nombre = nombre;

        }
        string getClave(){return Cve_Vendedor;}
        string getNombre(){return Nombre;}
};

void agregarVendedor(vector <Vendedor> &vecV){
    int no, i;
    string claveVen, nombreVen;
    Vendedor ven;

    cout << "Ingrese el numero de vendedores a ingresar por favor." << endl;
    cin >> no;

    while (no <= 0){
        cout << "Ingrese un numero mayor a cero." << endl;
        cin >> no;
    };

    for (i = 0; i < no; i++){
        cout << "Clave del vendedor:" << endl;
        cin >> claveVen;
        cout << "Nombre del vendedor:" << endl;
        cin >> nombreVen;

        ven.setDatos(claveVen, nombreVen);

        vecV.push_back(ven);
    }
};

class Inventario {
    public:
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

void GeneraFactura(int contadorFactura, Factura arregloF[], vector <Vendedor> &vecV , Inventario i2, int Cant){

    Factura f1;
    f1.Cve_Vendedor = vecV[1].getClave();
    f1.Cve_Articulo = i2.Cve_Articulo;
    f1.Cantidad = Cant;
    f1.NoFactura = "F" + GETDATE();
    arregloF[contadorFactura] = f1;
};

int main() {

    vector <Vendedor> vecVendedor;
    Inventario arregloI[4];
    Factura arregloF[5];

    /*Vendedor v1 = {"v100","Don Julio Estrella el Grande"}; // variable v1, vendedor 1
    Vendedor v2 = {"v200","Dona Esperanza Luna"};
    arregloV[0] = v1;           // metiendo los vendedores al arreglo
    arregloV[1] = v2;*/

    agregarVendedor(vecVendedor);

    Inventario i1 = {"i500","Tornillo sin fin",10.0};
    Inventario i2 = {"i100","Pinon Cremallera",10.0};
    Inventario i3 = {"i700","Angulo de Ackerman",10.0};
    arregloI[0] = i1;
    arregloI[1] = i2;
    arregloI[2] = i3;

    int contadorFactura = 0;
    
    GeneraFactura(contadorFactura, arregloF, vecVendedor , i2, 32);

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