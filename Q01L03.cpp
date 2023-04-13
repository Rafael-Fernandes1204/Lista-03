#include <iostream>
using namespace std;

int main(){
    int idade, novo = 10000, velho = 0;
    char contin;
    do{
        cout << "Informe sua idade: ";
        cin >> idade;
        if(idade>velho){
            velho = idade;
        }if(idade<novo){
            novo = idade;
        }
        cout << "Deseja adicionar outra pessoa? S - Sim, N - Não ";
        cin >> contin;
        system("cls");
    }while(contin == 'S'||contin == 's');

    cout << "A pessoa mais velha tem: " << velho << " anos";
    cout << "\nA pessoa mais nova tem: " << novo << " anos";
}