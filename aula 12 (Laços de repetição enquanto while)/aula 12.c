#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variáveis
    int a = 1, b = 10;

    //contando até 10
    while (a <=10){

        //imprimindo A na tela
        printf("\n %d",a);

    //incremento
    //no exemplo abaixo nós podemos usar a++ por ele aumentar de 1 em 1
    //mas se ele fosse aumentar de 2 em 2 ou mais temos que usar o formula a = a + 2 por exemplo
    a++; //= a + 1;

    }

    //contagem regressiva
    while (b >=1){

        //imprimindo B na tela
        printf("\n %d",b);

    //incremento
    b--; //- 1;

    }


system("pause");
}
