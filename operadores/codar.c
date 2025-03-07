#include <stdio.h>

int main ()
{
    float nota1, nota2, nota3;
    float media;
    
    printf("*** Programa que calcula média *** \n");
    
    printf("Entre com a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);

    printf("Entre com a primeira nota: ");
    scanf("%f", &nota3);

    media= (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.2f\n", media);

    return 0; 

}