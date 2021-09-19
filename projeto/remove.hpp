#pragma once
#include "includes.hpp"

class Remove{
    public:
        Remove();

        void printCasa(const vector <registraCasa*> casa);
        void printAptos(const vector <registraApto*> apto);
        void printTerrenos(const vector <registraTerreno*> terreno);

        void removeCasa(vector <registraCasa*> *casa, int num);
        void removeApto(vector <registraApto*> *apto, int num);
        void removeTerreno(vector <registraTerreno*> *terreno, int num);

};