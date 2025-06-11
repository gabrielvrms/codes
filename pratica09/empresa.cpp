#include "./include/empresa.hpp"

// Constructor of the Empresa class, initializes the CNPJ
Empresa::Empresa(int cnpj) : cnpj(cnpj) {}

// Method to pay a person, prints the person's name
void Empresa::paga(Pessoa& pes) {
    std::cout << "Paying person: " << pes.pega_nome() << std::endl;
}

// Method to hire an employee, prints the employee's name
void Empresa::contrata(Empregado& emp) {
    std::cout << "Hiring employee: " << emp.pega_nome() << std::endl;
}

// Destructor of the Empresa class, prints the CNPJ when destroying the object
Empresa::~Empresa() {
    std::cout << "Destroying Empresa: " << cnpj << std::endl;
}