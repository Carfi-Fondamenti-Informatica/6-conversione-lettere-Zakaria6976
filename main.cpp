#include <iostream>
#include "lib.h"

using namespace std;
int main(){
    char a;
    cin >> a;
    if (!verifica( a)) {
        cout << "errore"<<endl;
    }else{
        cout <<conversione(a)<<endl;
    }
    return 0;
}
