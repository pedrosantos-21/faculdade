#include <iostream>
#include <unordered_map>
#include <vector>

int mostFrequentElement(const std::vector<int>& matrix) {
    std::unordered_map<int, int> frequencyMap;
    int maxFrequency = 0;
    int mostFrequentElement = 0;

    // Conta a frequência de cada elemento no vetor
    for (int element : matrix) {
        frequencyMap[element]++;
        if (frequencyMap[element] > maxFrequency) {
            maxFrequency = frequencyMap[element];
            mostFrequentElement = element;
        }
    }

    return mostFrequentElement;
}

int main() {
    // Exemplo de vetor
    std::vector<int> matrix;
    matrix.push_back(1);
    matrix.push_back(2);
    matrix.push_back(3);
    matrix.push_back(4);
    matrix.push_back(2);
    matrix.push_back(2);
    matrix.push_back(3);
    matrix.push_back(1);
    matrix.push_back(2);

    int mostFrequent = mostFrequentElement(matrix);

    std::cout << "O elemento mais frequente no vetor é: " << mostFrequent << std::endl;

    return 0;
}
