#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //definindo vari�veis
    int a = 6, b = 4;


    //soma:para somar vari�veis voc� pode colocar %d e depois especificar as variaveis
    //como est� escrito abaixo
    printf("A soma de %d e %d = %d\n",a,b, a + b);

    //subitra��o
    printf("A subitracao de %d e %d = %d\n",a,b, a - b);

    //divis�o
     printf("A divisao de %d e %d = %d\n",a,b, a / b);

     //multiplica��o
     printf("A multiplica��o de %d e %d = %d\n",a,b, a * b);

     //resto de divis�o
     printf("O resto da divisao entre %d e %d = %d\n",a,b, a % b);

        //valor absoluto
     printf("\n O valor absoluto de -3= %d", abs(-3));



    system("pause");

}
