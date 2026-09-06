#ifndef ARREGLO_H
#define ARREGLO_H

class Arreglo {
private:
    int n;
    int* datos;

public:
    Arreglo(int n) : n(n), datos(new int[n]) {
    }

    ~Arreglo() {
        delete[] datos;
    }

    Arreglo(const Arreglo& otro)
        : n(otro.n), datos(new int[otro.n]) {
        for (int i = 0; i < n; i++)
            datos[i] = otro.datos[i];
    }

    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) {
            int* nuevosDatos = new int[otro.n];

            for (int i = 0; i < otro.n; i++)
                nuevosDatos[i] = otro.datos[i];

            delete[] datos;
            datos = nuevosDatos;
            n = otro.n;
        }

        return *this;
    }
};

#endif