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

    Consulta *consulta;
    consulta = NULL;
    Remove *remove;
    remove = NULL;

    while(op){
        menu.mainMenu();
        cin >> op;
        switch(op){
            case 0:
                break;
            case 1:
                int op2;

                system(CLEAR);
                menu.cadastroMenu();

                cin >> op2;
                cin.ignore();

                switch(op2){
                    case 1:
                        system(CLEAR);
                       
                        menu.cadastroCasaMenu(&casa);
                        break;
                    case 2:
                        system(CLEAR);
                       
                        menu.cadastroAptoMenu(&apto);
                        break;
                    case 3:
                        system(CLEAR);
                        
                        menu.cadastroTerrenoMenu(&terreno);
                        break;
                    case 0:
                        break;
                    default:
                        system(CLEAR);
                        
                        cout << "Unknown menu command" << endl;
                        sleep(3);
                }   
                break;
            case 2:
                int op3;

                consulta = new Consulta();

                system(CLEAR);
                menu.consultaMenu();
                
                cin >> op3;

                switch(op3){
                    case 1:
                        system(CLEAR);
                       
                        consulta ->consultaCasa(casa);
                        break;
                    case 2:
                        system(CLEAR);
                       
                        consulta ->consultaApto(apto);
                        break;
                    case 3:
                        system(CLEAR);
                       
                        consulta ->consultaTerreno(terreno);
                        break;
                    case 0:
                        break;
                    default:
                        system(CLEAR);
                       
                        cout << "Unknown menu command" << endl;
                        sleep(3);
                }
                break;
            case 3:
                int op4, num;

                remove = new Remove();

                system(CLEAR);
                menu.removeMenu();

                cin >> op4;

                switch(op4) {
                    case 1:
                        system(CLEAR);

                        remove -> printCasa(casa);
                        cin >> num;

                        remove -> removeCasa(&casa, num);
                        break;
                    case 2:
                        system(CLEAR);

                        remove -> printAptos(apto);
                        cin >> num;

                        remove ->removeApto(&apto, num);
                        break;
                    case 3:
                        system(CLEAR);

                        remove -> printTerrenos(terreno);
                        cin >> num;
                        
                        remove -> removeTerreno(&terreno, num);
                        break;
                    case 0:
                        break;
                    default:
                        system(CLEAR);
                        
                        cout << "Unknown menu command opa" << endl;
                        sleep(3);
                }
                break;
            default:
                system(CLEAR);
                cout << "Unknown menu command aqui" << endl;
                sleep(3);
        }
    }

    system(CLEAR);
    menu.byeMenu();

    return 0; 
}