#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    //parte que é responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Varoável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 3)
    int aleatorio = rand() %3;

    //Varoável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() %5) + 1;

    //inprime o valor
    printf("%d\n",aleatorioSegundo);

    aleatorioSegundo = (rand() %5) + 1;

    printf("%d\n",aleatorioSegundo);



system("pause");
}
