#pragma once 
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class registraCasa {
    private:
        string tituloAnuncio;
        int numeroQuartos;
        float areaCasa;

    public:
        registraCasa();
        
        string getTituloAnuncio();
        int getNumeroQuartos();
        float getAreaCasa();

        void setTituloAnuncio(string titulo);
        void setNumeroQuartos(int quartos);
        void setAreaCasa(float areaCasa);
};