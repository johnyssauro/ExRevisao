#include "gerente.hpp"


Gerente::Gerente(string nome, int ID, double bonusAnual):
Funcionario(nome, ID)
{

    this->bonusAnual = bonusAnual;

}


double Gerente::calcularSalarioTotal(){

    return Funcionario::calcularSalarioTotal() + this->bonusAnual;

}