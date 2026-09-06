#ifndef PUNTO_H
#define PUNTO_H

class Punto {
private:
    double x;
    double y;

public:
    Punto(double x, double y);
    ~Punto();

    void imprimir() const;
    double distanciaOrigen() const;
};

#endif