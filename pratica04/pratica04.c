/*

Program: C

Author: Gabriel Ramos

Date: [21/04/2025]

Description: Calculo da area e contorno de um circulo e um retangulo

License: CC BY-NC-SA

*/
#include <stdio.h>
#include <conio.h> // Para getch()
#define PI 3.14

void calcular_circulo(float raio, float *comprimento, float *area) {
    *comprimento = 2 * PI * raio;
    *area = PI * raio * raio;
}

void calcular_retangulo(float lado1, float lado2, float *perimetro, float *area) {
    *perimetro = 2 * (lado1 + lado2);
    *area = lado1 * lado2;
}

int main() {
    int opcao;
    float raio, comprimento, area, lado1, lado2, perimetro;
    char tecla;


    
    for (;;) {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Calcular a area e o comprimento de um circulo\n");
        printf("2 - Calcular a area e o perimetro de um retangulo\n");
        printf("Digite o numero da opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nInforme o valor do raio: ");
            scanf("%f", &raio);

            calcular_circulo(raio, &comprimento, &area);

            printf("Comprimento: %.2f\n", comprimento);
            printf("Area: %.2f\n", area);
        } 
        else if (opcao == 2) {
            printf("\nDigite os lados do retangulo (lado1 lado2): ");
            scanf("%f %f", &lado1, &lado2); 

            calcular_retangulo(lado1, lado2, &perimetro, &area);

            printf("Perimetro: %.2f\n", perimetro);
            printf("Area: %.2f\n", area);
        } 
        else {
            printf("Opcao invalida. Escolha 1 ou 2.\n");
        }

        printf("\nPressione qualquer tecla para continuar ou ESC para sair...\n");
        tecla = getch(); 

        if (tecla == 27) { 
            printf("Encerrando o programa...\n");
            break;
        }
    }

    return 0;
}
