#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Dupla Fila em Alocação Sequencial" << endl;

    unsigned tamanho;
    int opc, valor;
    cout<<"\nQual o Tamanho da Fila? ";

    cin>>tamanho;
    Fila<int> f(tamanho);

    //Menu
    do{
        cout<<"\n1  -  Inserir (fim)"<<endl;
        cout<<"2  -  Remover (início)"<<endl;
        cout<<"3  -  Primeiro"<<endl;
        cout<<"4  -  Exibir a fila"<<endl;
        cout<<"5  -  Inserir (início)"<<endl;
        cout<<"6  -  Remover (fim)"<<endl;
        cout<<"7  -  Último"<<endl;
        cout<<"8  -  Fim"<<endl;
        cout<<"\nSelecione:";
        cin>>opc;

        switch(opc){
            //Inserir no Fim
            case 1:
                if(f.filaCheia()){
                    cout<<"Fila Cheia...."<<endl;
                }
                else{
                    cout<<"\nDigite o valor: ";
                    cin>>valor;
                    f.inserirFim(valor);
                    //cout<<"Sucesso....."<<endl;
                }
                break;

            //Remover do Início
            case 2:
                if(f.filaVazia()){
                    cout<<"Fila Vazia..."<<endl;
                }
                else{
                    cout<<"\nRemovido: "<<f.removerInicio()<<endl;
                }
                break;

            //Primeiro da Fila
            case 3:
                if(f.filaVazia()){
                    cout<<"Fila Vazia..."<<endl;
                }
                else{
                    cout<<"\nPrimeiro: "<<f.primeiro()<<endl;
                }
                break;

            //Exibir a Fila
            case 4:
                if (f.filaVazia()){
                    cout<<"Fila Vazia....";
                }
                else if (int i = f.getInicio() > f.getFim()){
                    for(int i = f.getInicio(); i < f.getTamanho(); i++){
                        cout<<f.getValor(i)<<" ";
                    }
                    for(int i = 0; i <= f.getFim(); i++){
                        cout<<f.getValor(i)<<" ";
                    }
                }
                else{
                    for(int i = f.getInicio(); i <= f.getFim(); i++){
                        cout<<f.getValor(i)<<" ";
                    }
                }
                cout<<endl;
                break;

            //Inserir no Início
            case 5:
                if(f.filaCheia()){
                    cout<<"Fila Cheia...."<<endl;
                }
                else{
                    cout<<"\nDigite o valor: ";
                    cin>>valor;
                    f.inserirInicio(valor);
                    //cout<<"Sucesso......."<<endl;
                }
                break;

            //Remover do Fim
            case 6:
                if(f.filaVazia()){
                    cout<<"Fila Vazia..."<<endl;
                }
                else{
                    cout<<"\nRemovido do Final: "<<f.removerFim()<<endl;
                }
                break;

            //Último da Fila
            case 7:
                if(f.filaVazia()){
                    cout<<"Fila Vazia..."<<endl;
                }
                else{
                    cout<<"\nÚltimo: "<<f.ultimo()<<endl;
                }
                break;

            //Fim
            case 8:
                cout<<"Fim...."<<endl;
                return 0;
                break;

            default:
                system("cls");
                continue;
                break;
        }
        cout<<"\n\n";
        system("pause");
        system("cls");

    }while (opc != 8);
}
