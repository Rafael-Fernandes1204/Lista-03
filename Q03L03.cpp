#include <iostream>
using namespace std;

int main(){
    int anos=0;
    float altChico = 1.50, altJuca = 1.10;

    while(altJuca<altChico){
        altJuca+=0.03;
        altChico+=0.02;
        anos++;
    }
    cout << "O tempo necessário para Juca alcançar Chico foi de: " << anos << " anos";

}