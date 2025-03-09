#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jogador, computador, resultado;
    char opcao;
    srand(time(0));
    computador = rand() % 100 + 1;
    
    //Inicio Jogo
    printf("-------Jogo de comparação--------\n");
    printf("Escolha o tipo de comparação\n");
    printf("M - Maior número\n");
    printf("N - Menor número\n");
    printf("I - Número igual \n");
    
    printf("Digite a opção: ");
    scanf("%c", &opcao);

    printf("Digite um número de 1 a 100: ");
    scanf("%d", &jogador);
    printf("O número do computador é: %d\n", computador);

    switch (opcao)
    {
    case 'M':
    case 'm':
        
        printf("------Voce escolheu a opção Maior número-------\n");
        resultado = (jogador > computador)? 1:0;

        break;
    case 'N':
    case 'n' :
        
        printf("----Voce escolheu a opção Menor número------\n");
        resultado= (jogador<computador)? 1:0;

        break;
    
    case 'I':
    case 'i':
        
        printf("-----Voce escolher a opção igual-----\n");
        resultado= (jogador=computador)? 1:0;

        break;

    default:

        printf("------Opção de jogo invalida------\n");
        
        break;
    }
    if (resultado==1)
        {
            printf("Voce ganhou!!\n");
        }
        else
        {
            printf("Voce perdeu!\n");
        }

    return 0;

}