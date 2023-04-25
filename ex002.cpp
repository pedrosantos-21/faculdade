#include <iostream>
 using namespace std;
    int main(){

    int inteiro;
    inteiro=7.3;
    cout << inteiro <<endl;

    float real;//numeros flutuantes ex:3,14
    real=7.3;
    cout<<real<<"\n";

    double real2;//numeros flutuantes,porém,requer mais bites.
    real2 =7.3e99;
    cout<< real2<<"\n";

    bool booleando;//true & false(1 e 0)
    booleando = true;
    cout<<booleando<<endl;

    char letra;
    letra ='p';//aspas simles ''
    cout<<letra<<"\n";

    string palavra;
    palavra = "bola";
    cout<<palavra<<'\n';

    int idade;
    cout<<"qual sua iadade?"<< '\n';
    cin>>idade;
    cout<<"idade:"<<idade<<endl;
    return 0;  

}