// María Carelia Ibarra Vásquez
// A01251463

//Fernando Gonzalez Rosas
//A01253694

// 5/17/2021
// TC1030.700

# include <iostream>
using namespace std;

class Persona {

    public:
        string getName();
        int getAge();
    protected:
        string name;
        int age;
};

string Persona::getName() {
    return name;
}

int Persona::getAge() {
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
};

Estudiante::Estudiante() : Persona() {
    name = "nobody";
    age = 0;
    carrera = "none";
};

Estudiante::Estudiante(string n, int e, string c) : Persona() {
    name = n;
    age = e;
    carrera = c;
}

string Estudiante::getCarrera() {
    return carrera;
}

void Estudiante::muestraDatos() {
    cout << "Nombre  Edad  Carrera" << endl;
    cout << name <<"  "<< age << "  "<< carrera << endl;
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
};

Maestro::Maestro() : Persona() {
    name = "nobody"
    age = 0;
    carrera = "none";    
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
    cout << name <<"  "<< age << "  "<< depto << endl;
}

void crearAlumno(Estudiante lista[]){
    int n = 0;
    string nombreTemp, carreraTemp;
    int edadTemp;
    cout << "Cuántos alumnos desea agregar?" << endl;
    cin >> n;

    for (int i = 0; i<=n ; i++){
        cout << "¿Cuál es el nombre del alumno " << i << "?"<< endl;
        cin >> nombreTemp;
        cout << endl << endl;
        cout << "¿Cuál es la edad del alumno " << i << "?"<< endl;
        cin >> edadTemp;
        cout << endl << endl;
        cout << "¿Cuál es la carrera del alumno " << i << "?"<< endl;
        cin >> carreraTemp;
        cout << endl << endl;

        lista[i] = Estudiante(nombreTemp, edadTemp, carreraTemp);

    }
}

void crearMaestro(Maestro lista[]){
    int n = 0;
    string nombreTemp, deptoTemp;
    int edadTemp;
    cout << "Cuántos maestros desea agregar?" << endl;
    cin >> n;

    for (int i = 0; i<=n ; i++){
        cout << "¿Cuál es el nombre del maestro " << i << "?"<< endl;
        cin >> nombreTemp;
        cout << endl << endl;
        cout << "¿Cuál es la edad del maestro " << i << "?"<< endl;
        cin >> edadTemp;
        cout << endl << endl;
        cout << "¿Cuál es la carrera del maestro " << i << "?"<< endl;
        cin >> deptoTemp;
        cout << endl << endl;

        lista[i] = Maestro(nombreTemp, edadTemp, deptoTemp);

    }
}

int main() {
    Estudiante listaEstiante[2^31];
    Maestro listaMaestro[2^31];

    crearAlumno(listaEstiante);
    crearMaestro(listaMaestro);
    
    return 0;
}
