# Program: Python
# Author: Gabriel Ramos
# Date: 21/04/2025
# Description: Calculo da área e contorno de um círculo e um retângulo e implementacao do laco for
# License: "CC BY-NC-SA"


import msvcrt
import math

PI = 3.14

def calcular_circulo(raio):
    comprimento = 2 * PI * raio
    area = PI * raio ** 2
    return comprimento, area

def calcular_retangulo(lado1, lado2):
    perimetro = 2 * (lado1 + lado2)
    area = lado1 * lado2
    return perimetro, area


while True:
    print("\nEscolha uma opção:")
    print("1 - Calcular a área e o comprimento de um círculo")
    print("2 - Calcular a área e o perímetro de um retângulo")
    
    try:
        opcao = int(input("Digite o número da opção desejada: "))
    except ValueError:
        print("Entrada inválida! Digite apenas números.")
        continue

    if opcao == 1:
        try:
            raio = float(input("Informe o valor do raio: "))
            comprimento, area = calcular_circulo(raio)
            print(f"Comprimento: {comprimento:.2f}")
            print(f"Área: {area:.2f}")
        except ValueError:
            print("Valor inválido para o raio.")
    elif opcao == 2:
        try:
            lado1 = float(input("Digite o lado 1: "))
            lado2 = float(input("Digite o lado 2: "))
            perimetro, area = calcular_retangulo(lado1, lado2)
            print(f"Perímetro: {perimetro:.2f}")
            print(f"Área: {area:.2f}")
        except ValueError:
            print("Valor inválido para os lados.")
    else:
        print("Opção inválida. Escolha 1 ou 2.")

    print("\nPressione qualquer tecla para continuar ou ESC para sair...")
    tecla = msvcrt.getch()
    if tecla == b'\x1b':  
        print("Encerrando o programa...")
        break
