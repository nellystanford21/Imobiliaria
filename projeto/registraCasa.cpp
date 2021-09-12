#include "registraCasa.h"

string registraCasa::setTituloAnuncio(string titulo) {
    tituloAnuncio = titulo;
}

int registraCasa::setNumeroQuartos(int quartos) {
    numeroQuartos = quartos;
}

int registraCasa::setNumeroPavimentos(int pavimentos) {
    numeroPavimentos = pavimentos;

}

float registraCasa::setAreaTerreno(float areaT){
    areaTerreno = areaT;
}

float registraCasa::setAreaConstruida(float areaC) {
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
