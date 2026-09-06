#include <string>

class Reserva {

private:
    std::string sala;
    int personas;
    int horaInicio;
    int horafin;

public:
    bool establecer(const std::string& s, int p, int inicio, int fin){
        if (s == "" || p < 1 || p > 20 ||
        inicio < 0 || inicio >= fin || fin > 23)
        return false;

    sala = s;
    personas = p;
    horaInicio = inicio;
    horafin = fin;
    return true;
    }
};