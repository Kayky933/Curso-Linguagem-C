#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variaveis
    int a = 10;

    //conectivo lógico E (AND), se uma comparação for falsa não entra no bloco
    if(a > 5 && a <15){
        printf("A variavel 'a' esta entre 5 e 15\n");
    }

     //conectivo lógico ou (or), se uma comparação for verdadeira entra no bloco
    if(a > 5 || a >15){
        printf("A variavel 'a' he maior que 5 ou 15\n");
    }

     //Misturando conectivos
    if( (a > 5 && a <15) || a ==20){
        printf("A variavel 'a' esta entre 5 e 15 ou ela vale 20 \n");
    }

//Pausando
    system("pause");

}

