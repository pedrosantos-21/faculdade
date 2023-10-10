import random

def selection_sort(lista):
    n = len(lista)
    for i in range(n -1):
        min_index = i
        for j in range(i, n):
            if lista[j] < lista[min_index]:
                min_index = j
        lista[i], lista[min_index] = lista[min_index], lista[i]
    return lista

lista = []

qunatidade_numeros = int(input('Digite o tamanho da lista: '))
numero_minimo = int(input('Deseje o numero minimo: '))
numero_maximo = int(input('Deseje o numero maximo: '))

for i in range(qunatidade_numeros):
    aleatorio = random.randint(numero_minimo,numero_maximo)
    lista.append(aleatorio)

#for i in range(qunatidade_numeros):
#    numeros = int(input('Digite o numero desejado: '))
#    lista.append(numeros)

lista_organizada = selection_sort(lista)
print(lista_organizada)