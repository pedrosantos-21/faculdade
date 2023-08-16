#include <bits/stdc++.h>
using namespace std;
int main(){
    float renda;
    int idade;
    cout<<"qual a sua idade?\n";
    cin>> idade;
    cout<<"Qual a sua renda\n";
    cin>>renda;
    if(idade >= 21 && renda < 1200){
        cout<<"voce esta apto a participar desse progama\n";
    }else{
        cout<<"voce nao pode do progama!\n";
    }
    return 0;
}