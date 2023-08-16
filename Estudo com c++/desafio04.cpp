#include <bits/stdc++.h>
using namespace std;
float potencia(float &x,int &y){
    int pot=1;
    int cont=1;
    for(cont ;cont <= y;cont++){
        pot*=x;
    }
    return pot;
    }
    int main(){
        float b;
        int e; 
        while (1)
        {
            /* code */
        cout<<"digite a base(positivo)\n";
        cin>>b;
        cout<<"digite o expoente (natural)\n";
        cin>>e;
        
        if(b<=0){
            cout<<"erro:Digite um numero positivo\n";
        }else{ 
            break;
        }
        
        float respot=potencia(b,e);
        cout<< " O resultado de " << b << " elevado a " << e << " e igual a : " <<respot<<endl;
        int q;
        cout<< "Digite 1 se quiser realizar outra operacao\n";
        cin>>q;
        if(q == 0){
            break;
        }
        }
            
    return 0;
}