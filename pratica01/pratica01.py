'''

Program: Pratica 01

Author: Gabriel Vitor Amaral

Date: 16/03/2025

Description: Calculating the length and area of ​​a circle and calculating the perimeter and area of ​​a rectangle

License: [Type of License]

'''
if __name__ == "__main__":
    pi = 3.14
    def area_circle(radius):
        return pi*radius**2
    def lenght_circle(radius):
        return 2*pi*radius
    def perimeter_rectangle(base,height):
        return (base+height)*2
    def area_rectangle(base,height):
        return base*height
while True:
    print("\escolha uma opcao: ")
    print("1 - Area e comprimento do Círculo")
    print("2 - Area e perimetro do Retângulo")
    print("0 - Sair")

    opcao = input("Digite a opcao desejada: ")
    
    if opcao == "1":
        radius = float(input("Digite o raio do circulo: "))
        print(f"O comprimento do circulo e: {lenght_circle(radius):.2f}")
        print(f"A area do circulo e: {area_circle(radius):.2f}")
    elif opcao == "2":
        base = float(input("Digite a base do retangulo: "))
        height = float(input("Digite a altura do retangulo: "))
        print(f"O perimetro do retangulo e: {perimeter_rectangle(base, height):.2f}")
        print(f"A area do retangulo e: {area_rectangle(base, height):.2f}")
    elif opcao == "0":
        print("Saindo...")
        break
    else:
        print("Opção inválida! Tente novamente.")
