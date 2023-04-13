#include <iostream>
using namespace std;

int main(){
    int n, i, j=0;

    cout << "Informe um número: ";
    cin >> n;

    for(i=1; i<n; i++){
        if(n%i==0){
            j+=i;
        }
    }
    if(j==n){
        cout << "O número é perfeito!";
    }else {
        cout << "O número não é perfeito!";
    }
}