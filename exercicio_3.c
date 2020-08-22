/*
3 - Receba do usuário dois números inteiros e imprima na tela a média;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFININDO VARIAVEIS
    float a, b, m;

    //ENTRADA
    printf("-------------------------------------------------------\n");
    printf("CALCULADORA DE MÉDIA ARITIMETICA DE DOIS NUMERO\n");
    printf("DIGITE UM NUMERO INTEIRO:\n");
    scanf("%f",&a);
    printf("DIGITE UM SEGUNDO NUMERO INTEIRO:\n");
    scanf("%f",&b);
    printf("-------------------------------------------------------\n");
    
    //PROCESSAMENTO
    m = (a + b) / 2;


    //SAIDA
    printf("a m de %.1f e %.1f e igual a: %.2f\n", a, b, m);
    
    
    
    printf("-------------------------------------------------------\n");
    system("pause");
    return 0;
}
