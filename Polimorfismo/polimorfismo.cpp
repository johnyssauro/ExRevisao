#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Veiculo { 
    
    protected:

        std::string marca;     
        std::string modelo;     
        int capacidade; // Capacidade de carga em toneladas  
    
    public:

        Veiculo(const std::string & marca, const std::string& modelo, int capacidade):
        marca(marca), modelo(modelo), capacidade(capacidade) 
        {

        }      
        
        virtual void exibirDados() const {         
        
            std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas\n";     
        
        } 

}; 


class Caminhao : public Veiculo 
{ 
    private:     
        
        int eixos;  
        
    public:     
    
        Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos): 
        Veiculo(marca, modelo, capacidade), eixos(eixos) 
        {

        }      
        void exibirDados() const override {         
            
            std::cout << "Caminhao - ";  
            Veiculo::exibirDados(); 
            std::cout << "Eixos: " << eixos << "\n";     
            } 
}; 

class Van : public Veiculo 
{ 
    private:     
        int passageiros;  
        
    public:     
        
        Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros): 
        Veiculo(marca, modelo, capacidade), passageiros(passageiros)
        {

        }      
        
        void exibirDados() const override {
            std::cout << "Van - ";
            Veiculo::exibirDados();
            std::cout << "Passageiros: " << passageiros << "\n";
        } 
}; 

int main() {

    //marcas
    string volks = "Volkswagen";
    string mer = "Mercedes";
    string scan = "Scania";

    //modelos
    string modelo1 = "T4";
    string modelo2 = "vanEscolar";
    string modelo3 = "furgao";
    string modelo4 = "grande";
    string modelo5 = "pequeno";
    string modelo6 = "medio";

    Van* vanDoTio = new Van(volks, modelo1, 1, 15);
    Van* vanEscolar = new Van(mer, modelo2, 1, 15);
    Van* vanDaPolicia = new Van(mer, modelo3, 2, 10);

    Caminhao* carreta = new Caminhao(mer, modelo4, 57, 7);
    Caminhao* caminhaozin = new Caminhao(volks, modelo5, 6, 2);
    Caminhao* caminhao = new Caminhao(scan, modelo6, 45, 3);

    vector<Veiculo*> veiculos;

    veiculos.push_back(vanDoTio);
    veiculos.push_back(vanEscolar);
    veiculos.push_back(vanDaPolicia);

    veiculos.push_back(carreta);
    veiculos.push_back(caminhaozin);
    veiculos.push_back(caminhao);

    for(auto veiculo : veiculos){

        veiculo->exibirDados();
        
    }

    return 0;

}
