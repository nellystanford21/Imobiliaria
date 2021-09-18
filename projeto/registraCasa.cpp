#include "registraCasa.hpp"

registraCasa::registraCasa(){
    
}

void registraCasa::setTituloAnuncio(string titulo) {
    this -> tituloAnuncio = titulo;
}

void registraCasa::setNumeroQuartos(int quartos) {
    numeroQuartos = quartos;
}

void registraCasa::setAreaCasa(float areaCasa) {
    this -> areaCasa = areaCasa;
}

string registraCasa::getTituloAnuncio() {
    return tituloAnuncio;
}

int registraCasa::getNumeroQuartos() {
    return numeroQuartos;
}

float registraCasa::getAreaCasa() {
    return areaCasa;
}