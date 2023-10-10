import random

coredores = []

quantidade_coredores = int(input('Digite a quantidade de coredores: '))

for i in range(quantidade_coredores):
    nome = input('Digite o nome dos coredores: ').title()
    coredores.append(nome)

medalha_de_ouro =random.randint(0,quantidade_coredores - 1)
medalha_de_prata = random.randint(0,quantidade_coredores - 1)

while medalha_de_prata == medalha_de_ouro:
    medalha_de_prata = random.randint(0, quantidade_coredores - 1)

medalha_de_bronze = random.randint(0, quantidade_coredores - 1)

while medalha_de_bronze == medalha_de_ouro:
    medalha_de_bronze = random.randint(0, quantidade_coredores - 1)


vencendor_ouro = coredores[medalha_de_ouro]
vencendor_prata = coredores[medalha_de_prata]
vencendor_bronze = coredores[medalha_de_bronze]

print(f'O corredor vencedor da medalha de ouro é: {vencendor_ouro}')
print(f'O corredor vencedor da medalha de prata é: {vencendor_prata}')
print(f'O corredor vencedor da medalha de bronze é: {vencendor_bronze}')
