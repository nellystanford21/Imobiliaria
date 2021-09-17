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

        void setTituloAnuncio(string titulo);
        void setArea(float a);
};
