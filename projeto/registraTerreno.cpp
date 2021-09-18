#include "registraTerreno.hpp"

registraTerreno::registraTerreno(){

}

void registraTerreno::setTituloAnuncio(string titulo) {
    this -> tituloAnuncio = titulo;
}

void registraTerreno::setArea(float area) {
    this -> area = area;
}

string registraTerreno::getTituloAnuncio() {
    return tituloAnuncio;
}

float registraTerreno::getArea() {
    return area;
}