// HerenciaEstudiante.h  

#include "HerenciaPersonaje.h"

class ArrowWoman : public Personaje {
    public:
        ArrowWoman();
        ArrowWoman(int, int);
        void shoot(int);
        //void add(int);
        void show();
        void talk();
        int get();
    private:
        int numFlechas;
};

ArrowWoman::ArrowWoman() : Personaje() {
    numFlechas = 100;
};

ArrowWoman::ArrowWoman(int n, int l) : Personaje(l) {
    numFlechas = n;
};

void ArrowWoman::shoot(int n) {
    cout << "Arrow Woman tiro una flecha! o:" << endl;
    numFlechas = numFlechas - n;
    cout << "Te quedan " << numFlechas << " flechas." << endl;
}

void ArrowWoman::show() {
    cout << numFlechas << " flechas" << endl;
}

void ArrowWoman::talk() {
    cout << "ARROWWOMAN: You cannot win!" << endl;
}

int ArrowWoman::get() {
    return numFlechas;
}