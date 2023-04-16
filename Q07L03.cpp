#include <iostream>
using namespace std;

int main(){
    float total = 0, unitario;
    char operador;

    cout << "\nInforme um valor: ";
    cin >> total;
    
    while(operador!= '='){
    cout << "Informe a operação que deseja realizar: ";
    cin >> operador;
        if(operador!= '='){
    cout << "Informe um valor que deseja realizar: ";
    cin >> unitario;
    }
        if(operador == '+'){
        total+= unitario;
    }   else if(operador == '-'){
        total-= unitario;
    }   else if(operador == '*'){
        total*= unitario;
    }   else if(operador == '/'){
        total/= unitario;
    }
    }
    cout << "O total foi de: " << total;
}