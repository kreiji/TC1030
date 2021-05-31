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
        virtual void shoot(int);
        virtual void show();
        virtual void talk();
        virtual int get();
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

void Personaje::shoot(int n) {
    cout << "ksksksksks" << endl;
}

void Personaje::show() {
    cout << "wuuuuuuuuuuu" << endl;
}

void Personaje::talk() {
    cout << "deez nutz" << endl;
}

int Personaje::get() {
    return 0;
}

#endif