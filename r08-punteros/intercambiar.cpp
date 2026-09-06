#include <iostream>

void intercambiar1(int a, int b) {
    int temporal = a;
    a = b;
    b = temporal;
}

void intercambiar2(int* a, int* b) {
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

void intercambiar3(int& a, int& b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int main() {
    int x = 1;
    int y = 2;

    intercambiar1(x, y);
    std::cout << x << ' ' << y << '\n';

    x = 1;
    y = 2;
    intercambiar2(&x, &y);
    std::cout << x << ' ' << y << '\n';

    x = 1;
    y = 2;
    intercambiar3(x, y);
    std::cout << x << ' ' << y << '\n';

    return 0;
}