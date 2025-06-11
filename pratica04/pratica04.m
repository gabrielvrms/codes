%Program: Matlab

%Author: Gabriel Ramos

%Date: 21/04/2025

%Description: Calculo da area e contorno de um circulo e um retangulo

%License: CC BY-NC-SA


clc;
clear;

PI = 3.14;


while true
    fprintf('\nEscolha uma opção:\n');
    fprintf('1 - Calcular a área e o comprimento de um círculo\n');
    fprintf('2 - Calcular a área e o perímetro de um retângulo\n');

    opcao = input('Digite o número da opção desejada: ');
    
    if isempty(opcao) || ~isnumeric(opcao)
        fprintf('Entrada inválida! Digite apenas números.\n');
        continue;
    end

    switch opcao
        case 1
            try
                raio = input('Informe o valor do raio: ');
                if isempty(raio) || ~isnumeric(raio)
                    error('Valor inválido');
                end
                comprimento = 2 * PI * raio;
                area = PI * raio^2;
                fprintf('Comprimento: %.2f\n', comprimento);
                fprintf('Área: %.2f\n', area);
            catch
                fprintf('Valor inválido para o raio.\n');
            end
        case 2
            try
                lado1 = input('Digite o lado 1: ');
                lado2 = input('Digite o lado 2: ');
                if isempty(lado1) || isempty(lado2) || ~isnumeric(lado1) || ~isnumeric(lado2)
                    error('Valor inválido');
                end
                perimetro = 2 * (lado1 + lado2);
                area = lado1 * lado2;
                fprintf('Perímetro: %.2f\n', perimetro);
                fprintf('Área: %.2f\n', area);
            catch
                fprintf('Valor inválido para os lados.\n');
            end
        otherwise
            fprintf('Opção inválida. Escolha 1 ou 2.\n');
    end

    continuar = input('\nPressione ENTER para continuar ou digite "sair" para encerrar: ', 's');
    if strcmpi(continuar, 'sair')
        fprintf('Encerrando o programa...\n');
        break;
    end
end
