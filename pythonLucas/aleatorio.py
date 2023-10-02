import random

#gere duas variáveis aleatórias inteiras entre 0 e 9
numero1 = random.randint(0, 9)
numero2 = random.randint(0, 9)

#imprime os números gerados
print("Numeros 1: ", numero1)
print("Numeros 2: ", numero2)

#Compare os valores e imprima o resultado
if numero1 == numero2:
    print("Os numeros são iguais.")
elif numero1 > numero2:
    print("Número 1 é maior.")
else:
    print("Número 2 é maior.")