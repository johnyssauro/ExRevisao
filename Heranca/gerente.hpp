#ifndef GERENTE
#define GERENTE

#include "funcionario.hpp"

class Gerente : public Funcionario{

    private:
        double bonusAnual;

    public:
        Gerente(string nome, int ID, double bonusAnual);
        double calcularSalarioTotal() override;

};

#endif
