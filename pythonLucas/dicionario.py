#Solicita ao usuario o numero de alunos
n = int(input("Digite o numero de alunos: "))

#inicializa um dicionário vazio para armarzenar os dados dos alunos
alunos = {}

#Executa um loop para receber os dados de cada aluno
for i in range(n):
    nome = input("Digite o nome do aluno: ")
    nota = float("Digite a nota do aluno: ")
    alunos[nome] = nota #Adicona o nome e a nota ao dicionário

    #imprime o dicionário com os dados dos alunos
    print("Dicionário de Alunos: ")
    for nome, nota in alunos.items():
        print(f"Nome: {nome}, Nota: {nota}")
        