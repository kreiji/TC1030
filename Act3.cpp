// María Carelia Ibarra Vásquez
// A01251463
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

Estudiante::Estudiante(string n, int e, string c) : Persona(n, e) {
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

Maestro::Maestro(string n, int e, string d) : Persona(n, e) {
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

int main() {

    return 0;
}