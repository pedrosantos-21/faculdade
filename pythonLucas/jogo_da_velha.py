#Tabuleiro vazio do jogo da velha
tabuleiro = [[" " for _ in range(3)] for _ in range(3)]

#variável para controlar a vez do jogador (X começa)
vez_do_jogador = "X"

#loop principal do jogo
while True:
    #Imprime o tabuleiro do jogo
    for linha in tabuleiro:
        print("|".join(linha))
    print("\n")

    #solicita a posição da jogada ao jogador
    linha = int(input("jogador {} - Digite a linha (0, 1 ou 2): ".format(vez_do_jogador)))
    coluna = int(input("jogador {} - Digite a coluna (0, 1 ou 2): ".format(vez_do_jogador)))

    #verifica se a posição está vazia
    if tabuleiro[linha][coluna] == " ":
        tabuleiro[linha][coluna] = vez_do_jogador
    else:
        print("Essa posição já está ocupada. Tente novamente.")
        continue

    #verificar se alguém venceu
    #Condições de vitória: três em linha, três em  coluna ou  três na diagonal
    for i in range(3):
        if tabuleiro[i][0] == tabuleiro[i][0] == tabuleiro[i][2] != " " or \
            tabuleiro[0][i] == tabuleiro[1][i] == tabuleiro[2][i] != " ":
            print("jogador {} venceu!".format(vez_do_jogador))
            exit()
    if tabuleiro[0][0] == tabuleiro[1][1] == tabuleiro[2][2] != " " or\
        tabuleiro[0][2] == tabuleiro[1][1] == tabuleiro[2][0] != " ":
        print("jogador {} venceu!".format(vez_do_jogador))
        exit()

    #verifica se o jogo empatou 
    if all(cell != " " for row in tabuleiro for cell in row):
        print("O jogo terminou em empate!")
        exit()

    #Troca a vez do jogador
    vez_do_jogador = "O" if vez_do_jogador == "X" else "X"    