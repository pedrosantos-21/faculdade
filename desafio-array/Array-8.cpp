#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 3, 1, 7, 5, 8, 6, 2}; // Array inicial
    int n = sizeof(arr) / sizeof(arr[0]); // Tamanho do array
    int num, i; // Número a ser procurado e índice atual

    cout << "Digite um número: ";
    cin >> num;

    for (i = 0; i < n; i++) { // Percorre o array
        if (arr[i] == num) { // Verifica se o número foi encontrado
            cout << "O número " << num << " foi encontrado no índice " << i << endl;
            break; // Interrompe o loop
        }
    }

    if (i == n) { // Se o índice atual é igual ao tamanho do array, o número não foi encontrado
        cout << "O número " << num << " não está presente no array." << endl;
    }

    return 0;
}
