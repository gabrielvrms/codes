/*

Program: C++

Author: Gabriel Ramos

Date: 21/04/2025

Description: Calculo da area e contorno de um circulo e um retangulo e implementacao do laço for

License: CC BY-NC-SA

*/

#include <iostream>
#include <conio.h> 
#define PI 3.14

void calcular_circulo(float raio, float* comprimento, float* area) {
    *comprimento = 2 * PI * raio;
    *area = PI * raio * raio;
}

void calcular_retangulo(float lado1, float lado2, float* perimetro, float* area) {
    *perimetro = 2 * (lado1 + lado2);
    *area = lado1 * lado2;
}

int main() {
    int opcao;
    float raio, comprimento, area, lado1, lado2, perimetro;
    char tecla;


   
    for (;;) {
        std::cout << "\nEscolha uma opcao:\n";
        std::cout << "1 - Calcular a area e o comprimento de um circulo\n";
        std::cout << "2 - Calcular a area e o perimetro de um retangulo\n";
        std::cout << "Digite o numero da opcao desejada: ";
        std::cin >> opcao;

        if (opcao == 1) {
            std::cout << "\nInforme o valor do raio: ";
            std::cin >> raio;

            calcular_circulo(raio, &comprimento, &area);

            std::cout << "Comprimento: " << comprimento << "\n";
            std::cout << "Area: " << area << "\n";
        }
        else if (opcao == 2) {
            std::cout << "\nDigite os lados do retangulo (lado1 lado2): ";
            std::cin >> lado1 >> lado2;

            calcular_retangulo(lado1, lado2, &perimetro, &area);

            std::cout << "Perimetro: " << perimetro << "\n";
            std::cout << "Area: " << area << "\n";
        }
        else {
            std::cout << "Opcao invalida. Escolha 1 ou 2.\n";
        }

        std::cout << "\nPressione a tecla ára continuar ou ESC para sair...\n";
        tecla = getch();

        if (tecla == 27) { 
            std::cout << "Encerrando o programa...\n";
            break;
        }
    }

    return 0;
}
