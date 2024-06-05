#include <vector>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "grafo.hpp"
 
using std::vector;
using std::cout;

Grafo::Grafo(int size) {

    this->size = size;

}

 
void Grafo::pareandoVertices(){
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for(int i = 0; i < this->size; i++){

        // Vetor temporário que guarda as linhas da matriz
        vector<int> temporario;

        for(int j =0; j < this->size; j++){

            if(i == j){

                // Diagonais iguais a zero (vértice não é vizinho dele mesmo)
                temporario.push_back(0);

            } else if(i < j) {
                
                // Valor 0 ou 1
                temporario.push_back(std::rand() % 2);

            } else {

                // Espelhando o vetor
                temporario.push_back(matriz[j][i]);

            }

        }

        // Guardando os valores do vetor temporario na matriz
        matriz.push_back(temporario);
    }

}

bool Grafo::saoVizinhos(int v1, int v2){

    cout << "saoVizinhos - Legenda: 0 == nao sao vizinhos; 1 == sao vizinhos" << std::endl;

    //se v1 é vizinho de v2
    if(this->matriz[v1][v2] == 1){

        return true;
        
    }

    return false;

}

void Grafo::todaVizinhanca(){

    cout << "todaVizinhanca - Legenda: 0 == nao sao vizinhos; 1 == sao vizinhos" << std::endl;

    for(int i = 0; i < this->size; i++){

        for(int j =0; j < this->size; j++){

            if(j < size-1) {

                cout << "\t" << matriz[i][j];

            } else {

                cout << "\t" << matriz[i][j]<< std::endl;

            }

        }

    }

}

void Grafo::vizinhancaDeV(int v){

    vector<int> vizinhos;

    for(int j = 0; j < this->size; j++){

        if(matriz[j][v] == 1){

            // Selecionando todos os vértices j vizinhos de v
            vizinhos.push_back(j);

        } 

    }

    cout << "TAMANHO " << size << std::endl;
    cout << "Vizinhos do vertice " << v << ":" << std::endl;

    for(int vertice : vizinhos){

        cout << vertice << "\t";

    }

}