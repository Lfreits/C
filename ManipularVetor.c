#include <stdio.h>
#include <stdlib.h>

//Pedir o tamanho do vetor, criar elementos aleatórios entre 0 - 100, somar todos os elementos, fazer a média deles.
//Criando um método para cada passo e utilizando ponteiros para manipular o vetor entre os métodos.

int main(){
int num, soma;
    num = NUMERO();
    int vet[num];
    VETOR(num, vet);
    soma = SOMA(num, vet);
    MEDIA(num, soma);
    system("pause");
    return 0;
}

int NUMERO(){
    int num;
    printf("Informe um número inteiro (0-100)\n>>> ");
    scanf("%d", &num);
    return num;
}

void VETOR(int num, int *vet){
    srand(time(NULL));
    for(int aux = 0; aux < num; aux++){
        vet[aux] = (int)rand() % 101;
        printf("%d\n", vet[aux]);
    }
}

int SOMA(int num, int *vet){
    int soma;
    for(int aux = 0; aux < num; aux++){
        soma += vet[aux];
    }
    soma -= num;
    printf("Soma = %d\n", soma);
    return soma;
}

void MEDIA(int num, int soma){
    float media;
    media = (float)soma/(float)num;
    printf("Média = %f\n", media);
}

