#Recebe a entrada do usúario para  uma variavel inteira e uma de ponto  flutuante
valor_inteiro = int(input("Digite um numero inteiro:"))
valor_ponto_flutuante = float(input("Digite um numero de ponto flutuante: "))

#calcule a soma das duas variáveis
soma = valor_inteiro + valor_ponto_flutuante

# Use a função int() para converter a soma em um valor inteiro
parte_inteira =  int(soma)
#Função modular -> parte_inteira = soma % 1

#Imprima a parte inteira da soma
print("A parte inteira da soma é:", parte_inteira)
