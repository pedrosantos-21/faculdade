#include <iostream>

using namespace std;

int main(){

    double preco[10] = {14.55, 1.1, 2, 9.68};

    for(int i = 0; i<=9; i++){
   //           preco[i] = 0
        cout << preco[i] << endl;
    }

    /*14.55
    1.1
    2
    9.68
    8.49119e-314 >
    8.45387e-307 >
    1.78797e-307 >
    8.45365e-307 -> LIXO 
    1.78797e-307 >
    5.60291e-306 >
    */

    return 0;
}