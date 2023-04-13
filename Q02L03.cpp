#include <iostream>
using namespace std;

int main(){
    int numCart, numMult, maiorNumMult = 0, cont = 1, cartMaior = 0;
    float valorMult = 0, valorDiv = 0, totalMult = 0, maiorMult = 0;
    char fim;
    do{
        cout << "Informe o número da sua carteira de motorista: ";
        cin >> numCart;
        cout << "Informe o número de multas: ";
        cin >> numMult;
        
        for(cont=1; cont<=numMult; cont++){
            cout << "Informe o valor da sua multa: ";
            cin >> valorMult;
            valorDiv+= valorMult;

            if(maiorMult<valorMult){
                maiorMult = valorMult;
            }
            if(maiorNumMult<numMult){
                maiorNumMult = numMult;
                cartMaior = numCart;
            }
            totalMult+= valorMult; 
        }
        cout << "Deseja cadastrar outro motorista? S- sim, N- não   ";
        cin >> fim;
        system("cls");
    }while(fim == 'S'|| fim == 's');

    cout << "O motorista com o maior número de multas foi: " << cartMaior << " seu número de multas foi de: "
     << maiorNumMult << "\nA maior multa foi de: " << maiorMult;
    cout << "\nO valor total arrecadado foi de R$: " << totalMult;
}