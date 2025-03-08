#include <stdio.h>
#include <string.h>

// Criando as Cartas do Super Trunfo
int main()
{
    char estado;
    char numero[4];
    char nome[40];
    int populacao;
    float PIB;
    float area;
    int turistico;
    float densidade_populacional;
    float PIB_per_capita;

    printf("Carta 1\n");
    
    printf("Estado letra A a H: ");
    scanf(" %c", &estado);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s" , numero);
    
    printf("Nome da cidade: ");
    scanf("%s", nome);
    
    printf("População: ");
    scanf(" %i" , &populacao);
    
    printf("Área: ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &PIB);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&turistico);

    densidade_populacional= (float) populacao /area;
    PIB_per_capita= PIB / (float)populacao;

    char estado2;
    char numero2[4];
    char nome2[40];
    int populacao2;
    float PIB2;
    float area2;
    int turistico2;
    float densidade_populacional2;
    float PIB_per_capita2;
    
    printf("Carta 2\n");
    
    printf("Estado letra A a H: ");
    scanf(" %c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s" , numero2);
    
    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf(" %i" , &populacao2);
    
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &PIB2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&turistico2);

    densidade_populacional2= (float) populacao2/area2;
    PIB_per_capita2= PIB2 / (float)populacao2;
    
    float poder=(float)(populacao + area+ PIB + PIB_per_capita + turistico+ (1/densidade_populacional));
    float poder2=(float)(populacao2 + area2+ PIB2 + PIB_per_capita2 + turistico2+ (1/densidade_populacional2));

    printf("------Carta 1------- \n");
    printf("Estado: %c\n", estado); 
    printf("Código: %s\n", numero);
    printf("Nome da cidade: %s\n", nome);

    printf("------Carta 2------ \n");
    printf("Estado: %c\n", estado2); 
    printf("Código: %s\n", numero2);
    printf("Nome da cidade: %s\n", nome2); 
    
    printf("População carta 1: %i\n", populacao);
    printf("População carta 2: %i\n", populacao2);
    if (populacao>populacao2)
    {
        printf("Carta 1 venceu!\n");
    }
    else
    {
        printf("Carta 2 venceu!\n-----------------\n");
    }
    printf("Area carta 1: %f\n", area);
    printf("Área carta 2: %f\n", area2); 
    if (area>area2)
    {
        printf("Carta 1 venceu\n!");
    }
    else
    {
        printf("Carta 2 venceu!\n-----------\n");
    }
    printf("PIB: %f\n",PIB); 
    printf("PIB Carta 2: %f\n", PIB2);
    if (PIB>PIB2)
    {
        printf("Carta 1 venceu\n!");
    }
    else
    {
        printf("Carta 2 venceu!\n-----------\n");
    }
    printf("Número de Pontos Turísticos: %i\n",turistico);
    printf("Pontos Turísticos Carta 2: %i\n",turistico2);
    if (turistico>turistico2)
    {
        printf("Carta 1 venceu\n!");
    }
    else
    {
        printf("Carta 2 venceu!\n-------------\n");
    }
    printf("Densidade Populacional 1: %.2f\n",densidade_populacional);
    printf("Densidade populacional 2: %.2f\n", densidade_populacional2);
    if (densidade_populacional>densidade_populacional2)
    {
        printf("Carta 1 venceu\n!");
    }
    else
    {
        printf("Carta 2 venceu!\n-----------\n");
    }
    printf("O PIB per capita 1 é: %.2f\n", PIB_per_capita);
    printf("O PIB per capita 2 é: %.2f\n", PIB_per_capita2);
    if (PIB_per_capita>PIB_per_capita2)
    {
        printf("Carta 1 venceu\n!");
    }
    else
    {
        printf("Carta 2 venceu!\n-----------\n");
    }
    printf("Super poder Carta 1: %.2f\n", poder);
    printf("Super poder Carta 2: %.2f\n", poder2);
    if (poder>poder2)
    {
        printf("Carta 1 venceu\n!");
    }
    else
    {
        printf("Carta 2 venceu!\n--------------\n");
    }
    return 0;
   
}