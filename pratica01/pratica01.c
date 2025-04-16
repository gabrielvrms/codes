/*

Program: Pratica 01

Author: Gabriel Vitor Amaral Ramos 

Date: 16/03/2025

Description: [Brief Description of the program]

License: [Type of License]

*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

typedef struct {
    float raio;
    float comprimento;
    float area;
} Circle;

void calcularCirculo(Circle *c) {
    c->comprimento = 2 * PI * c->raio;
    c->area = PI * (c->raio * c->raio);
}

void calculateRectangle() {
    float *base, *height;  // Ponteiros para armazenar os lados do retângulo dinamicamente
    float perimeter, areaRectangle;  // Variáveis locais para os resultados

    // Alocação dinâmica de memória para os lados do retângulo
    base = (float *)malloc(sizeof(float));
    height = (float *)malloc(sizeof(float));

    // Verificação da alocação de memória
    if (base == NULL || height == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return;
    }

    // Entrada dos valores do usuário
    printf("\nDigite a base do retangulo: ");
    scanf("%f", base);
    printf("Digite a altura do retangulo: ");
    scanf(" %f", height);

    // Cálculo do perímetro e da área
    perimeter = 2 * (*base + *height);
    areaRectangle = (*base) * (*height);

    // Exibição dos resultados
    printf("Perimetro do retangulo: %.2f\n", perimeter);
    printf("Area do retangulo: %.2f\n", areaRectangle);

    // Liberação da memória alocada
    free(base);
    free(height);
}
int main() {

    int option;
    Circle c;
    do {
        // Exibição do menu de opções
        printf("\nEscolha uma opcao:\n");
        printf("1 - Calcular comprimento e area da circunferencia\n");
        printf("2 - Calcular perimetro e area do Retangulo\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &option);

        // Estrutura de decisão para chamar a função correta
        switch (option) {
            case 1:{
                // Entrada do usuário
                printf("Digite o raio do circulo: ");
                scanf(" %f", &c.raio);
            
                // Cálculo
                calcularCirculo(&c);
            
                // Exibição dos resultados
                printf("\nComprimento da circunferencia: %.2f\n", c.comprimento);
                printf("Area do circulo: %.2f\n", c.area);
                break;
            }
            case 2:
                calculateRectangle();
                break;
            case 0:
                printf("Finalizando progama...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (option != 0);

return 0;

}