#ifndef EST
#define EST

#include "funcionario.hpp"

class Estagiario : public Funcionario{

    protected:
        double salarioFixo;

    public:
        Estagiario(string nome, int ID);
        double calcularSalarioTotal() override;

};

#endif