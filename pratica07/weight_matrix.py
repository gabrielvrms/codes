Inf = 9999  # Definindo o valor para Inf

matrix = [
    [0, 5, 1, 2, Inf, Inf, Inf, Inf, Inf],
    [5, 0, Inf, Inf, Inf, Inf, Inf, Inf, 3],
    [1, Inf, 0, Inf, 1, Inf, Inf, Inf, Inf],
    [2, Inf, Inf, 0, Inf, 1, Inf, Inf, Inf],
    [Inf, Inf, 1, Inf, 0, Inf, Inf, 1, Inf],
    [Inf, Inf, Inf, 1, Inf, 0, 1, Inf, Inf],
    [Inf, Inf, Inf, Inf, Inf, 1, 0, 3, 2],
    [Inf, 1, Inf, Inf, Inf, 1, Inf, 0, 3],
    [Inf, 3, Inf, Inf, Inf, Inf, 2, Inf, 0]
]

# Exemplo de impressão da matriz
print("Matriz de pesos:")
for linha in matriz:
    for elemento in linha:
        if elemento == Inf:
            print("Inf", end=" ")
        else:
            print(elemento, end=" ")
    print()