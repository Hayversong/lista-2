/*Escreva um programa em linguagem C que imprimam na tela a string s na
ordem inversa utilizando ponteiros.
char s[10] = "abcde";
char* cptr;*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[10] = "abcde";
    char* cptr = s;
    int len = strlen(s);
    
    for(int i = len - 1; i >= 0; i--){
        // Acessa os caracteres usando ponteiro
        printf("%c", *(cptr + i));
    }
    printf("\n");

    return 0;
}

/*primeiro usei o ponteiro para apontar para o inicio da string e depois dentro do laço o ponteiro vai acessar a posição i da string então vai rodar o for do final até o inicio para imprimir a string ao contrário*/

