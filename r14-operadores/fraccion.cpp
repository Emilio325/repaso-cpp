#include <iostream>
#include <numeric>

class Fraccion {
private:
    int num_;
    int den_;

    void reducir() {
        int divisor = std::gcd(num_, den_);
        num_ /= divisor;
        den_ /= divisor;

        if (den_ < 0) {
            num_ = -num_;
            den_ = -den_;
        }
    }

public:
    Fraccion(int n = 0, int d = 1) : num_(n), den_(d) {
        reducir();
    }

    Fraccion operator+(const Fraccion& o) const {
        return Fraccion(num_ * o.den_ + o.num_ * den_,
                        den_ * o.den_);
    }

    Fraccion operator*(const Fraccion& o) const {
        return Fraccion(num_ * o.num_, den_ * o.den_);
    }

    bool operator==(const Fraccion& o) const {
        return num_ * o.den_ == o.num_ * den_;
    }

    bool operator<(const Fraccion& o) const {
        return num_ * o.den_ < o.num_ * den_;
    }

    friend std::ostream& operator<<(std::ostream& os,
                                    const Fraccion& f) {
        return os << f.num_ << '/' << f.den_;
    }
};

int main() {
    std::cout << Fraccion(1, 2) + Fraccion(1, 3) << "\n";
    std::cout << Fraccion(6, -8) << "\n";
}