#include <iostream>
using namespace std;

int main(){
    float media = 0;
    int matricula, aprovados = 0, reprovados = 0, recuperacao = 0;

    do{
        cout << "\nInforme a matricula: ";
        cin >> matricula;
        cout << "\nInforme a media: ";
        cin >> media;

        if(media>=7){
            aprovados++; 
        }else if(media<3 && media>=0){
            reprovados++;
        }else if(media<7 && media>=3){
            recuperacao++;
        }
        
        if(media>9){
           cout << "\nA nota desse aluno foi maior que 9 " << matricula; 
        }

    }while(media>=0);
    cout << "O total de alunos aprovados foi de: " << aprovados;
    cout << "\nO total de alunos reprovados foi de: " << reprovados;
    cout << "\nO total de alunos de recuperacao foi de: " << recuperacao;
}