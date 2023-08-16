#include <bits/stdc++.h>
using namespace std;
int main(){
    float nota1, nota2;
    cout<<"informe a nota 1\n";
    cin>>nota1;
    cout<<"Agora informe a nota 2 \n";
    cin>>nota2;
    float media=(nota1+nota2)/2;
    cout<<"media: "<<media<<'\n';

    //quando for igual(==),quando for diferente(!=),Outros: <, > ,<= ,>=
    /*if(media>=6){
        cout<<"Aprovado!";
    }else{
        cout<<"Reprovado!"<<endl;
    }*/

    //0-2,5:D , 2,5-5:C , 5-7,5:B , 7,5-10:A.
    //else if : quando tiver mais uma pergunta.
        if(media< 2.5){
            cout<<"D \n";

        }else if(media< 5){
            cout<<"C\n";
        }else if(media <7.5){
            cout<<"B\n";
        }else{
            cout<<"A\n";
        }

        //Operadores lógicos: E: &&, OU:|| Não:!

        float freq;
        cout<<"qual a frequência do aluno\n";
        cin>>freq;

       /* if(media>=5 && freq>=75){
            cout<<"APROVADO!\n";
        }else{
            cout<<"REPROVADO!\n";
        }*/


        /*if(media < 5 || freq < 75){
            cout<<"REPROVADO!\n";

        }else{
            cout<<"APROVADO";

        }*/

        //Operador Ternário:
        (media>=5) ? cout<<"APROVADO!" : cout<<"REPROVADO";

    return 0;
}