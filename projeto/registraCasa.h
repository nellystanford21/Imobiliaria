#pragma once 
#include <string>
#include <iostream>

using namespace std;

class registraCasa {
    private:
        string tituloAnuncio;
        int numeroQuartos;
        int numeroPavimentos;
        float areaTerreno;
        float areaConstruida;

    public:
        string getTituloAnuncio();
        int getNumeroQuartos();
        int getNumeroPavimentos();
        float getAreaTerreno();
        float getAreaConstruida();

        string setTituloAnuncio(string titulo);
        int setNumeroQuartos(int quartos);
        int setNumeroPavimentos(int pavimentos);
        float setAreaTerreno(float areaT);
        float setAreaConstruida(float areaC);

};
