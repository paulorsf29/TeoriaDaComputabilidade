def soma_numeros(n):
    soma = 0
    for i in range(1, n):
        soma += i
    return soma

print("Soma:", soma_numeros(5))
