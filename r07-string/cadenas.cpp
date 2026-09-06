#include <string>

int contarPalabras(const std::string& s) {
    int palabras = 0;
    bool dentro = false;

    for (std::string::size_type i = 0; i < s.size(); i++) {
        if (s[i] != ' ' && !dentro) {
            palabras++;
            dentro = true;
        } else if (s[i] == ' ') {
            dentro = false;
        }
    }

    return palabras;
}

std::string voltear(const std::string& s) {
    std::string resultado = "";

   for (std::string::size_type i = s.size(); i > 0; i--) {
        resultado += s[i - 1];
    }

    return resultado;
}