#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    //parte que � respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Varo�vel que recebe o resto da divis�o do n�mero por 3 (aleat�rio entre 0 e 3)
    int aleatorio = rand() %3;

    //Varo�vel que recebe o resto da divis�o do n�mero por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() %5) + 1;

    //inprime o valor
    printf("%d\n",aleatorioSegundo);

    aleatorioSegundo = (rand() %5) + 1;

    printf("%d\n",aleatorioSegundo);



system("pause");
}
