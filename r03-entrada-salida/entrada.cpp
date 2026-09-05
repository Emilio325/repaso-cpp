#include <iostream>
#include <limits>

int leerEnRango(const char mensaje[], int lo, int hi) {
    int numero;

    while (true) {
        std::cout << mensaje;

        // Detecta si el usuario solamente presionó Enter
        if (std::cin.peek() == '\n') {
            std::cin.ignore();
            std::cout << "Entrada invalida.\n";
            continue;
        }

        std::cin >> numero;

        // Detecta letras como "abc"
        if (std::cin.fail()) {
            std::cin.clear();

            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "Debes escribir un numero entero.\n";
        }

        // Detecta cosas como "3.7" o "42 basura"
        else if (std::cin.peek() != '\n') {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "Escribe solamente un entero.\n";
        }

        // Comprueba si está entre 1 y 100
        else if (numero < lo || numero > hi) {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "El numero esta fuera del rango.\n";
        }

        // Si todo está bien, devuelve el número
        else {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            return numero;
        }
    }
}

int main() {
    int resultado = leerEnRango(
        "Escribe un entero entre 1 y 100: ",
        1,
        100
    );

    std::cout << "Numero aceptado: " << resultado << '\n';

    return 0;
}