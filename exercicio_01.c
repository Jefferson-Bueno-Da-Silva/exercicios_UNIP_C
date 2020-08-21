//------------------------------------------------
//1 - Receba do usuário dois números inteiros e exiba:
//a. imprima na tela sua soma;
//b. imprima na tela sua subtração;
//c. imprima na tela sua multiplicação;
//d. imprima na tela sua divisão;
//------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma, subtracao, multiplicacao;
    float divisao;

    printf("-------------------------------------------------------\n");
    printf("CALCULADORA DE SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO\n");
    printf("DIGITE UM NUMERO INTEIRO NEGATIVO OU POSITIVO:\n");
    scanf("%d",&a);
    printf("DIGITE UM SEGUNDO NUMERO INTEIRO NEGATIVO OU POSITIVO:\n");
    scanf("%d",&b);
    
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    float c = a;
    float d = b;
    divisao = c / d;

    printf("a soma de %d e %d e igual a: %d\n", a, b, soma);
    printf("a subtracao de %d e %d e igual a: %d\n", a, b, subtracao);
    printf("a divisao de %d e %d e igual a: %.2f\n", a, b, divisao);
    printf("a multiplicacao de %d e %d e igual a: %d\n",a, b, multiplicacao);
    
    
    
    printf("-------------------------------------------------------\n");
    system("pause");
    return 0;
}

