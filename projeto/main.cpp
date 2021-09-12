#include <iostream>
#include "includes.h"

using namespace std;

int main () {

    int escolhaMenu;
    int tipoDeImovel;

    void ExibeMenu();
    cin >> escolhaMenu;

    // add no default dps de acabar o switch case
    while(escolhaMenu > 11) {
        cout << "Opcao invalida" << endl;
        void ExibeMenu();
    }

    while(escolhaMenu != 11) {
        switch(escolhaMenu) {
        case 1:
            cout << "Selecione o tipo de imovel que você deseja cadastrar:" << endl;
            cout << "1 - Casa" << endl;
            cout << "2 - Apartamento" << endl;
            cout << "3 - Terreno" << endl;
            cin >> tipoDeImovel;

            if(tipoDeImovel == 1) {

            } else if (tipoDeImovel == 2) {

            } else if (tipoDeImovel == 3) {

            }
            break;
        
        case 2:
            
    }

    void ExibeMenu();
    }

    return 0;
} 
