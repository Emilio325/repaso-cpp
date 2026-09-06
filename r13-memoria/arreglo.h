#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

class Arreglo {
private:
    int* datos;
    int n;

public:
    Arreglo(int n) : datos(new int[n]{}), n(n) {
        std::cout << "Constructor: " << datos << "\n";
    }

    ~Arreglo() {
        std::cout << "Destructor: " << datos << "\n";
        delete[] datos;
    }

    Arreglo(const Arreglo& otro)
        : datos(new int[otro.n]), n(otro.n) {
        for (int i = 0; i < n; ++i)
            datos[i] = otro.datos[i];
    }

    Arreglo& operator=(const Arreglo& otro) {
        if (this == &otro)
            return *this;

        delete[] datos;
        n = otro.n;
        datos = new int[n];

        for (int i = 0; i < n; ++i)
            datos[i] = otro.datos[i];

        return *this;
    }

    void set(int posicion, int valor) {
        datos[posicion] = valor;
    }

    int get(int posicion) const {
        return datos[posicion];
    }

    int tam() const {
        return n;
    }
};

#endif