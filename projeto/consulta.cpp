#include "consulta.hpp"
#include <iostream>



Consulta::Consulta(){

}

void Consulta::consultaCasa(const vector <registraCasa*> casa){
    for(int i = 0; i < casa.size(); i++){
        cout << i+1 << ": " << "\nTitulo: " + casa[i] -> getTituloAnuncio() << endl;
        cout << "Quartos: " << casa[i] -> getNumeroQuartos() << endl;
        cout << "Area total: " << casa[i] -> getAreaCasa() << "m^2" << endl;
        puts("");
    }

    cout << "Precione enter para continuar. . ." << endl;

    cin.ignore();
    getchar();
}

void Consulta::consultaApto(const vector <registraApto*> apto){
    for(int i = 0; i < apto.size(); i++){
        cout << i+1 << ": " << "\nTitulo: " + apto[i] -> getTituloAnuncio() << endl;
        cout << "Quartos: " << apto[i] -> getNumeroQuartos() << endl;
        cout << "Area total: " << apto[i] -> getArea() << "m^2" << endl;
        cout << "Andar: " << apto[i] -> getAndar() << endl;
        cout << "Vagas garagem: " << apto[i] -> getVagasGaragem() << endl;
        cout << "Condominio: R$" << apto[i] -> getValorCondominio() << endl;
        puts("");
    }

    cout << "Precione enter para continuar. . ." << endl;

    cin.ignore();
    getchar();
}

void Consulta::consultaTerreno(const vector <registraTerreno*> terreno){
    for(int i = 0; i < terreno.size(); i++){
        cout << i+1 << ": " << "\nTitulo: " + terreno[i] -> getTituloAnuncio() << endl;
        cout << "Area total: " << terreno[i] -> getArea() << "m^2" << endl;
        puts("");
    }

    cout << "Precione enter para continuar. . ." << endl;

    cin.ignore();
    getchar();
}