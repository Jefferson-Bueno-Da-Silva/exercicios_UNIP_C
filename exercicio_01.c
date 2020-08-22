/*
------------------------------------------------
1 - Receba do usuário dois números inteiros e exiba:
a. imprima na tela sua soma;
b. imprima na tela sua subtração;
c. imprima na tela sua multiplicação;
d. imprima na tela sua divisão;
------------------------------------------------
==============Jefferson=Bueno===================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definindo todas as variaveis
    int a, b, soma, subtracao, multiplicacao;
    float divisao;
    
    //display
    printf("-------------------------------------------------------\n");
    printf("CALCULADORA DE SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO\n");
    printf("DIGITE UM NUMERO INTEIRO NEGATIVO OU POSITIVO:\n");
    scanf("%d",&a);
    printf("DIGITE UM SEGUNDO NUMERO INTEIRO NEGATIVO OU POSITIVO:\n");
    scanf("%d",&b);
    printf("-------------------------------------------------------\n");
    
    //processamento
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    
    //transformei as variaveis em float, para que o resultado exiba numeros depois da virgula, se faz a divisão com numeros int
    //o resultado depois do ponto é sempre 0 exemplo: "0.551"
    float c = a;
    float d = b;
    divisao = c / d;

    printf("a soma de %d e %d e igual a: %d\n", a, b, soma);
    printf("a subtracao de %d e %d e igual a: %d\n", a, b, subtracao);
    //%.2f para limitar a quantidade de numeros depois da virgula
    printf("a divisao de %d e %d e igual a: %.2f\n", a, b, divisao);
    printf("a multiplicacao de %d e %d e igual a: %d\n",a, b, multiplicacao);
    
    
    //display
    printf("-------------------------------------------------------\n");
    system("pause");
    return 0;
}

