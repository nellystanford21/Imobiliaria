#include "registraTerreno.hpp"

void registraTerreno::setTituloAnuncio(string titulo) {
    tituloAnuncio = titulo;
}

void registraTerreno::setArea(float a) {
    area = a;
}

string registraTerreno::getTituloAnuncio() {
    return tituloAnuncio;
}

float registraTerreno::getArea() {
    return area;
}
