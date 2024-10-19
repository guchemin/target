#include <iostream>
using namespace std;

bool pertenceFib(int n){
    if(n == 0 || n == 1){
        return true;
    }

    int a = 0, b = 1, prox = 0;

    while(prox < n){
        prox = a + b;
        a = b;
        b = prox;
    }

    return (prox == n);
}

int main(){
    int entrada;
    cin >> entrada;

    if(pertenceFib(entrada)){
        cout << "O número " << entrada << " pertence à sequência!" << endl; 
    }
    else{
        cout << "O número " << entrada << " não pertence à sequência!" << endl;
    }

    return 0;
}