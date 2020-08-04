#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //definindo variaveis
    bool a = true, b = false;


    //no caso de valores booleanos que são apenas verdadeiro e falso, não é necessario simbolos como =>
    //se a for verdadeiro
    if(a){
        printf("A e verdadeiro\n");
    }

    //se b for falso
    if(b){
        printf("B e verdadeiro\n");
    }else{
        printf("B e falso\n");
    }

    //comparando uma falsedade
    if (!b){
        printf("B e falso\n");
    }


 //Pausando
    system("pause");

}
