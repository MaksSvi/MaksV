#include "Trapezoid.h"

int main() {
    Trapezoid TR1;
    Trapezoid TR2(4, 6, 5);
    Trapezoid TR3 = TR2;

    TR3 = TR3 - 3;
    TR1 = TR2 * TR3;

    cout << "TR1: "; TR1.display();
    cout << "TR2: "; TR2.display();
    cout << "TR3: "; TR3.display();

    return 0;
}

//g++ main.cpp Trapezoid.cpp -o program

//./program