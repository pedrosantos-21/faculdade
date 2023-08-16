#include <bits/stdc++.h>
using namespace std;


    

int main(){
    float n1,n2,n3,medturma;
    cout<<"digite nota 1\n";
    cin>>n1;
    cout<<"digite nota 2\n";
    cin>>n2;
    cout<<"digite nota 3\n";
    cin>>n3;
    cout<<"digite a media da turma\n";
    cin>>medturma;
    float mediaaluno=(n1+n2+n3)/3;
    cout<<"a media final do aluno: "<<mediaaluno<<endl;

    if(mediaaluno<medturma){
        cout<<"o aluno esta abaixo da media\n";
    }else if(mediaaluno == medturma){
        cout<<"o aluno esta na media";
    }else{
        cout<<"o aluno esta acima da media";
    }

    return 0;
}
