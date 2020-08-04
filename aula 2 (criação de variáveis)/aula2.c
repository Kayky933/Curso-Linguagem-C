#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //definindo uma variável
    int a= 5, b;


    //imprimindo a variavel a
    printf("%d", a);

    //concatenando
    printf("\nO valor da variavel a he: %d", a);

    //mudando o valor da variável a
    a= 15;

    printf("\nO valor da variavel a he: %d", a);

    printf("\ndigite um valor para a variável b");

    //lendo valores
     scanf("%d", &b);

    printf("\nO valor da variavel b he: %d", b);


     //pula linhas
    printf("\n");

    //Imprime na tela
    printf("Boua pinguim anão");

    //Pausa o programa após executar
    system("pause");

}

