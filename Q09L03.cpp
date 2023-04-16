#include <iostream>
using namespace std;

int main(){
    int dia, mes, diaMes, contador=0, diaSemana=1 ;
    //const int DOMINGO = 1, SEGUNDA =2, TERCA=3, QUARTA=4, QUINTA=5, SEXTA=6, sabado=7;
    cout << "Informe o mês: ";
    cin >> mes;
    cout << "Informe em que dia o mês começa:(1 para domingo e 7 para sabado:) ";
    cin >> dia;

    if(mes == 1 ||mes == 3 ||mes == 5 ||mes == 7 ||mes == 8 ||mes == 10 ||mes == 12){
        diaMes = 31;
    }else if(mes == 11 ||mes == 4 ||mes == 6 ||mes == 9){
        diaMes = 30;
    }else{diaMes = 28;}

    cout << "DOM SEG TER QUA QUI SEX SAB\n";
    while(diaSemana!=dia){
        diaSemana++;
        cout << "    ";
    }

    while(contador<diaMes){
        contador++;
        if(diaSemana!=1 && diaSemana%7==1){
            cout << "\n";
        }diaSemana++;
        if(contador<=9){
        cout << "0";
        }
        cout << contador << "  ";
    }
}