// HerenciaLaserMan.h  

#include "HerenciaPersonaje.h"

class LaserMan : public Personaje {
    public:
        LaserMan();
        LaserMan(int, int);
        void shoot(int);
        //void add(int);
        void show();
        void talk();
        int get();
    private:
        int numCargas;
};

LaserMan::LaserMan() : Personaje() {
    numCargas = 100;
};

LaserMan::LaserMan(int n, int l) : Personaje(l) {
    numCargas = n;
};

void LaserMan::shoot(int n) {
    cout << "Laser Man lanzo un rasho laser >:o" << endl;
    numCargas = numCargas - n;
    cout << "Te quedan " << numCargas << " rayos laser." << endl;
}

void LaserMan::show() {
    cout << numCargas << " rayos" << endl;
}

void LaserMan::talk() {
    cout << "LASEMAN: I will put you down!" << endl;
}

int LaserMan::get() {
    return numCargas;
}