#include "./include/empregado.hpp"

// Constructor for Empregado class, initializes base class Pessoa and sets salario
Empregado::Empregado(const std::string& nome, int idade, long long cpf, double salario)
    : Pessoa(nome, idade, cpf), salario(salario) {}

// Destructor for Empregado class, prints a message when an Empregado object is destroyed
Empregado::~Empregado() {
    std::cout << "Destruindo Empregado " << std::endl;
}
