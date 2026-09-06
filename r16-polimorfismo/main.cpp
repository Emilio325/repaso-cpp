#include <iostream>
#include <vector>

class Figura {
public:
    virtual double area() const = 0;
    virtual const char* nombre() const = 0;
    virtual ~Figura() = default;
};

class Circulo : public Figura {
    double radio_;

public:
    Circulo(double radio) : radio_(radio) {}

    double area() const override {
        return 3.1416 * radio_ * radio_;
    }

    const char* nombre() const override {
        return "Circulo";
    }
};

class Rectangulo : public Figura {
    double base_, altura_;

public:
    Rectangulo(double base, double altura)
        : base_(base), altura_(altura) {}

    double area() const override {
        return base_ * altura_;
    }

    const char* nombre() const override {
        return "Rectangulo";
    }
};

int main() {
    std::vector<Figura*> figs;
    figs.push_back(new Circulo(1.0));
    figs.push_back(new Rectangulo(3.0, 4.0));

    double total = 0.0;

    for (const Figura* f : figs) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }

    std::cout << "total: " << total << '\n';

    for (Figura* f : figs)
        delete f;
}