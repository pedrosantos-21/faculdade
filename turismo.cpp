#include <bits/stdc++.h>
using namespace std;

    int main(){
        
        int turismo;
        
        cout<<"Bem vindo à maceió!\n";
            while(1){
                cout<<"informe sua nescessidade abaixo\n"
                    <<"Digite - 2 para marcos históricos\n"
                    <<"Digite - 1 para praias\n"
                    <<"Digite - 3 para comidas resgionais\n";
                cin>>turismo;

         if(turismo == 1){
                cout<<"A capital alagoana tem uma das orlas urbanas mais bonitas do Brasil"<<endl
                    <<"Ponta Verde é conhecida por sua animação e também pelo letreiro com o nome da cidade, tradicional para fotos entre os turistas."
                    <<"Já a Jatiúca, com ondas mais fortes, é ideal para quem prefere mar mais agitado,"
                    <<"enquanto em Pajuçara, você poderá aproveitar um mar calminho com piscinas naturais, ver corais e peixinhos.";

        }else if(turismo == 2){
             cout<<"cu";
         }else {
            break;

        }
        return turismo;
        }
        return 0;
    }