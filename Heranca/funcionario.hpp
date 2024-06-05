#ifndef FUNC
#define FUNC

#include <string>

using std::string;

class Funcionario {

    protected:
        string nome;
        int ID;
        double salarioBase;

    public:
        Funcionario(string nome, int ID);
        virtual double calcularSalarioTotal() = 0;
        
};

#endif