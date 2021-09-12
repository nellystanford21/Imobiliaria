#include <iostream>
#include "includes.h"
#define NUMERO_MAXIMO_REGISTRO 10

using namespace std;

// criar vetor com as classes de registro, 
// exemplo: registraApartamento apartamento[i];

int main () {

    int escolhaMenu;
    int tipoDeImovel;
    registraApartamento apartamento[NUMERO_MAXIMO_REGISTRO];
    registraCasa casa[NUMERO_MAXIMO_REGISTRO];
    registraTerreno terreno[NUMERO_MAXIMO_REGISTRO];

    //itens casa:
    string tituloAnuncio;
    int numeroQuartos;
    int numeroPavimentos;
    float areaTerreno;
    float areaConstruida;
    int i = 0;
    ////////////////////////////////////////////////////////////

    //itens apartamento:
    string tituloAnuncioApartamento;
    int numeroQuartosApartamento;
    float area;
    string posicao;
    int andar;
    float valorCondominio;
    int vagasGaragem;
    int j = 0;
    ////////////////////////////////////////////////////////////

    //itens terreno:
    string tituloAnuncioTerreno;
    float areaTerrenoTerreno;
    int k = 0;
    ////////////////////////////////////////////////////////////

    void ExibeMenu();
    cin >> escolhaMenu;

    // add no default dps de acabar o switch case
    /*while(escolhaMenu > 11) {
        cout << "Opcao invalida" << endl;
        void ExibeMenu();
    }*/

    while(escolhaMenu != 11) {
        switch(escolhaMenu) {
        case 1:
            cout << "Selecione o tipo de imovel que você deseja cadastrar:" << endl;
            cout << "1 - Casa" << endl;
            cout << "2 - Apartamento" << endl;
            cout << "3 - Terreno" << endl;
            cin >> tipoDeImovel;

            if(tipoDeImovel == 1) {
                cout << "Digite o titulo do anuncio:" << endl;
                cin >> tituloAnuncio;

                cout << "Digite o numero de quartos:" << endl;
                cin >> numeroQuartos;

                cout << "Digite o numero de pavimentos:" << endl;
                cin >> numeroPavimentos;

                cout << "Digite a area do terreno:" << endl;
                cin >> areaTerreno;

                cout << "Digite a area construida:" << endl;
                cin >> areaConstruida;

            //passando os dados para os elementos private da classe registraCasa
                casa[i].setTituloAnuncio(tituloAnuncio);
                casa[i].setNumeroQuartos(numeroQuartos);
                casa[i].setNumeroPavimentos(numeroPavimentos);
                casa[i].setAreaTerreno(areaTerreno);
                casa[i].setAreaConstruida(areaConstruida);

            //incremento para quando for registrar outra casa ir para o próximo item do vetor
                i++;

            } else if (tipoDeImovel == 2) {

                cout << "Digite o titulo do anuncio:" << endl;
                cin >> tituloAnuncioApartamento;

                cout << "Digite o numero de quartos:" << endl;
                cin >> numeroQuartosApartamento;

                cout << "Digite a area do apartamento:" << endl;
                cin >> area;

                cout << "Digite a posicao do apartamento:" << endl;
                cin >> posicao;

                cout << "Digite o andar do apartamento:" << endl;
                cin >> andar;

                cout << "Digite o valor do condominio:" << endl;
                cin >> valorCondominio;

                cout << "Digite o numero de garagens:" << endl;
                cin >> vagasGaragem;

            //passando os dados para os elementos private da classe registraApartamento
            //AINDA TEM QUE DEFINIR SETS E GETS NO REGISTRAAPARTAMENTO.CPP
                //apartamento[j].setTituloAnuncio(tituloAnuncioApartamento);


            } else if (tipoDeImovel == 3) {

                cout << "Digite o titulo do anuncio:" << endl;
                cin >> tituloAnuncioTerreno;

                cout << "Digite a area do terreno:" << endl;
                cin >> areaTerrenoTerreno;

            //passando os dados para os elementos private da classe registraTerreno
                terreno[k].setTituloAnuncio(tituloAnuncioTerreno);
                terreno[k].setArea(areaTerrenoTerreno);
            
            //incremento para quando for registrar outro terreno ir para o próximo item do vetor
            k++;

            }
            break;
        
        //case 2:
            //nesse caso, será feita a consulta de imovel
    }

    void ExibeMenu();
    }

    return 0;
}
