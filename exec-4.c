/*Crie um vetor V com n inteiros, onde n é um valor inteiro fornecido pelo
usuário. O vetor só deve ser alocado na memória depois que o usuário
fornecer o valor de n.*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int n;

    printf("digite o numero de elementos do vetor:\n ");
    scanf("%d", &n);

    int *V = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("digite o valor para V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    printf("Valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("V[%d] = %d\n", i, V[i]);
    }

    free(V);
    return 0;
}
/*obtem o tamanho do vetor com o usuário, depois aloca o espaço para o valor de n inteiros e libera a memória no final que está tudo alocado*/