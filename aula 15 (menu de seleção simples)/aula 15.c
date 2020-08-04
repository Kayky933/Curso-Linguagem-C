#include <stdio.h>
#include <stdlib.h>

void main(){

    int opcao;

    //interface do menu
    printf("escolha uma opcao");
    printf("\n1-opcao");
    printf("\n2-opcao");
    printf("\n3-opcao\n\n");


    //lendo a opcao
    scanf("%d", &opcao);


    switch(opcao){
        case 1:
        printf("\na opcao escolhida foi a 1\n");
            break;
         case 2:
        printf("\na opcao escolhida foi a 2\n");
            break;
         case 3:
        printf("\na opcao escolhida foi a 3\n");
            break;
         default:
            printf("opcao invalida, escolha outra\n");
            break;
    }


system("pause");
    }



