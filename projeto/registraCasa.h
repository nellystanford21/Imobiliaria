#pragma once 
#include <string>

using namespace std;

class registraCasa {
    private:
        string tituloAnuncio;
        int numeroQuartos;
        int numeroPavimentos;
        float areaTerreno;
        float areaConstruida;

    public:
        void cadastraCasa();
}; 
