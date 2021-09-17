#include "registraCasa.hpp"

void registraCasa::setTituloAnuncio(string titulo) {
    tituloAnuncio = titulo;
}

void registraCasa::setNumeroQuartos(int quartos) {
    numeroQuartos = quartos;
}

void registraCasa::setNumeroPavimentos(int pavimentos) {
    numeroPavimentos = pavimentos;

}

void registraCasa::setAreaTerreno(float areaT){
    areaTerreno = areaT;
}

void registraCasa::setAreaConstruida(float areaC) {
    areaConstruida = areaC;
}

string registraCasa::getTituloAnuncio() {
    return tituloAnuncio;
}

int registraCasa::getNumeroQuartos() {
    return numeroQuartos;
}

int registraCasa::getNumeroPavimentos() {
    return numeroPavimentos;
}

float registraCasa::getAreaTerreno() {
    return areaTerreno;
}

float registraCasa::getAreaConstruida() {
    return areaConstruida;
}
