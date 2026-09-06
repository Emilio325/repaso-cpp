#include "punto.h"
#include <iostream>

int main() {
    Punto p(3, 4);

    p.imprimir();
    std::cout << p.distanciaOrigen() << "\n";

    return 0;
}