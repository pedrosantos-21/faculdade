#include <iostream>

using namespace std;

int main(){

    double val[5];
    //entrada de valores (5 números)
    for(int i = 0; i<=4; i++){
        cout << "Informe o " << i+1 << " valor: " << endl;
        cin >> val[i];
    }
    double total = 0;
    //2) calcular a média
    for(int i2 = 0; i2<=4; i2++){
        //total = total + val[i2];
        total += val[i2]
    }

    cout << fixed;//o console vai interpretar os nossos valores com ponto flutuante.
    cout << "A media eh: " << (total / 5) << endl;

    return 0;
}