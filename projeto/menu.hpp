#pragma once
#include "includes.hpp"

class Menu{ 
    public:
        Menu();
        void bvMenu();
        void mainMenu();
        void cadastroMenu();
        void cadastroCasaMenu(vector <registraCasa*> *casa);
        void cadastroAptoMenu(vector <registraApto*> *apto);
        void cadastroTerrenoMenu(vector <registraTerreno*> *terreno);

        void consultaMenu();
};
