%{
Program: Pratica 01

Author: Gabriel Vitor Amaral Ramos

Date: 16/03/2025

Description: [Brief Description of the program]

License: [Type of License]
%}

function main()
    clc;  % Limpa a tela do console
    clear;  % Limpa as variáveis do workspace

    while true
        fprintf("\n===== MENU =====\n");
        fprintf("1 - Calcular propriedades do Circulo\n");
        fprintf("2 - Calcular propriedades do Retangulo\n");
        fprintf("0 - Sair\n");

        option = input("Digite sua escolha: ");

        switch option
            case 1
                calculateCircle();
            case 2
                calculateRectangle();
            case 0
                fprintf("Finalizando programa...\n");
                return;
            otherwise
                fprintf("Opcao invalida! Tente novamente.\n");
        end
    end
end

% Função para calcular comprimento e area da circunferencia
function calculateCircle()
    PI = 3.14;  % Definição da constante PI

    % Entrada do usuário com validação
    radius = input("\nDigite o raio do circulo: ");
    if radius <= 0
        fprintf("Erro: O raio deve ser um número positivo.\n");
        return;
    end

    % Cálculo do comprimento e da área do círculo
    length = 2 * PI * radius;
    areaCircle = PI * (radius^2);

    % Resultados
    fprintf("\n---- Resultados do Circulo ----\n");
    fprintf("Raio: %.2f\n", radius);
    fprintf("Comprimento da circunferencia: %.2f\n", length);
    fprintf("Area do circulo: %.2f\n", areaCircle);
end

% Função para calcular perimetro e área do retângulo
function calculateRectangle()
    % Entrada do usuário com validação
    base = input("\nDigite o comprimento do retangulo: ");
    if base <= 0
        fprintf("Erro: O comprimento deve ser um número positivo.\n");
        return;
    end

    height = input("Digite a largura do retangulo: ");
    if height <= 0
        fprintf("Erro: A largura deve ser um número positivo.\n");
        return;
    end

    % Cálculo do perímetro e da área
    perimeter = 2 * (base + height);
    areaRectangle = base * height;

    % Resultados
    fprintf("\n---- Resultados do Retangulo ----\n");
    fprintf("Comprimento: %.2f\n", base);
    fprintf("Largura: %.2f\n", height);
    fprintf("Perimetro do retangulo: %.2f\n", perimeter);
    fprintf("Area do retangulo: %.2f\n", areaRectangle);
end

