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

    public:
        string getName();
        int getAge();
    protected:
        string name;
        int age;
};
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
@@ -28,25 +32,28 @@ int Persona::getAge() {
    return age;
}

class Estudiante: public Persona{
    public:
        Estudiante();
        Estudiante(string, int, string);
        string getCarrera();
        void setCarrera();
        void muestraDatos();

    private:
        string carrera;


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

Estudiante::Estudiante() : Persona() {
Estudiante::Estudiante(){
    name = "nobody";
    age = 0;
    carrera = "none";
};

Estudiante::Estudiante(string n, int e, string c) : Persona() {
Estudiante::Estudiante(string n, int e, string c) {
    name = n;
    age = e;
    carrera = c;
@@ -57,25 +64,25 @@ string Estudiante::getCarrera() {
}

void Estudiante::muestraDatos() {
    cout << "Nombre  Edad  Carrera" << endl;
    cout << name <<"  "<< age << "  "<< carrera << endl;
    cout << "Nombre Edad  Carrera" << endl;
    cout << name << "  " << age << "   " << carrera << endl;
}

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        string getDepto();
        void setDepto();
        void muestraDatos();
    private:
        string depto;
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
    name = "nobody"
    name = "nobody";
    age = 0;
    carrera = "none";    
    depto = "none";
};

Maestro::Maestro(string n, int e, string d) : Persona() {
@@ -90,61 +97,85 @@ string Maestro::getDepto() {

void Maestro::muestraDatos() {
    cout << "Nombre  Edad  Departamento" << endl;
    cout << name <<"  "<< age << "  "<< depto << endl;
    cout << name << "  " << age << "  " << depto << endl;
}

void crearAlumno(Estudiante lista[]){
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
    cout << "Cuántos alumnos desea agregar?" << endl;
    cout << "Cuantos alumnos desea agregar?" << endl;
    cin >> n;

    for (int i = 0; i<=n ; i++){
        cout << "¿Cuál es el nombre del alumno " << i << "?"<< endl;
    cantidadEstudiante = n;
    for (int i = 0; i < n; i++) {
        cout << "¿Cual es el nombre del alumno " << i + 1 << "?" << endl;
        cin >> nombreTemp;
        cout << endl << endl;
        cout << "¿Cuál es la edad del alumno " << i << "?"<< endl;
        cout << "¿Cual es la edad del alumno " << i +1<< "?" << endl;
        cin >> edadTemp;
        cout << endl << endl;
        cout << "¿Cuál es la carrera del alumno " << i << "?"<< endl;
        cout << "¿Cual es la carrera del alumno " << i +1<< "?" << endl;
        cin >> carreraTemp;
        cout << endl << endl;

        lista[i] = Estudiante(nombreTemp, edadTemp, carreraTemp);

        listaEstudiante[i] = Estudiante(nombreTemp, edadTemp, carreraTemp);
    }
}

void crearMaestro(Maestro lista[]){

void crearMaestro() {
    int n = 0;
    string nombreTemp, deptoTemp;
    int edadTemp;
    cout << "Cuántos maestros desea agregar?" << endl;
    cout << "Cuantos maestros desea agregar?" << endl;
    cin >> n;

    for (int i = 0; i<=n ; i++){
        cout << "¿Cuál es el nombre del maestro " << i << "?"<< endl;
    cantidadMaestros = n;
    for (int i = 0; i < n; i++) {
        cout << "¿Cual es el nombre del maestro " << i +1<< "?" << endl;
        cin >> nombreTemp;
        cout << endl << endl;
        cout << "¿Cuál es la edad del maestro " << i << "?"<< endl;
        cout << "¿Cual es la edad del maestro " << i +1<< "?" << endl;
        cin >> edadTemp;
        cout << endl << endl;
        cout << "¿Cuál es la carrera del maestro " << i << "?"<< endl;
        cout << "¿Cual es la carrera del maestro " << i +1<< "?" << endl;
        cin >> deptoTemp;
        cout << endl << endl;

        lista[i] = Maestro(nombreTemp, edadTemp, deptoTemp);

        listaMaestro[i] = Maestro(nombreTemp, edadTemp, deptoTemp);
    }
}

int main() {
    Estudiante listaEstiante[2^31];
    Maestro listaMaestro[2^31];

    crearAlumno(listaEstiante);
    crearMaestro(listaMaestro);

    return 0;
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
