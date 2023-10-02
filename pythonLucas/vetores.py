#recebe um número n do usuário
n = int(input("Digite o numero de elementos do vetor: "))

#Declare um vertor de n posições
vetor = []

#preencha o vetor com números fornecidos pelo usuário
for i in range(n):
    numero = float(input(f"Digite o {i+1}º numero: "))
    vetor.append(numero)

#Eleva cada número do vetor ao quadrado e calcula a somatória
soma_quadrados = sum(numero ** 2 for numero in vetor)

#Imprima a somatória dos números ao quadrado    
print("A somatória dos numeros ao quadrado é:", soma_quadrados)

#sum(...): A função sum() é usada para somar todos os valores
#resultantes da expressão geradora. Neste caso, ela soma todos os quadrados dos números no vetor.