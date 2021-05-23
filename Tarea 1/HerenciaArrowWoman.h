// HerenciaEstudiante.h  

#include "HerenciaPersonaje.h"

class ArrowWoman : public Personaje {
    public:
        ArrowWoman();
        ArrowWoman(int, int);
        void shootArrow(int);
        void addArrow(int);
        void showArrows();
        int getArrows();
    private:
        int numFlechas;
};

ArrowWoman::ArrowWoman() : Personaje() {
    numFlechas = 100;
};

ArrowWoman::ArrowWoman(int n, int l) : Personaje(l) {
    numFlechas = n;
};

void ArrowWoman::shootArrow(int n) {
    cout << "Arrow Woman tiro una flecha! o:" << endl;
    numFlechas = numFlechas - n;
    cout << "Te quedan " << numFlechas << " flechas." << endl;
}

void ArrowWoman::showArrows() {
    cout << numFlechas << " flechas" << endl;
}

int ArrowWoman::getArrows() {
    return numFlechas;
}