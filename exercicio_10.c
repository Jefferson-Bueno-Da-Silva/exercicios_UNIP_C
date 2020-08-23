/*
10 -  Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a
idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
=======================================Jefferson=Bueno======================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    int anos, meses, dias, idade;

    //ENTRADA DE DADOS
    printf("-------------------------------------------------------\n");
    printf("QUANTOS DIAS VOCE JA VIVEU ?\n");
    printf("DIGITE SUA IDADE EM ANOS MESES E DIAS RESPECTIVAMENTE: \n");
    printf("-------------------------------------------------------\n");
    scanf("%d %d %d" ,&anos, &meses, &dias);
    printf("-------------------------------------------------------\n");


    //PROCESSAMENTO
    idade = (anos * 365) + (meses * 30) + dias;

    //SAIDA DE DADOS
    printf("Voce me disse que tem %d anos, %d meses, %d dias de vida\n", anos, meses, dias);
    printf("Voce ja viveu %d dias\naproveite sua vida :)\n",idade);
    printf("-------------------------------------------------------\n");
    
    
    //MANTEM O CMD ABERTO
    system("pause");
    return 0;
}