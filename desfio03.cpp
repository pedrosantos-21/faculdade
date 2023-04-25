#include <bits/stdc++.h>
using namespace std;

    int fat(int x){
        int fatorial=1;
         for (int j=1 ;j<=x; j++){
            fatorial*=j;
        }
         return fatorial;
    }

    int main(){
        int n;
        while(true){
        cout<<"informe um numero inteiro positivo\n";
        cin>>n;
        if(n<=0){
            cout<<"ERRO:informe um numero positivo\n";
    } else{
        break;
    }
}
    int valorfat = fat(n);
        cout<< "O fatorial desse numero "<< n << " e: "<< valorfat <<endl;
           
        return 0;
}
