/*Escrever um programa que cadastre vários produtos em uma
estrutura/registro. Em seguida, imprima uma lista com o código e nome da
cada produto. Por último, consulte o preço de um produto através de seu
código*/
#include <stdio.h>
#include <stdlib.h>
#define PRODUTOS 3

struct produtos{
    char nome[50];
    int codigo;
    float preco;
};

int main(){
    struct produtos P[PRODUTOS];

    int i;
    int aux;

    for(i = 0 ; i < PRODUTOS; i++){
		fflush(stdin);
		printf("Informe o nome do %d.o produto: ", i+1);
        gets(P[i].nome);

		printf("Informe o codigo do produto: ");
		scanf("%d", &P[i].codigo);

		printf("Informe o preco do produto: ");
		scanf("%f", &P[i].preco);		
	}

    for(i = 0; i < PRODUTOS; i++){
		printf("Nome: %s\t", P[i].nome);
		printf("Codigo: %d\n", P[i].codigo);
	}

    printf("\nConsulte o preco do produto pelo seu codigo de barra: ");
	scanf("%d", &aux);
	for(i = 0; i < PRODUTOS; i++){
		if(P[i].codigo == aux){
			printf("Preco: %.2f", P[i].preco);
		}
    }
}

/*primeiro foi necessário definir a quantidade de produtos e criar a struct a qual tinha o nome do produto, o código e o preço.
o laço irá rodar a mesma quantidade de produtos definidas, com isso será possível cadastrar a quantidade que quiser. O código do produto é armazenado em aux e para ver o preço do produto basta ler qual está armazenado na variável aux.
*/