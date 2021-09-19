#include "menu.hpp"
#include "includes.hpp"
#include <iostream>

Menu::Menu(){

}

void Menu::bvMenu(){
    for(int i = 3; i > 0; i--){
        cout << "-------------------------------------------------------------------" << endl;
        cout << "                 Bem-VindE a imobiliaria Uc Ad Udac                " << endl;  
        cout << "-------------------------------------------------------------------" << endl;
        cout << "Timer: " << i << endl;
        sleep(3);
        system(CLEAR);
    }
}

void Menu::byeMenu(){
    cout << "-------------------------------------------------------------------" << endl;
    cout << "         a imobiliaria Uc Ad Udac agradece sua preferencia!        " << endl;
    cout << "-------------------------------------------------------------------\n" << endl;


    cout << "Ass: Marquito =)\n";
}

void Menu::mainMenu(){
    system(CLEAR);
    printf("*** Selecione a opçao desejada *** \n\n"
                "\n1 - Cadastrar imovel"
                "\n2 - Consultar imovel"
                "\n3 - Remover imovel"
                "\n0 - Sair\n");
}

void Menu::cadastroMenu(){
    cout << "Selecione o tipo de imovel que você deseja cadastrar:\n" << endl;

    cout << "1 - Casa" << endl;
    cout << "2 - Apartamento" << endl;
    cout << "3 - Terreno" << endl;
    cout << "0 - Volta ao menu principal" << endl;
}

void Menu::cadastroCasaMenu(vector <registraCasa*> *casa){
    registraCasa *p = new registraCasa();

    string tituloAnuncio;
    int numeroQuartos;
    float areaCasa;

    cout << "Digite o titulo do anuncio: " ;
    getline(cin, tituloAnuncio);
    //cin.ignore();

    cout << "Digite o numero de quartos:  " ;
    cin >> numeroQuartos;

    cout << "Informe a area da casa (metros quadrados): " ;
    cin >> areaCasa;

    //passando os dados para os elementos private da classe registraCasa

    p -> setTituloAnuncio(tituloAnuncio);
    p -> setNumeroQuartos(numeroQuartos);
    p -> setAreaCasa(areaCasa);

    casa->push_back(p);

   /*  for(int i = 0; i < casa->size(); i++){
        cout << casa[i]->getTituloAnuncio() << endl;
        cout << casa[i]->getAreaCasa() << endl;
        cout << casa[i]->getNumeroQuartos() << endl;
    }
    sleep(4); */
}

void Menu::cadastroAptoMenu(vector <registraApto*> *apto){
    string tituloApto;
    int qtdQuartosApto;
    int vagasGaragem;
    int andar;
    float area;
    float valorCondominio;

    registraApto *p = new registraApto();
    
    cout << "Digite o titulo do anuncio: ";
    getline(cin, tituloApto);
    //cin.ignore();

    cout << "Digite o numero de quartos: " ;
    cin >> qtdQuartosApto;

    cout << "Digite o numero de garagens: " ;
    cin >> vagasGaragem;
    
    cout << "Digite o andar do apartamento: " ;
    cin >> andar;

    cout << "Digite a area do apartamento: " ;
    cin >> area;

    cout << "Digite o valor do condominio: " ;
    cin >> valorCondominio;

    p -> setTituloAnuncio(tituloApto);
    p -> setNumeroQuartos(qtdQuartosApto);
    p -> setVagasGaragem(vagasGaragem);
    p -> setAndar(andar);
    p -> setArea(area);
    p -> setValorCondominio(valorCondominio);

    apto -> push_back(p);
}

void Menu::cadastroTerrenoMenu(vector <registraTerreno*> *terreno){
    string tituloAnuncioTerreno;
    float areaTerreno;

    registraTerreno *p = new registraTerreno();

    cout << "Digite o titulo do anuncio: ";
    getline(cin, tituloAnuncioTerreno);
    //cin.ignore();

    cout << "Digite a area do terreno: ";
    cin >> areaTerreno;

    p -> setTituloAnuncio(tituloAnuncioTerreno);
    p -> setArea(areaTerreno);

    terreno -> push_back(p);
}

void Menu::consultaMenu(){
    cout << "---------------- Bem-VindE ao menu de consulta ----------------\n" << endl;

    cout << "Selecione o tipo de imovel que você deseja cadastrar:\n" << endl;

    cout << "1 - Casa" << endl;
    cout << "2 - Apartamento" << endl;
    cout << "3 - Terreno" << endl;
    cout << "0 - Volta ao menu principal" << endl;
}

void Menu::removeMenu(){
    cout << "---------------- Bem-VindE a remocao de item ----------------\n" << endl;

    cout << "Selecione o tipo de imovel que você deseja remover da lista:\n" << endl;

    cout << "1 - Casa" << endl;
    cout << "2 - Apartamento" << endl;
    cout << "3 - Terreno" << endl;
    cout << "0 - Voltar ao menu principal" << endl;
}