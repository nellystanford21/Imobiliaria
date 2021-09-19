#include <iostream>
#include "remove.hpp"
#include "includes.hpp"

Remove::Remove(){

}

void Remove::printCasa(const vector <registraCasa*> casa){

    for(int i = 0; i < casa.size(); i++){
        cout << i+1 << ": " << i <<": " << casa[i] -> getTituloAnuncio() << endl;
    }

    cout << "Indique o número de qual das casas você deseja remover: " << endl;
}

void Remove::printAptos(const vector <registraApto*> apto){
    for(int i = 0; i < apto.size(); i++){
        cout << i+1 << ": " << i << ": " << apto[i] -> getTituloAnuncio() << endl;
    }

    cout << "Indique o número de qual dos apartamentos você deseja remover: " << endl;
    
}

void Remove::printTerrenos(const vector <registraTerreno*> terreno){
    for(int i = 0; i < terreno.size(); i++){
        cout << i+1 << ": " << i << ": " << terreno[i] -> getTituloAnuncio() << endl;
    }
    
    cout << "Indique o número de qual dos terrenos você deseja remover: " << endl;
    
}

//https://www.includehelp.com/stl/erase-elements-in-cpp-vector-using-vector-erase.aspx

void Remove::removeCasa( vector <registraCasa*> *casa, int num){
    cout << "ok\n";
   
}

void Remove::removeApto( vector <registraApto*> *apto, int num){
    cout << "ok\n";
    
}

void Remove::removeTerreno( vector <registraTerreno*> *terreno, int num){
    cout << "ok\n";
    
} 