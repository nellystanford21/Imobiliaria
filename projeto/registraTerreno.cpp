#include "registraTerreno.h"

string registraTerreno::setTituloAnuncio(string titulo) {
    tituloAnuncio = titulo;
}

float registraTerreno::setArea(float a) {
    area = a;
}

string registraTerreno::getTituloAnuncio() {
    return tituloAnuncio;
}

float registraTerreno::getArea() {
    return area;
}
