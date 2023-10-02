


lista = [7,5,8,1,3]

#defninção da lista não ordernada
def selection_sort(lista):

    #determinação do tamanho da lista
    n = len(lista)

    #loop externo
    for j in range(n-1):

        #inicialização do indice mínimo 'min_index'
        min_index = j

        #loop interno    
        for i in range(j, n): 
        
            #comparação e atualização do índice mínimo
            if lista[i] < lista[min_index]:
                min_index = i 
                    
        #troca dos elementos
        if lista[j] > lista[min_index]:
            aux = lista[j]
            lista[j] = lista[min_index]
            lista[min_index] = aux


