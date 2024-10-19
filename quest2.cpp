#include <iostream>
#include <string>
using namespace std;

int main(){
    string entrada;
    cin >> entrada;

    int cont = 0;

    for(char c : entrada){
        if(c == 'a' || c == 'A'){
            cont++;
        }
    }

    if(cont){
        cout << "A letra 'a' aparece " << cont << " vezes na string!" << endl;
    }
    else{
        cout << "A letra 'a' não aparece na string!" << endl;
    }

    return 0;
}