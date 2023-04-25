#include <bits/stdc++.h>
using namespace std;
    float h(float x){
        float j;
        float valor = 25/(2*(pow(x,2)) + pow(x,2));
        return valor;
    }
int main(){
    float cat1;
    cout<<"dada a expressao: h^2 = 2x^2 + x^2\n";
    cout<<" Sabendo que h= 5 informe um valor para x\n ";
    cin>>cat1;
    float valorh= h(cat1);
    cout<<valorh<<endl;
    return 0;
}