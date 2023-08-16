//Estruturas de repetições-WHILE-DO WHILE-FOR.  
/*WHILE(Ccondição){
    comandos
}

DO{comandos

    }WHILE (condções);

for(início;final;passo){
    comandos
}
-Podemos declarar umma variavel nova dentro do for.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Diga um numero inteiro nao negativo\n";
    cin>>n;

    int soma=0;
    //int cont=1;
    /*while(cont<= n){
         soma+=cont;
         cont++;
    }*/
    //break
    /*do{
        soma+=cont;
        cont++;
    }while(cont <= n);*/

    for(int j=1;j<=n;j++){
        soma+=j;
    }
    cout<<"A soma dos numeros de 0 ate "<<n<<"="<<soma<<endl;

    return 0;

}