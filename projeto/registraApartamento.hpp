#pragma once 
#include <string>
#include <iostream>

using namespace std;

class registraApartamento {
    private:
        string tituloAnuncio;
        string posicao;
        int numeroQuartos;
        int vagasGaragem;
        int andar;
        float area;
        float valorCondominio;

    public:
        string getTituloAnuncio();
        string getPosicao();
        int getNumeroQuartos();
        int getVagasGaragem();
        int getAndar();
        float getArea();
        float getValorCondominio();

        string setTituloAnuncio();
        string setPosicao();
        int setNumeroQuartos();
        int setVagasGaragem();
        int setAndar();
        float setArea();
        float setValorCondominio();

};
