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
    
    int op;

    Menu menu;
    menu.bvMenu();

    while(op){
        menu.mainMenu();
        cin >> op;
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
                    default:
                        system(CLEAR);
                        cout << "Unknown menu command" << endl;
                        sleep(3);
                }   
                break;
            case 2:
                int op3;

                Consulta *consulta = new Consulta();

                system(CLEAR);
                menu.consultaMenu();
                
                cin >> op3;

                switch(op3){
                    case 1:
                        system(CLEAR);
                        consulta ->consultaCasa();
                        break;
                    case 2:
                        system(CLEAR);
                        consulta ->consultaApto();
                        break;
                    case 3:
                        system(CLEAR);
                        consulta ->consultaTerreno();
                        break;
                    default:
                        system(CLEAR);
                        cout << "Unknown menu command" << endl;
                        sleep(3);
                }
                
                break;
            //case 3:
                //remover imovel
                //break;
        }
    }

    return 0; 
}