/*
4 - Escreva um programa para ler um valor (do teclado) e escrever (na tela) o seu antecessor e
sucessor.
=============================Jefferson=Bueno==================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float a;

    //ENTRADA
    printf("-------------------------------------------------------\n");
    printf("VEJA O ANTECESSOR E O SUCESSOR DE QUALQUER NUMERO:\n");
    printf("DIGITE UM NUMERO (INTEIRO OU REAL):\n");
    scanf("%f",&a);
    
    //PROCESSAMENTO E SAIDA
    printf("o numero escrito foi %.1f\nseu antecessor = %.2f\nseu sucessor = %.2f\n", a, a - 1, a + 1);
    printf("-------------------------------------------------------\n");
    
    //PAUSA NO CMD.
    system("pause");
    return 0;
}