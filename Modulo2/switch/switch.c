#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jogador, computador;
    srand(time(0));

    printf("-------Jogo Jokenpô-------\n");
    printf("Escolha uma opção\n");
    printf("Opção 1: Pedra\n");
    printf("Opção 2: Papel\n");
    printf("Opção 3: Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1;

    switch (jogador)
    {
    case 1:
        printf("Voce escolheu Pedra!\n");
        break;
    case 2:
        printf("Voce escolheu Papel!\n");
        break;
    case 3:
        printf("Voce escolheu Tesoura!\n");
        break;
    default:
        printf("Escolha uma opção valida!\n");
        break;
    }
    switch (computador)
    {
    case 1:
        printf("Computador escolheu Pedra!\n");
        break;
    case 2:
    printf("Computador escolheu Papel!\n");
        break;
    case 3:
    printf("Computador escolheu Tesoura!\n");
        break;
    }

    if (jogador==computador)
    {
        printf("## Empate!##\n");
    }
    else if ((jogador==1 && computador==3)||(jogador==2 && computador==1)||(jogador==3 && computador==2))
    {
        printf("Voce ganhou!\n!");
    }
    else
    {
        printf("Computador ganhou!\n");
    }
    
    
    return 0; 
}