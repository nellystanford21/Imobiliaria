#include <bits/stdc++.h>
#include "includes.hpp"

using namespace std;

// >>>>>>>>>>>>>>>>>>>>>>>>>> ****DAR DELETE NOS PONTEIROS**** <<<<<<<<<<<<<<<<<<<<<<
vector <registraCasa* > casa;
vector <registraApto* > apto;
vector <registraTerreno* > terreno;
// >>>>>>>>>>>>>>>>>>>>>>>>>> ****DAR DELETE NOS PONTEIROS**** <<<<<<<<<<<<<<<<<<<<<<

// cadastrar imovel
// consultar imovel
// remover imovel

int main () {
    system(CLEAR);
    Menu menu;

    menu.bvMenu();

    int op;
    int tipoDeImovel;

    menu.mainMenu();
    cin >> op;

    while(op){
        switch(op){
            case 1:
                int op2;

                system(CLEAR);
                menu.cadastroMenu();

                cin >> op2;
                cin.ignore();

                switch(op2){
                    case 1:
                        menu.cadastroCasaMenu(&casa);
                        break;
                    case 2:
                        menu.cadastroAptoMenu(&apto);
                        break;
                    case 3:
                        menu.cadastroTerrenoMenu(&terreno);
                        break;
                }
                break;
            //case 2:
                //nesse caso, será feita a consulta de imovel
                //break;
            //case 3:
                //remover imovel
                //break;
        }
    }

    return 0; 
}