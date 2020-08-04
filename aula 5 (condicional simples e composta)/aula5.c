#include <stdio.h>
#include <stdlib.h>


void main(){

    //definindo variáveis
    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';


    //condicional simples
    if(a == 5){
        printf("A variavel a e = 5\n");
    }
    if(b == 2.5){
        printf("A variavel b e = 2.5\n");
    }
    if(c == 'x'){
        printf("A variavel c e = x\n");
    }

    //numero par ou impar
    if(a % 2 == 1){
        printf("a variavel a e impar\n ");
    }else{
    printf("a variavel e par");
    }
    //condicional compista
    if(opcao ==1){
        printf("A opcao = 1");
    }else if(opcao == 2){
        printf("a opcao e igual a 2");
    }else{
        printf("a opcao nao e igual a 1 nem 2");
    }


 //Pausando
    system("pause");

}

