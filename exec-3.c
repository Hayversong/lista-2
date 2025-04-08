//Verifique o programa abaixo. Encontre o seu erro e corrija-o para que
//escreva o número 10 na tela.
#include <stdio.h>
int main() {
    int x, *p, **q;
    
        p = &x;
        q = &p;
        x = 10;
    
    printf("\n%d\n", **q);
    
    return(0);
}

/*o endereço estava sendo passado errado para %d no printf, erro consertado mudando &q para **q*/