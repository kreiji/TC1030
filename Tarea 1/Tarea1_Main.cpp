// María Carelia Ibarra Vásquez
// A01251463

// Fernando Gonzalez Rosas
// A01253694

// Alejandra Margarita Castro Amarillas 
// A01253828

// 22/05/2021
// TC1030.700

# include <iostream>
# include <ctime>
# include <windows.h>
# include <cstdlib>

using namespace std;

# include "HerenciaLaserMan.h"
# include "HerenciaArrowWoman.h"

const int GOLPE = 10;
const int ROUNDS = 3;

int getRand(int n) {
    return (rand() % n) + 1;
}

/* void combate(LaserMan l1, ArrowWoman a1) {
    int hits = getRand(ROUNDS);

    for (int i = 0; i > hits; i++) {
        l1.shootLaser(getRand(GOLPE));
        a1.shootArrow(getRand(GOLPE));
    }    
} */

int main() {
    srand(time(0)); // uwu

    LaserMan l1;
    ArrowWoman a1; 

    l1.showCarga();
    a1.showArrows();

    for (int i = 0; i < ROUNDS; i++) {
        l1.shootLaser(getRand(GOLPE));
        a1.shootArrow(getRand(GOLPE));
        cout << " ... " << endl;
        Sleep(3000);
    } 

    l1.showCarga();
    a1.showArrows();

    if (l1.getCarga() > a1.getArrows()) {
        cout << "Laser Man gano!" << endl;
    }
    else {
        cout << "Arrow Woman gano!" << endl;
    }

    return 0;
}
