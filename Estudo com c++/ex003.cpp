#include <bits/stdc++.h>
using namespace std;
    int main(){
        int a=7,b=3;
        int soma = a+b;
         cout<<"soma: "<<soma<<"\n";
    //cout<<"soma:"<<a+b<<endl; (podemos escrever desse jeito mais simples)
        int sub=a-b;
         cout<<"subtracao: "<<sub<<'\n';

         int mult=a*b;
         cout<<"multiplicacao: "<<mult<<'\n';

         float quocdiv=a/b;
        cout<<"divisao: "<<quocdiv<<endl;
         
         int restdiv=a%b;
         cout<<"resto da divisao: "<<restdiv<<'\n';
          
        float div = (float)a / (float)b;
        cout<<"divisao: "<<div<<endl;

        float pot=pow(b,a);//colocamos a virgula para operar uma potencia (a^b)
        cout<<"potencia:"<<pot<<'\n';
        
        //incremento e decremento

        cout<<"a antigo: "<< a << endl;
        //a+=3;
        //a=a+1;
        //a++;
        //a--;
        //a-=3;
        //a=a-3;
        a*=2;
        //a=a*2;
    
        cout<<"a novo: "<< a <<'\n';
        return 0;   
}