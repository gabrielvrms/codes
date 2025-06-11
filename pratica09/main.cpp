/*

Program: implementacao_classes_cpp

Author: Gabriel Vitor Amaral Ramos 

Date: 10/06/2025

Description: Demonstrates the implementation of classes and inheritance in C++ by creating a micro-entrepreneur class that inherits from both Pessoa and Empresa classes, along with other related classes.

License: [CC BY]

*/
#include "./include/microempreendedor.hpp"
#include "./include/empresa.hpp"
#include "./include/empregado.hpp"
#include "./include/pessoa.hpp"

int main() {
    // Creates a Pessoa object dynamically
    Pessoa* p = new Pessoa("Lucas", 30, 1182345678);

    // Creates an Empregado object dynamically
    Empregado* e = new Empregado("Luis", 23, 1182345678, 1500.00);

    // Uses polymorphism: Pessoa pointer points to Empregado
    Pessoa* p2 = e;

    // Creates a Empresa object with a CNPJ
    Empresa empresa(2905700001);

    // Empresa pays the employee
    empresa.paga(*e);

    // Empresa hires the employee (using cast to Empregado*)
    empresa.contrata(*(static_cast<Empregado*>(p2)));

    // Creates a MicroEmpreendedor object (stack allocation)
    MicroEmpreendedor m("Maria", 40, 12345678901, 987654321);

    // Displays the CPF of the micro-entrepreneur
    m.exibe_cpf();

    // Displays the CNPJ of the micro-entrepreneur
    m.exibe_cnpj();

    // Frees dynamically allocated memory
    delete p;
    delete e;
    // MicroEmpreendedor is destroyed automatically (stack)

    return 0;
}
