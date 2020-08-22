/*
5 - Escreva um programa para ler as dimensões de um retângulo (base e altura), 
calcular e escrever a área do retângulo.
==========================Jefferson=Bueno=====================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float b, h, area;

    //ENTRADA
    printf("-------------------------------------------------------\n");
    printf("CALCULE DE AREA DE UM RETANGULO \n");
    printf("DIGITE O TAMANHO DA BASE EM MENTROS: \n");
    scanf("%f",&b);
    printf("DIGITE O TAMANHO DA ALTURA EM METROS: \n");
    scanf("%f",&h);
    printf("-------------------------------------------------------\n");
    
    //PROCESSAMENTO
    area = b * h;


    //SAIDA
    printf("A AREA DO RETANGULO = %.2f metros quadrados \n",area);
    
    
    
    printf("-------------------------------------------------------\n\n\n");
    
    //MANTEM O CMD ABERTO
    system("pause");
    return 0;
}
