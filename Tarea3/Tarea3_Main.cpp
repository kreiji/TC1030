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

int main() {
    srand(time(0)); // uwu
/*
    LaserMan l1;
    ArrowWoman a1; 

    l1.show();
    a1.show();

    cout << endl;

    l1.talk();
    a1.talk();

    for (int i = 0; i < ROUNDS; i++) {
        
        cout << endl << "ROUND " << i << endl << endl;

        cout << "FIGHT!" << endl << endl;
        
        l1.shoot(getRand(GOLPE));
        a1.shoot(getRand(GOLPE));
        cout << " ... " << endl;
        Sleep(3000);
    } 

    l1.show();
    a1.show();

    if (l1.getCarga() > a1.getArrows()) {
        cout << "Laser Man gano!" << endl;
    }
    else {
        cout << "Arrow Woman gano!" << endl;
    }*/

    Personaje *Characters[2];
    Personaje *objPersonaje;

    objPersonaje = new LaserMan();
    Characters[0] = objPersonaje;

    objPersonaje = new ArrowWoman();
    Characters[1] = objPersonaje;

    for (int i = 0; i < 2; i++) {
        
        Characters[i]->show();
        cout << endl << endl;
        Characters[i]->talk();
        cout << endl << endl;
    }

    for (int i = 0; i < ROUNDS; i++) {
        
        cout << endl << "ROUND " << i + 1 << endl << endl;

        cout << "FIGHT!" << endl << endl;
        
        Characters[0]->shoot(getRand(GOLPE));
        Characters[1]->shoot(getRand(GOLPE));
        cout << " ... " << endl;
        Sleep(3000);
    } 

    Characters[0]->show();
    Characters[1]->show();

    if (Characters[0]->get() > Characters[1]->get()) {
        cout << "Laser Man gano!" << endl;
    }
    else {
        cout << "Arrow Woman gano!" << endl;
    }

    return 0;
}
