#include "grafo.hpp"
#include <iostream>

using std::cout;

int main() {

    Grafo* g = new Grafo(5);

    g->pareandoVertices();
    cout << g->saoVizinhos(2,4) << "(2,4)" << std::endl;
    cout << g->saoVizinhos(1,3) << "(1,3)" << std::endl;
    cout << g->saoVizinhos(0,0) << "(0,0)" << std::endl;
    g->todaVizinhanca();
    g->vizinhancaDeV(3);

    return 0;

}
