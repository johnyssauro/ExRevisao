#ifndef GRAFO
#define GRAFO

#include <vector>

using std::vector;

typedef vector<int> Vec;
typedef vector<Vec> Mat;

class Grafo {

    private:

        int size;
        vector<vector<int>> matriz;

    public:

        Grafo(int size);
        void pareandoVertices();
        void todaVizinhanca();

        //As classes exigidas:

        //Determina se dois vértices são vizinhos:
        bool saoVizinhos(int v1, int v2);

        //Determina todos os vizinhos de um vértice V:
        void vizinhancaDeV(int v);


};

#endif

