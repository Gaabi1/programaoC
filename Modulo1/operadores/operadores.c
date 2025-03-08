#include <stdio.h>

int main ()
{
    int n1,n2;
    int soma, subtracao, divisao, multiplicacao;


    printf("Entre com o número 1: \n");
    scanf("%d", &n1);

    printf("Entre com o número 2: \n");
    scanf("%d", &n2);

    //soma
    soma= n1 + n2;

    //subtracao
    subtracao= n1 - n2;

    //multiplicacao
    multiplicacao= n1 * n2;

    //divisao
    divisao= n1/n2;

    printf("A soma é: %d\n" , soma);
    printf("A subtração é: %d\n",subtracao);
    printf("A multiplicação é : %d\n" , multiplicacao);
    printf("A divisão é: %d\n", divisao);

    return 0;
    
}