#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre_;

public:
    Persona(const std::string& nombre) : nombre_(nombre) {
        std::cout << "Persona\n";
    }

    ~Persona() {
        std::cout << "~Persona\n";
    }
};

class Empleado : public Persona {
private:
    int sueldo_;

public:
    Empleado(const std::string& nombre, int sueldo)
        : Persona(nombre), sueldo_(sueldo) {
        std::cout << "Empleado\n";
    }

    ~Empleado() {
        std::cout << "~Empleado\n";
    }
};

class Gerente : public Empleado {
private:
    int personasACargo_;

public:
    Gerente(const std::string& nombre, int sueldo, int personasACargo)
        : Empleado(nombre, sueldo), personasACargo_(personasACargo) {
        std::cout << "Gerente\n";
    }

    ~Gerente() {
        std::cout << "~Gerente\n";
    }
};

int main() {
    Gerente g("Ana", 1000, 5);
    return 0;
}

//Persona
//Empleado
//Gerente
//~Gerente
//~Empleado
//~Persona