import math

numero = int(input("Digite um número inteiro:"))

if numero > 1:
    limite = math.isqrt(numero) + 1
    for i in range(2,limite):

        #aqui ele faz uma verificação de 2 até o limite, que é o resultado da raiz quadradea do numero escolhido 
        # pelo o usuário
        if (numero % i) == 0:
            print(numero, "não é um número primo.")
            break
    else:
        print(numero, "é um numero primo.")
else:
    print(numero, "não é um  número primo.")

    #nesse codigos fazemos uma verificação simples e rápida utilizando a raiz quadrada do numero escolhido pelo jogador.