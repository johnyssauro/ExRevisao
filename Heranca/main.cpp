#include "funcionario.hpp"
#include "funcionarioRegular.hpp"
#include "gerente.hpp"
#include "estagiario.hpp"

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;

int main(){

    FuncionarioRegular *FR1 = new FuncionarioRegular("Joãozin", 1);
    Gerente *GE1 = new Gerente("Pedrin", 2, 200.00);
    Estagiario *ES1 = new Estagiario("Mariazinha", 3);

    FuncionarioRegular *FR2 = new FuncionarioRegular("Renatin", 4);
    Gerente *GE2 = new Gerente("Aninha", 5, 400.00);
    Estagiario *ES2 = new Estagiario("Paulinha", 6);

    vector<Funcionario*> funcionarios;

    funcionarios.push_back(FR1);
    funcionarios.push_back(GE1);
    funcionarios.push_back(ES1);
    funcionarios.push_back(FR2);
    funcionarios.push_back(GE2);
    funcionarios.push_back(ES2);

    int cont = 0;

    for(auto funcionario : funcionarios){

        cout << "Funcionario " << cont << ": " << funcionario->calcularSalarioTotal() << std::endl;

        cont++;
    }

    return 0;

}
