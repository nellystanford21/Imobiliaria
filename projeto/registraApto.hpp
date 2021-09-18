#pragma once 
#include <string>
#include <iostream>

using namespace std;

class registraApto{
    private:
        string tituloAnuncio;
        int numeroQuartos;
        int vagasGaragem;
        int andar;
        float area;
        float valorCondominio;

    public:
        registraApto();
        
        string getTituloAnuncio();
        int getNumeroQuartos();
        int getVagasGaragem();
        int getAndar();
        float getArea();
        float getValorCondominio();

        void setTituloAnuncio(string titulo);
        void setNumeroQuartos(int qtdQuartos);
        void setVagasGaragem(int qtdVagas);
        void setAndar(int andar);
        void setArea(float area);
        void setValorCondominio(float condominio);

};
