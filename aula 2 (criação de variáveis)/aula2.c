#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //definindo uma vari�vel
    int a= 5, b;


    //imprimindo a variavel a
    printf("%d", a);

    //concatenando
    printf("\nO valor da variavel a he: %d", a);

    //mudando o valor da vari�vel a
    a= 15;

    printf("\nO valor da variavel a he: %d", a);

    printf("\ndigite um valor para a vari�vel b");

    //lendo valores
     scanf("%d", &b);

    printf("\nO valor da variavel b he: %d", b);


     //pula linhas
    printf("\n");

    //Imprime na tela
    printf("Boua pinguim an�o");

    //Pausa o programa ap�s executar
    system("pause");

}

