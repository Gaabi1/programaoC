#include <stdio.h>

int main()
{
    int torre;
    int bispo;
    int rainha;
    int casas;
    int opcao;
    int i;
    int movimento;
    
    //Numero de casas
    
    printf("Escolha quem quer mover:\n");
    printf("1- Rainha\n");
    printf("2- Bispo\n");
    printf("3- Torre\n");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
    //Movimentos Rainha
        printf("Número de casas : ");
        scanf("%d", &casas);
        printf("Direita(1), esquerda(2), cima(3) ou embaixo(4)?");
        scanf("%d", &movimento);
        for(i=1; i<=casas; i++)
        {
            if (movimento==1)
            {   
                printf("Direita");
                printf("\n");
            }
            else if (movimento==2)
            {
                printf("Esquerda");
                printf("\n");
            }
            else if (movimento==3)
            {
                printf("Pra cima");
                printf("\n");
            }
            else if (movimento==4)
            {
                printf("Para baixo");
                printf("\n");
            }
            else
            {
                printf("Digite uma opção valida");
            }
        }
        break;
    case 2:

        printf("Número de casas : ");
        scanf("%d", &casas);
        printf("Pra cima direita(1), Pra cima esquerda(2)?");
        scanf("%d", &movimento);
        i=1;
        while(i<=casas)
        {
            if (movimento ==1)
            {
                printf("Pra cima direita");
                i++;
                printf("\n");
            }
            else if(movimento==2)
            {
                printf("Pra cima esquerda");
                i++;
                printf("\n");
            }
            else 
            {
                printf("Escolha uma opção valida");
            }
        }
        break;
    case 3:
        printf("Número de casas : ");
        scanf("%d", &casas);
        printf("Pra cima direita(1), Pra cima esquerda(2)?");
        scanf("%d", &movimento);
        i=1;
        while(i<=casas)
        {
            if (movimento ==1)
            {
                printf("Pra cima direita");
                i++;
                printf("\n");
            }
            else if(movimento==2)
            {
                printf("Pra cima esquerda");
                i++;
                printf("\n");
            }
            else 
            {
                printf("Escolha uma opção valida");
            }
        }   
        break;
    default:
        printf("Digite uma opção valida ");
        
        break;
    }

}
