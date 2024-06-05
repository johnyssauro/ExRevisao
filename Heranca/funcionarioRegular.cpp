#include "funcionarioRegular.hpp"
#include <string>

using std::string;

// Construtor padrão

FuncionarioRegular::FuncionarioRegular(string nome, int ID):
Funcionario(nome, ID)
{

}

double FuncionarioRegular::calcularSalarioTotal(){

    return this->salarioBase;

}
