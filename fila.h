#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename Tipo>

class Fila{
private:
    int fim, inicio;
    unsigned qtde;
    unsigned tamanho;
    Tipo *v;

public:
    //Fun��o inicializadora
    Fila(unsigned tam){
        fim = -1;
        inicio = 0;
        qtde = 0;
        tamanho = tam;
        v = new Tipo[tamanho];
    }

    ~Fila(){
        delete []v;
    }

    //Inserir no Fim
    void inserirFim(Tipo x){
        fim++;
        //Quando posi��o de Fim chegar no valor do tamanho
        if(fim == tamanho) {
            fim = 0;
        }
        v[fim] = x;
        qtde++;
    }

    //Inserir no In�cio
    void inserirInicio(Tipo x) {
        inicio--;
        if(inicio == -1){
            inicio = tamanho-1;
        }
        v[inicio] = x;
        qtde++;
    }

    //Remover do In�cio
    Tipo removerInicio(){
        Tipo temp = v[inicio]; //Guardar valor inicial na vari�vel tempor�ria
        inicio++;
        //Quando posi��o de In�cio chegar no valor do tamanho
        if(inicio == tamanho){
            inicio = 0;
        }
        qtde--;
        return temp;
    }

    //Remover do Fim
    Tipo removerFim() {
        Tipo temp = v[fim]; //Guardar �ltimo elemento da Fila
        fim--;
        if(fim == -1){
            fim = tamanho-1;
        }
        qtde--;
        return temp;
    }

    //Primeiro da Fila
    Tipo primeiro(){
        return v[inicio];
    }

    //�ltimo da Fila
    Tipo ultimo() {
        return v[fim];
    }

    bool filaCheia(){
        return qtde == tamanho;
    }

    bool filaVazia(){
        return qtde==0; //Se Fila estiver vazia, retornar� 0
    }

    int getFim(){
        return fim;
    }

    int getInicio(){
        return inicio;
    }

    int getQtde(){
        return qtde;
    }

    Tipo getValor(unsigned posicao){
        return v[posicao];
    }

    unsigned getTamanho(){
        return tamanho;
    }

};

#endif // FILA_H_INCLUDED
