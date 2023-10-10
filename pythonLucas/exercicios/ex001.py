import random

def bubble_sort(lista):
    n = len(lista)
    for i in range(n-1):
        for j in range(n-1):
            if lista[j] > lista[j+1]:
                lista[j], lista[j+1] = lista[j+1],lista[j]

    return lista
    

lista = []

quantidade_numero = int(input('Quantos numeros aleátorios você quer? '))
numero_minimo = int(input('Digite um valor minimo: '))
numero_maximo = int(input('Digite um numero máximo: '))

for n in range(quantidade_numero): 
    aleatorio = random.randint(numero_minimo,numero_maximo)
    lista.append(aleatorio)

lista_organizada = bubble_sort(lista)
print(lista_organizada)
    #recebe um parâmetro lista e completamente    listado
    #primeiro loop do programa que vai iniciar de 0 a o penultimo valor da lista
    #segundo looping do programa que vai verificar se o 1º valor adjacete é menor 

