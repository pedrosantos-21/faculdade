#include <bits/stdc++.h>

using namespace std;

// Função para encontrar o maior valor do array
double encontrarMaiorValor(double array[], int tamanho) {
    double maior = std::numeric_limits<double>::min();

    for (int i = 0; i < tamanho; ++i) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    return maior;
}

// Função para encontrar o menor valor do array
double encontrarMenorValor(double array[], int tamanho) {
    double menor = numeric_limits<double>::max();

    for (int i = 0; i < tamanho; ++i) {
        if (array[i] < menor) {
            menor = array[i];
        }
    }

    return menor;
}

int main() {
    const int tamanho = 10;
    double numeros[tamanho];

    // Recebe e armazena 10 números
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite um número: ";
        cin >> numeros[i];
    }

    // Chama as funções para encontrar o maior e o menor valor
    double maiorValor = encontrarMaiorValor(numeros, tamanho);
    double menorValor = encontrarMenorValor(numeros, tamanho);

    // Imprime os resultados
    cout << "O maior valor é: " << maiorValor << std::endl;
    cout << "O menor valor é: " << menorValor << std::endl;

    return 0;
}
