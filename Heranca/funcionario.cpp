#include "funcionario.hpp"
#include <string>

using std::string;

// Construtor padrão


Funcionario::Funcionario(string nome, int ID)
{

    this->nome = nome;
    this->ID = ID;
    this->salarioBase = 3000.00;

}

// double Funcionario::calcularSalarioTotal(){

//     this->salarioBase = 3000.0;

//     return this->salarioBase;

// }