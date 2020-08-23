/*
9 - PROGRAMA CÁLCULOS – O usuário informa quatro valores. O programa mostra o resultado da
multiplicação do primeiro pelo terceiro e o resultado da soma do segundo com o quarto.
=======================================Jefferson=Bueno======================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    int n1, n2, n3, n4;

    //ENTRADA DE DADOS
    printf("-------------------------------------------------------\n");
    printf("PROGRAMA CAUCULOS\n");
    printf("DIGITE 4 NUMEROS INTEIROS APERTANDO ENTER ENTRE ELES: \n");
    printf("-------------------------------------------------------\n");
    scanf("%d %d %d %d" ,&n1, &n2, &n3, &n4);
    printf("-------------------------------------------------------\n");


    //PROCESSAMENTO


    //SAIDA DE DADOS
    printf("Voce digitou: %d %d %d %d\n", n1, n2, n3, n4);
    printf("Multiplicacao: %d e %d = %d\n", n1, n3, n1 * n3);
    printf("soma de: %d + %d = %d\n", n2, n4, n2 + n4);
    printf("-------------------------------------------------------\n");
    
    
    //MANTEM O CMD ABERTO
    system("pause");
    return 0;
}