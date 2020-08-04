#include <stdio.h>
#include <stdlib.h>


void main(){

    //variáveis
    char palavra [10];

    //instrução
    printf("digite uma palavra");

    //limpar o Buffer
    setbuf(stdin,0);

    //ler a string
    fgets(palavra, 10, stdin);


    //limpa as casas não utilizadas
    palavra[strlen(palavra)-1] ='/0';

    printf("%s",palavra);





system("pause");
}
