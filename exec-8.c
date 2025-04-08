/*Faça um programa que leia um valor n e crie dinamicamente um vetor de n
elementos e passe esse vetor para uma função que vai ler os elementos
desse vetor. Depois, no programa principal, o vetor preenchido deve ser
impresso. Além disso, antes de finalizar o programa, deve-se liberar a área
de memória alocada.*/
#include <stdio.h>
#include <stdlib.h>

void lerElementos(int *vetor, int i){
    int j;
    for(j=0;j<i;j++){
        printf("Elemento %d: ", j);
        scanf("%d", &vetor[j]);
    }
}

int main(){
    int *elementos, n, j;

    printf("Digite o valor de n': ");
    scanf("%d", &n);
    elementos = (int*) malloc(sizeof(int)*n);

    lerElementos(elementos, n);

    for(j=0;j<n;j++){
        printf("%d ", elementos[j]);
    }

    free(elementos);

    return(0);
}

/*primeiro criei uma função que recebe a entrada de um ponteiro para um vetor de inteiros e um valor i que representa o tamanho desse vetor, segundo, o usuário diz quantos elementos esse vetor vai ter, ele é alocado dinamicamente e depois imprime os valore depois que a função é chamada*/