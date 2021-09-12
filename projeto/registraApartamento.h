#pragma once 
#include <string>
#include <iostream>

using namespace std;

class registraApartamento {
    private:
        string tituloAnuncio;
        int numeroQuartos;
        float area;
        string posicao;
        int andar;
        float valorCondominio;
        int vagasGaragem;

    public:
        string getTituloAnuncio();
        int getNumeroQuartos();
        float getArea();
        string getPosicao();
        int getAndar();
        float getValorCondominio();
        int getVagasGaragem();

        string setTituloAnuncio();
        int setNumeroQuartos();
        float setArea();
        string setPosicao();
        int setAndar();
        float setValorCondominio();
        int setVagasGaragem();

};
