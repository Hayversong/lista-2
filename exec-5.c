/*Crie um programa para manipular vetores com ponteiros. O seu programa
deve implementar uma função chamada inverte_vetor, que recebe como
parâmetro dois vetores V1 e V2, ambos de tamanho N. A função deve copiar
os elementos de V1 para V2 na ordem inversa. Ou seja, se a função receber
V1 = {1,2,3,4,5}, a função deve copiar os elementos para V2 na seguinte
ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar o maior
valor encontrado em V1. A função deve obedecer ao seguinte protótipo: int
inverte_vetor(int *v1, int *v2, int n).*/
#include <stdio.h>
#include <stdlib.h>


int inverte_vetor(int *v1, int *v2, int n) {
    int maior = v1[0];

    for (int i = 0; i < n; i++) {
        if (v1[i] > maior) {//pega o maior valor do vetor
            maior = v1[i];
        }
        v2[n - 1 - i] = v1[i]; //joga o valor de v1 em v2 na ordem inversa
    }

    return maior;
}

int main() {
    int n;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int *v1 = (int *)malloc(n * sizeof(int));
    int *v2 = (int *)malloc(n * sizeof(int));

    printf("Digite os valores do vetor V1:\n"); // Leitura dos valores de v1
    for (int i = 0; i < n; i++) {
        printf("V1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    int maior = inverte_vetor(v1, v2, n); //chama a função para inverter os valores

    printf("\nVetor V1:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\nVetor V2 (invertido):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n\nMaior valor em V1: %d\n", maior);

    free(v1); //liberação de memória v1
    free(v2); //liberação de memória v2

    return 0;
}

/*primeiro foi necessário obter o maior valor do vetor, depois copiar o valor do vetor 1 para o vetor 2
e por fim retornar o valor maior do vetor 1, usei alocação dinâmica porque me parecia ser o método mais simples de aplicar na main*/