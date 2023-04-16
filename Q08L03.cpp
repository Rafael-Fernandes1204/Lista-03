#include <iostream>
using namespace std;
// Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar
// ao monge a partir da leitura do número da casa desejada.
int main(){
    int i=0; 
    long int grao = 1;

    cout << "Informe a casa desejada: ";
    cin >> i;

    for(int j=1;j<i;j++){
        grao = grao*2;
    }
    cout << "O valor final de grãos no tabuleiro é de: " << grao;
}