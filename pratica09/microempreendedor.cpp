#include "./include/microempreendedor.hpp"

// Constructor for the MicroEmpreendedor class, initializes Pessoa and Empresa
MicroEmpreendedor::MicroEmpreendedor(const std::string& nome, int idade, long long cpf, int cnpj)
    : Pessoa(nome, idade, cpf), Empresa(cnpj) {
    std::cout << "MicroEmpreendedor created: " << nome << std::endl;
}

// Displays the microentrepreneur's CPF
void MicroEmpreendedor::exibe_cpf() const {
    std::cout << "CPF: " << cpf << std::endl;
}

// Displays the microentrepreneur's CNPJ
void MicroEmpreendedor::exibe_cnpj() const {
    std::cout << "CNPJ: " << cnpj << std::endl;
}

// Destructor for the MicroEmpreendedor class
MicroEmpreendedor::~MicroEmpreendedor() {
    std::cout << "Destroying MicroEmpreendedor: " << nome << std::endl;
}
