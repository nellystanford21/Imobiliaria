#pragma once

#include "includes.hpp"

class Consulta{
    public:
        Consulta();

        void consultaCasa(const vector <registraCasa*> casa);
        void consultaApto(const vector <registraApto*> apto);
        void consultaTerreno(const vector <registraTerreno*> terreno);
};