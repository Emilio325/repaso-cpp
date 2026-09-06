#include "punto.h"
#include <cmath>
#include <iostream>

Punto::Punto(double x, double y) : x(x), y(y) {
}

Punto::~Punto() {
}

void Punto::imprimir() const {
    std::cout << "(" << x << ", " << y << ")\n";
}

double Punto::distanciaOrigen() const {
    return std::sqrt(x * x + y * y);
}