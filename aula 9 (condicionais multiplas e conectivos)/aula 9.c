#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variaveis
    int a = 10;

    //conectivo l�gico E (AND), se uma compara��o for falsa n�o entra no bloco
    if(a > 5 && a <15){
        printf("A variavel 'a' esta entre 5 e 15\n");
    }

     //conectivo l�gico ou (or), se uma compara��o for verdadeira entra no bloco
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

