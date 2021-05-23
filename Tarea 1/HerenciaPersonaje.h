// HerenciaPersonaje.h

#ifndef HerenciaPersonaje_h
#define HerenciaPersonaje_h

class Personaje {
    protected:
        int level;
    public:
        Personaje();
        Personaje(int);
        void run();
        void jump();
};

Personaje::Personaje() {    // Default Constructor
    level = 0;
}

Personaje::Personaje(int l) {
    level = l;
}

void Personaje::run() {
    cout << "El personaje esta corriendo" << endl;
}

void Personaje::jump() {
    cout << "El personaje esta saltando" << endl;
}

#endif