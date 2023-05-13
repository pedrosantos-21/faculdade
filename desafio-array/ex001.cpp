#include <iostream>

using namespace std;

#define P 10

int main() {
    double notas[P];

    // Recebe as notas dos alunos
    for (int i = 0; i < P; ++i) {
        cout << "Digite a média do aluno " << i + 1 << ": ";
        cin >> notas[i];
    }

    // Verifica o status de cada aluno
    for (int i = 0; i < P; ++i) {
        if (notas[i] > 6.0) {
            cout << "Aluno " << i + 1 << ": Aprovado" << endl;
        } else if (notas[i] < 5.0) {
            cout << "Aluno " << i + 1 << ": Reprovado" << endl;
        } else {
            cout << "Aluno " << i + 1 << ": Em recuperação" << endl;
        }
    }

    return 0;
}