#include <stdio.h>
#include <stdlib.h>

void main(){


    //definindo variaveis
    int a = 5;
    char b= 'x';

    //codigo de exemplo com if
    if (a = 1 ){
        printf("A opcao escolhida foi a 1\n");
    }else if (a == 2){
         printf("A opcao escolhida foi a 2\n");
    }else if (a == 3){
         printf("A opcao escolhida foi a 3\n");
    }else{
         printf("Opcao invalida");
    }
    //mesmo código de sima adaptado co switch
    switch(a){
        case 1:
            printf("A opcao escolhida foi a 1\n");
            break;
        case 2:
            printf("A opcao escolhida foi a 2\n");
            break;
        case 3:
            printf("A opcao escolhida foi a 3\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    //switch com char
    switch (b){
        case 'x':
        printf("A letra he x\n");
        break;
        default:
            printf("Opcao invalida");
            break;


    }






//Pausando
    system("pause");

}
