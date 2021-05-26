// Maria Carelia Ibarra Vasquez
// A01251463
// 24/05/2021
// TC1030.700

# define _USE_MATH_DEFINES  // needed for pi constant
# include <iostream>

using namespace std;

# include <cmath>           // has to be under _USE_MATH_DEFINES for some reason smh
# include "Shape.h"
# include "Circle.h"
# include "Rectangle.h"



int main() {

    Shape *Shapes[5];   // creamos un arreglo de objetos tipo Shape

    Shapes[0] = new Circle();
    Shapes[1] = new Rectangle();
    Shapes[2] = new Rectangle(1, 2, 6, 5);
    Shapes[3] = new Circle(3, 4, 6);
    Shapes[4] = new Rectangle();

    for (int i = 0; i < 5; i++) {
        Shape *current = Shapes[i];
        current -> draw();
    }

    return 0;
}