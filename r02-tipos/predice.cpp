#include <iostream>

int main(){
    std::cout << 7 / 2 << '\n';                 // 1
    std::cout << 7 / 2.0 << '\n';               // 2
    std::cout << 7 % 2 << '\n';                 // 3
    std::cout << static_cast<int>(3.99) << '\n'; // 4
    std::cout << (1 == 1.0) << '\n';            // 5
    unsigned int u = 3;
    std::cout << u - 5 << '\n';                 // 6

    return 0;
}

//predicciones
// 1- 3
// 2- 3.5
// 3- 1
// 4- 3
// 5- 1
// 6- Ni idea