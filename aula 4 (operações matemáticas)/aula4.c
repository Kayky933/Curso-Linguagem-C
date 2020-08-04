#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //definindo variáveis
    int a = 6, b = 4;


    //soma:para somar variáveis você pode colocar %d e depois especificar as variaveis
    //como está escrito abaixo
    printf("A soma de %d e %d = %d\n",a,b, a + b);

    //subitração
    printf("A subitracao de %d e %d = %d\n",a,b, a - b);

    //divisão
     printf("A divisao de %d e %d = %d\n",a,b, a / b);

     //multiplicação
     printf("A multiplicação de %d e %d = %d\n",a,b, a * b);

     //resto de divisão
     printf("O resto da divisao entre %d e %d = %d\n",a,b, a % b);

        //valor absoluto
     printf("\n O valor absoluto de -3= %d", abs(-3));



    system("pause");

}
