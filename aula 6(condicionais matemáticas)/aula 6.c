#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variaveis
    int a = 5, b = 10, c = 15;
    char d ='x';

    //maior
    if (a > 2){
        printf("%d e maior que 2", a);
    }

    //maior ou igual
    if (c>= b){
        printf("\nA pariavel %d e maior ou igual a %d\n", c,b);
    }
    //menor
    if (a < 10){
        printf("%d e menor que 10\n",a);
    }

    if (a <= 10){
        printf("%d e menor ou igual a 10\n",a);
    }

    //diferente
    if (c != 10){
        printf("a variavel %d e diferente de 10\n",c);
    }
    if (d != a){
        printf("a variavel %c e diferente da variavel %d\n",d,a);
    }

 //Pausando
    system("pause");

}
