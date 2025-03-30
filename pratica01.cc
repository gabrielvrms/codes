/*

Program: Pratica 01

Author: Gabriel Vitor Amaral Ramos 

Date: 16/03/2025

Description: [Brief Description of the program]

License: [Type of License]

*/

#include <iostream>

const double PI = 3.14;

double area_circle(double radius){
    return PI*radius*radius;
}

double lenght_circle(double radius){
    return PI*radius*2;
}
double perimeter_rectangle(double base, double height){
    return 2*(height + base);
}
double area_rectangle(double base, double height){
    return height*base;
}

int main() {

    int option;

    do{
        std::cout << "\nEscolha uma opcao: " << std::endl;
        std::cout << "1-Comprimento e area da circunferencia: " << std::endl;
        std::cout << "2-Perimetro e area do retangulo: " << std::endl;
        std::cout << "0-Sair" << std::endl;
        std::cout << "Digite o numero da sua opcao: " << std::endl;
        std::cin >> option;

    double valor1, valor2;
    
    switch(option){
        case 1:
            std::cout << "Digite o raio da circunferencia: " << std::endl;
            std::cin >> valor1;
            std::cout << "O comprimento da circunferencia e: "<< lenght_circle(valor1) << std::endl;
            std::cout << "A area da circunferencia e: " << area_circle(valor1) << std::endl;
            break;
        case 2:
            std::cout << "Digite a base do retangulo: " << std::endl;
            std::cin >> valor1;
            std::cout << "Digite a altura do retangulo: " << std::endl;
            std::cin >> valor2;
            std::cout << "O perimetro do retangulo e: " << perimeter_rectangle(valor1, valor2) << std::endl;
            std::cout << "A area do retangulo e: " << area_rectangle(valor1,valor2) <<std::endl;
            break;
        case 0:
            std::cout <<"Finalizando do progama..." << std::endl;
            break;
        default:
            std::cout <<"opcao invalida! Tente novamente." << std::endl;
        }
    }while(option != 0);


 return 0;  

}
