/*
7 - PROGRAMA INVERSOR – O USUÁRIO DIGITA 4 NÚMEROS SEPARADAMENTE E O
PROGRAMA MOSTRA OS NÚMEROS NA ORDEM INVERSA. EX: DIGITOU: 1 2 3 4 MOSTRA:
4 3 2 1
==============================Jefferson=Bueno============================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININFO VARIAVEIS
    int n1, n2, n3, n4;

    //ENTRADA
    printf("-------------------------------------------------------\n");
    printf("INVERSOR \n");
    printf("DIGITE UMA SEQUENCIA DE NUMEROS PRESSIONANDO ENTER ENTRE ELES, EXEMPLO:\n1\n2\n3\n4\n");
    printf("-------------------------------------------------------\n");
    scanf("%d %d %d %d",&n1, &n2, &n3, &n4);
    printf("-------------------------------------------------------\n");


    //PROCESSAMENTO

    //SAIDA
    printf("Voce digitou : %d %d %d %d\nO inverso dessa sequencia e: %d %d %d %d\n", n1, n2, n3, n4, n4, n3, n2, n1);
    //MANTEM O CMD ABERTO
    system("pause");
    return 0;
}
