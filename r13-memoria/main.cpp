#include "arreglo.h"
#include <iostream>

int main() {
    Arreglo a(3);
    a.set(0, 10);
    a.set(1, 20);
    a.set(2, 30);

    Arreglo b = a;
    b.set(0, 99);

    std::cout << "a[0]: " << a.get(0) << "\n";
    std::cout << "b[0]: " << b.get(0) << "\n";
    std::cout << "Tamano: " << b.tam() << "\n";

    Arreglo c(1);
    c = a;
    c.set(1, 88);

    std::cout << "a[1]: " << a.get(1) << "\n";
    std::cout << "c[1]: " << c.get(1) << "\n";

    return 0;
}