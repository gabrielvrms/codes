#include "./include/pessoa.hpp"

// Constructor for Pessoa class, initializes name, age, and cpf
Pessoa::Pessoa(const std::string& nome, int idade, int cpf) : nome(nome), idade(idade), cpf(cpf) {}

// Returns a constant reference to the person's name
const std::string& Pessoa::pega_nome() {
    return nome;
}

// Destructor for Pessoa class, prints a message when a Pessoa object is destroyed
Pessoa::~Pessoa() {
    std::cout << "Destruindo Pessoa: " << nome << std::endl;
}