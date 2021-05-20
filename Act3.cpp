// María Carelia Ibarra Vásquez
// A01251463
//Fernando Gonzalez Rosas
//A01253694

//Alejandra Margarita Castro Amarillas 
//A01253828

// 5/17/2021
// TC1030.700

# include <iostream>
#include<windows.h>
using namespace std;

class Persona {
protected:
    string name;
    int age;
public:
    string getName();
    int getAge();

};
string Persona::getName() {
    return name;
}
int Persona::getAge() {
    return age;
}


class Estudiante :Persona {
public:
    Estudiante();
    Estudiante(string, int, string);
    string getCarrera();
    void setCarrera();  
    void muestraDatos();

private:
    string carrera;
};
Estudiante::Estudiante(){
    name = "nobody";
    age = 0;
    carrera = "none";
};
Estudiante::Estudiante(string n, int e, string c) {
    name = n;
    age = e;
    carrera = c;
}
string Estudiante::getCarrera() {
    return carrera;
}

void Estudiante::muestraDatos() {
        cout << "Nombre Edad  Carrera" << endl;
    cout << name << "  " << age << "   " << carrera << endl;
}
class Maestro : public Persona {
public:
    Maestro();
    Maestro(string, int, string);
    string getDepto();
    void setDepto();
    void muestraDatos();
private:
    string depto;
};

Maestro::Maestro() : Persona() {
    name = "nobody";
    age = 0;
    depto = "none";
};

Maestro::Maestro(string n, int e, string d) : Persona() {
    name = n;
    age = e;
    depto = d;
};
string Maestro::getDepto() {
    return depto;
}

void Maestro::muestraDatos() {
    cout << "Nombre  Edad  Departamento" << endl;
    cout << name << "  " << age << "  " << depto << endl;
}

//ESTAS SON LAS VARIABLES GLOBALES 
Estudiante listaEstudiante[100];
Maestro listaMaestro[100];
int cantidadMaestros = 0;
int cantidadEstudiante = 0;

//LAS FUNCIONES HACEN REFERENCIA A LAS FUNCIONES GLOBALES PARA GUARDAR LOS DATOS
void crearAlumno() {
    int n = 0;
    string nombreTemp, carreraTemp;
    int edadTemp;

    cout << "Cuantos alumnos desea agregar?" << endl;
    cin >> n;
    cantidadEstudiante = n;
    for (int i = 0; i < n; i++) {
        cout << "¿Cual es el nombre del alumno " << i + 1 << "?" << endl;
        cin >> nombreTemp;
        cout << endl << endl;
        cout << "¿Cual es la edad del alumno " << i +1<< "?" << endl;
        cin >> edadTemp;
        cout << endl << endl;
        cout << "¿Cual es la carrera del alumno " << i +1<< "?" << endl;
        cin >> carreraTemp;
        cout << endl << endl;
        listaEstudiante[i] = Estudiante(nombreTemp, edadTemp, carreraTemp);
    }
}

void crearMaestro() {
    int n = 0;
    string nombreTemp, deptoTemp;
    int edadTemp;
    
void crearMaestro() {
    int n = 0;
    string nombreTemp, deptoTemp;
    int edadTemp;
    cantidadMaestros = n;
    for (int i = 0; i < n; i++) {
        cout << "¿Cual es el nombre del maestro " << i +1<< "?" << endl;
        cin >> nombreTemp;
        cout << endl << endl;
        cout << "¿Cual es la edad del maestro " << i +1<< "?" << endl;
        cin >> edadTemp;
        cout << endl << endl;
        cout << "¿Cual es la carrera del maestro " << i +1<< "?" << endl;
        cin >> deptoTemp;
        cout << endl << endl;
        listaMaestro[i] = Maestro(nombreTemp, edadTemp, deptoTemp);
    }
}

void MostrarEstudiantes() {
    for (int i = 0; i < cantidadEstudiante; i++)
    {
        listaEstudiante[i].muestraDatos();
        cout << endl;
    }
}
void MostrarMaestros() {
    for ( int i = 0; i <cantidadMaestros; i++)
    {
        listaMaestro[i].muestraDatos();
    }
}

int main() {
    int n;
    crearAlumno();
    system("cls");
    crearMaestro();
    system("cls");
    cout << "Lista de Estudiantes" << endl;
    MostrarEstudiantes();
    cout << "=======================================================" << endl;
    cout << "Lista de Maestros" <<endl;
    MostrarMaestros();

} 
