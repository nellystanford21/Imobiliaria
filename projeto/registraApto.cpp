#include "registraApto.hpp"

registraApto::registraApto(){

}

void registraApto::setTituloAnuncio(string titulo){
    this -> tituloAnuncio = titulo;
}

void registraApto::setNumeroQuartos(int qtdQuartos){
    this -> numeroQuartos = qtdQuartos;
}

void registraApto::setVagasGaragem(int qtdVagas){
    this -> vagasGaragem = qtdVagas;
}

void registraApto::setAndar(int andar){
    this -> andar = andar;
}

void registraApto::setArea(float area){
    this -> area = area;
}

void registraApto::setValorCondominio(float condominio){
    this -> valorCondominio = condominio;
}

string registraApto::getTituloAnuncio(){
    return tituloAnuncio;
}

int registraApto::getNumeroQuartos(){
    return numeroQuartos;
}

int registraApto::getVagasGaragem(){
    return vagasGaragem;
}

int registraApto::getAndar(){
    return andar;
}

float registraApto::getArea(){
    return area;
}

float registraApto::getValorCondominio(){
    return valorCondominio;
}