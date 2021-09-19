#include <iostream>
#include "remove.hpp"
#include "includes.hpp"

Remove::Remove(){

}

void Remove::printCasa(const vector <registraCasa*> casa){

    for(int i = 0; i < casa.size(); i++){
        cout << i+1 << ": " << casa[i] -> getTituloAnuncio() << endl;
    }

    cout << "Indique o número de qual das casas você deseja remover: " << endl;
}

void Remove::printAptos(const vector <registraApto*> apto){
    for(int i = 0; i < apto.size(); i++){
        cout << i+1 << ": " << apto[i] -> getTituloAnuncio() << endl;
    }

    cout << "Indique o número de qual dos apartamentos você deseja remover: " << endl;
}

void Remove::printTerrenos(const vector <registraTerreno*> terreno){
    for(int i = 0; i < terreno.size(); i++){
        cout << i+1 << ": " << terreno[i] -> getTituloAnuncio() << endl;
    }
    
    cout << "Indique o número de qual dos terrenos você deseja remover: " << endl;
}

void Remove::removeCasa( vector <registraCasa*> *casa, int num){
    casa -> erase(casa -> begin() + num - 1);

/*     for(int i = 0; i < casa -> size(); i++){
        cout << i+1 << ": " << casa[i] -> getTituloAnuncio() << endl;
    }
 */ 
    cout << "Removido com sucesso!" << endl;
    cout << "Precione enter para continuar. . ." << endl;
    cin.ignore();
    getchar();
}

void Remove::removeApto( vector <registraApto*> *apto, int num){
    apto -> erase(apto -> begin() + num - 1);
   
    cout << "Removido com sucesso!" << endl;
    cout << "Precione enter para continuar. . ." << endl;
    cin.ignore();
    getchar();
}

void Remove::removeTerreno( vector <registraTerreno*> *terreno, int num){
    terreno -> erase (terreno -> begin() + num - 1);
   
    cout << "Removido com sucesso!" << endl;
    cout << "Precione enter para continuar. . ." << endl;
    cin.ignore();
    getchar();
} 