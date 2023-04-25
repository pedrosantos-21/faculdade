#include <bits/stdc++.h>

using namespace std;

//T se tornou uma variável global
//int t=7;

//#define para definir constantes.
#define pi 3.14;
#define ouvir cout<<"escute djonga"<<'\n';


//void é utilizado qnd n temos saidas.
void inscrever(){

    cout<<"como djavan dizia "<<endl<<"AHH VA SE FUDE!"<<endl;

}
//variávavel local.
//para ligar as funções ,basta adicionar o & antes da variável.(int &x,int &y)
 int somar(int &x,int &y){
    int t;
    t = 1;
    
    int soma= x+y;
    x=30;
    return soma;
 }
 int main(){
   int t;
    t=0;

    inscrever();
    
    int a=7,b=3;
    int s;
    s=somar(a,b);

    cout<<"valor de A: "<<a <<endl;

    cout<<"soma:"<< s << '\n';

    cout<<"valor de t: "<< t << endl;

    //cout<<pi;
    ouvir;

     return 0;
}
