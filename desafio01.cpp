#include <bits/stdc++.h>
using namespace std;

    float f(float x){
        float valor = x*x - 3*x + 5;
        return valor;
        
    }
int main(){

    float a;
    cout<<"Dada a funcao: f(x) = x^2 - 3x + 5 \n";
    cout<<"informe um valor para f(x)\n";
    cin>>a;
    float valorf= f(a);
    cout<<valorf <<endl;
    
    return 0;
}