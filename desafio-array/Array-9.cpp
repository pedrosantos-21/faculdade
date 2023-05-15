#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// Constantes para definir o tamanho do tabuleiro e o número de navios
const int ROWS = 5;
const int COLS = 5;
const int SHIPS = 5;

int board[ROWS][COLS];

// Função para iniciar o tabuleiro
void initBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = 0;
        }
    }
}
// Função para posicionar os navios em pontos aleatórios
void placeShips() {
    int count = 0;
    while (count < SHIPS) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (board[row][col] != 1) {
            board[row][col] = 1;
            count++;
        }
    }
}
// Função para ver se o tiro foi em uma posição válida da tabela
bool isValid(int row, int col) {
    return (row >= 0 && row < ROWS && col >= 0 && col < COLS);
}
// Função para ver se o tiro acertou um navio
bool isHit(int row, int col) {
    return board[row][col] == 1;
}
// Função para ver quantos navios estão proximos do tiro
int countShipsAround(int row, int col) {
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (isValid(i, j) && board[i][j] == 1) {
                count++;
            }
        }
    }
    return count;
}
// Função para imprimir o tabuleiro
void printBoard(bool showShips) {
    cout << "  ";
    for (int j = 0; j < COLS; j++) {
        cout << j << " ";
    }
    cout << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << i << " ";
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == 1 && showShips) {
                cout << "S ";
            } else if (board[i][j] == 2) {  // Se o tiro acertar, o valor no array será 2 e imprimirá um X
                cout << "X ";
            } else if (board[i][j] == 3) {  // Se o tiro errar, o valor no array será 3 e imprimirá um *
                cout << "* ";
            } else {                        // Enquanto não houver tiros no espaço, o mesmo será marcado por um .
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    srand(time(0));
    initBoard();
    placeShips();
    int hits = 0;
    while (hits < SHIPS) {
        printBoard(false);
        int row, col;
        cout << "Digite a linha e a coluna (separados por espaco) para atirar: ";
        cin >> row >> col;
        if (!isValid(row, col)) {
            cout << "Posição inválida! Tente novamente." << endl;
            continue;
        }
        if (board[row][col] == 0) {
            int count = countShipsAround(row, col);
            cout << "Errou! Existem " << count << " navios ao redor." << endl;
            board[row][col] = 3;
        } else {
            cout << "Acertou!" << endl;
            board[row][col] = 2;
            hits++;
        }
    }
    printBoard(true);
    cout << "Parabéns, voce destruiu todos os navios!" << endl;
    return 0;
}
