//Escreva um comentário em cada comando de atribuição explicando o que
//ele faz e o valor da variável à esquerda do '=' após sua execução.
int main()
{
    int y, *p, x;
    
    y = 0;//atribui o valor de y a 0
    p = &y;//faz p apontar para o endereço de y, então p contem o endereço de y
    x = *p;//atribui a x o valor apontado por p, ou seja y = 0, então x = 0
    x = 4;//atribui o valor de x a 4
    (*p)++;//incrementa o valor apontado por p em 1, ou seja, y = 1
    x--;//decrementa o valor de x em 1, então x = 3
    (*p) += x;//soma x ao valor apontado por p, ou seja, 3 + 1, então agora y = 4
    printf ("y = %d\n", y);//imprime y = 4
    
    return(0);
}