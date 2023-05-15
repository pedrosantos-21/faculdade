#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int elementoconst(const vector<int>& matrix) {
    unordered_map<int, int> mapapadrao;
    int frequenciamax = 0;
    int elementoconst = 0;

    // Conta a frequência de cada elemento na matriz
    for (int elemento : matrix) {
        mapapadrao[elemento]++;
        if (mapapadrao[elemento] > frequenciamax) {
            frequenciamax = mapapadrao[elemento];
            elementoconst = elemento;
        }
    }

    return elementoconst;
}

int main() {
    // Exemplo de matriz
    vector<int> matrix = {1, 2, 3, 4, 2, 2, 3, 1, 2};

    int frequente = elementoconst(matrix);

    cout << "O elemento mais frequente na matriz eh: " << frequente << endl;

    return 0;
}