#pragma once 
#include <string>
#include <iostream>

using namespace std;

class registraTerreno {
    private:
        string tituloAnuncio;
        float area;

    public:
        string getTituloAnuncio();
        float getArea();

        string setTituloAnuncio(string titulo);
        float setArea(float a);
};
