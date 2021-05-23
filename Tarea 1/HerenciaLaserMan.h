// HerenciaLaserMan.h  

#include "HerenciaPersonaje.h"

class LaserMan : public Personaje {
    public:
        LaserMan();
        LaserMan(int, int);
        void shootLaser(int);
        void addLaser(int);
        void showCarga();
        int getCarga();
    private:
        int numCargas;
};

LaserMan::LaserMan() : Personaje() {
    numCargas = 100;
};

LaserMan::LaserMan(int n, int l) : Personaje(l) {
    numCargas = n;
};

void LaserMan::shootLaser(int n) {
    cout << "Laser Man lanzo un rasho laser >:o" << endl;
    numCargas = numCargas - n;
    cout << "Te quedan " << numCargas << " rayos laser." << endl;
}

void LaserMan::showCarga() {
    cout << numCargas << " rayos" << endl;
}

int LaserMan::getCarga() {
    return numCargas;
}