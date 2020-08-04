#include <stdio.h>
#include <stdlib.h>


void main(){

    //definindo variáveis
    int cont;

    //contando até 10
    for(cont =1; cont <=10; cont++){
        printf("\n%d", cont);
    }

    //fazendo uma tabuada
    for(cont =1; cont <=10; cont++){
        printf("\n5 X %d = %d",cont, cont * 5);
    }

    //contando de 2 em 2
    for(cont =0; cont <=10; cont = cont + 2){
        printf("\n%d",cont);
    }

    //contagem regreciva
    for(cont = 10; cont >0; cont--){
        printf("\n%d",cont);
    }


    system("pause");
}
