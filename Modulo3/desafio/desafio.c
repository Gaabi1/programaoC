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
    
    do{
        printf("Escolha quem quer mover:\n");
        printf("1- Rainha\n");
        printf("2- Bispo\n");
        printf("3- Torre\n");
        printf("4- Cavalo\n"); 
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        switch(opcao)
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
        //Movimentos Bispo
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
        //Movimentos Torre
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
        case 4:
        //Movimentos Cavalo
            printf("Número de casas para cima : ");
            scanf("%d", &casas);
            printf("Vira 1 casa direita(1), Vira 1 casa esquerda(2)?");
            scanf("%d", &movimento);
            int loop=1;
            if(movimento==1)
            {   
                while(loop--)
                {
                    for(i=1; i<=casas; i++)
                    {
                        printf("Pra cima");
                        printf("\n");
                    }
                    printf("Direita\n");
                }
            
            }
            else if (movimento ==2)
            {
                while(loop--)
                {       
                    for(i=1; i<=casas; i++)
                    {
                        printf("Pra cima");
                        printf("\n");
                    }
                    printf("Esquerda\n");
                }   
            }
            else 
            {
                printf("Escolha uma opção valida\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    
    }while(opcao < 1 || opcao > 4);
    return 0;
}
