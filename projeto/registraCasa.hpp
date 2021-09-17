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

        void setTituloAnuncio(string titulo);
        void setNumeroQuartos(int quartos);
        void setNumeroPavimentos(int pavimentos);
        void setAreaTerreno(float areaT);
        void setAreaConstruida(float areaC);

};
