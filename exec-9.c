/**Construa um programa (main) que aloque em tempo de execução (dinamicamente) uma
matriz de ordem m x n(linha por coluna), usando 1+m chamadas a função malloc. Agora,
aproveite este programa para construir uma função que recebendo os parametros m e n
aloque uma matriz de ordem m x n e retorne um ponteiro para esta matriz alocada. Crie
ainda uma função para liberar a área de memória alocada pela matriz. Finalmente, crie um
novo programa (main) que teste/use as duas funções criadas acima.*/

#include <stdio.h>
#include <stdlib.h>
int **aloca_matriz(int m, int n){
    int **mat;
    int i;

    mat = (int**) malloc(m * sizeof(int*));// Aloca vetor de ponteiros
    if (mat == NULL) return NULL;

    for (i = 0; i < m; i++) {
        mat[i] = (int*) malloc(n * sizeof(int)); // Aloca m linhas
        if (mat[i] == NULL) return NULL;
    }

    return mat;
}
void libera_matriz(int **mat, int m) {
    for (int i = 0; i < m; i++) {
        free(mat[i]); // libera cada linha
    }
    free(mat); // libera o vetor de ponteiros
}


int main(){
    int  **mat = NULL, m, n, i, j;
    printf("Quantas linhas a matriz tera? ");
    scanf("%d", &m);
    printf("Quantas colunas a matriz tera? ");
    scanf("%d", &n);


    mat = aloca_matriz(m, n);

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Matriz [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\n\n resultado.\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Matriz [%d][%d]: %d.\n", i,j,mat[i][j]);
        }
    }
    libera_matriz(mat, m); //Liberando o espaco usado pela matriz alocada.

    return 0;
}

/*Primeiro lê-se m e n, então chama a função para ler a matriz, e alocar dinamicamente, usa 1 malloc para alocar o vetor de ponteiros (nesse caso são as linhas), e m mallocs para as colunas, na função main os valores são lidos e impressos, por ultimo chama a função liberar_matriz para dar free nas linhas e colunas*/
