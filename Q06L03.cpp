#include <iostream>
using namespace std;

int main(){
    int c, numero =5, tentativas = 0;
    
    do{
        tentativas ++;
        cout << "\nInforme o número de 1 a 10 que você deseja tentar:  ";
        cin >> c;
        while(c>10||c<=0){
        cout << "Informe um número válido de 1 a 10:  ";
        cin >> c;
        }
        if (c>numero){
            cout << "O número secreto é menor que este valor";
        }else if(c<numero){
            cout << "O número secreto é maior que este valor";
        }else{
            cout << "Você acertou o número, o valor era de: " << numero;
            break;
        }
    }while(tentativas <3);
    if(numero!=c){
        cout << "Você excedeu o número, o valor era de: " << numero;
    }
}