/*
6 - PROGRAMA QUADRADO – O usuário digita um número e o programa retorna o quadrado deste
número (o número multiplicado por ele mesmo).
=====================================Jefferson=Bueno=====================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    int n;

    //ENTRADA
    printf("-------------------------------------------------------\n");
    printf("PROGRAMA QUADRADO \n");
    printf("DIGITE UM NUMERO PARA VER O SEU QUADRADO: \n");
    scanf("%d",&n);
    printf("-------------------------------------------------------\n");

    //PROCESSAMENTO E SAIDA
    printf("O NUMERO %d AO QUADRADO E IGUAL A %d \n", n, n * n);   
    printf("-------------------------------------------------------\n\n\n");
    
    //MANTEM O CMD ABERTO
    system("pause");
    return 0;
}
