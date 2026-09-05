#include <iostream>

void pedirNotas(double notas[], int cantidad){
    for (int i = 0; i < cantidad; i++){
        std::cout << "Nota " << i + 1 <<": ";
        std::cin >> notas[i];
    }
}

double calcularPromedio(double notas[], int cantidad){
    double suma = 0;

    for (int i = 0; i < cantidad; i++){
        suma += notas[i];
    }

    return suma / cantidad;
}

bool aprueba(double prom){
    return prom >= 70;
}

int main() {
    double notas[3];

    pedirNotas(notas, 3);
    double prom = calcularPromedio(notas, 3);

    std::cout << "Promedio: " << prom << '\n';

    if (aprueba(prom))
        std::cout<< "Aprobado\n";
    else
        std::cout <<"Reprobado\n";
}