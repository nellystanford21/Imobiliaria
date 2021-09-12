#pragma once 
#include <string>

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
        void cadastraApartamento();
};
