#ifndef FUNCREG
#define FUNCREG

#include <string>
#include "funcionario.hpp"

using std::string;

class FuncionarioRegular : public Funcionario{

    public:
        FuncionarioRegular(string nome, int ID);
        double calcularSalarioTotal() override;


};

#endif