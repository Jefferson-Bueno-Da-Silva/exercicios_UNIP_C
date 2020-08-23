/*
8 - PROGRAMA QUADRADO 2.0 – O usuário informa três números inteiros, o programa soma esses
três valores e depois mostra o quadrado do resultado obtido.
=======================================Jefferson=Bueno======================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    int n1, n2, n3, soma, quad;

    //ENTRADA
    printf("-------------------------------------------------------\n");
    printf("PROGRAMA QUADRADO\n");
    printf("DIGITE 3 NUMEROS INTEIROS APERTANDO ENTER ENTRE ELES: \n");
    printf("-------------------------------------------------------\n");
    scanf("%d %d %d",&n1, &n2, &n3);
    printf("-------------------------------------------------------\n");

    //PROCESSAMENTO
    soma = n1 + n2 + n3;
    quad = soma * soma;
    

    //SAIDA DE DADOS
    printf("A soma dos numeros %d + %d + %d = %d\n",n1, n2, n3, soma);
    printf("%d ao quadrado = %d\n", soma, quad);
    printf("-------------------------------------------------------\n");

    //MANTEM O CMD ABERTO
    system("pause");
    return 0;


}
