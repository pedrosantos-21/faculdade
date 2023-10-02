#Função para ordernar a lista usando o algortimo Bubble sort
def bubble_sort(lista):
    n = len(lista)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]

#função para realizar uma busca binaria em umalista ordenada
def busca_binaria(lista, item):
    esquerda, direita = 0, len(lista) - 1
    while esquerda <= direita:
        meio = (esquerda + direita) // 2
        if lista[meio] == item:
            return meio
        elif lista[meio] < item:
            esquerda = meio + 1
        else:
            direita = meio - 1
    return -1

#Receba o tamnho da lista do usuário
n = int(input("Digite o tamanho da lista: "))

#inicialize uma lista vazia
lista = []

#Preencga a lista com vallores numéricos fornecidos pelo usuário
for i in range(n):
    valor = int(input(f"Digite o {i + 1}º valor: "))
    lista.append(valor)

#Ordene a lista usando o algoritimo Bubble sort
bubble_sort(lista)

#Solicite ao usuário o valor a ser buscado
item = int(input("Digite o valor a ser buscado: "))

#Realize a busca binária
indice = busca_binaria(lista, item)

#imprima o resultado da busca binária
if indice != -1:
    print(f"O valor {item} foi encotrado no índice {indice} da lista ordenada.")
else:
    print(f"O valor {item} não foi encontrado na lista.")