#include "estagiario.hpp"
#include "funcionario.hpp"

// Construtor padrão

Estagiario::Estagiario(string nome, int ID):
Funcionario(nome, ID)
{

    this->salarioFixo = 1200;

}

double Estagiario::calcularSalarioTotal(){

    return this->salarioFixo;

}
