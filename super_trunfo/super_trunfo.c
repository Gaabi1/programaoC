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
    
    printf("Carta 1\n");
    
    printf("Estado letra A a H: ");
    scanf(" %c", &estado);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s" , numero);
    
    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer para evitar problemas com fgets()
    fgets(nome, 40, stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o '\n' do final, se existir
    
    printf("População: ");
    scanf(" %i" , &populacao);
    
    printf("Área: ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &PIB);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&turistico);

    char estado2;
    char numero2[4];
    char nome2[40];
    int populacao2;
    float PIB2;
    float area2;
    int turistico2;
    
    printf("Carta 2\n");
    
    printf("Estado letra A a H: ");
    scanf(" %c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s" , numero2);
    
    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer para evitar problemas com fgets()
    fgets(nome2, 40, stdin);
    nome[strcspn(nome2, "\n")] = 0; // Remove o '\n' do final, se existir
    
    printf("População: ");
    scanf(" %i" , &populacao2);
    
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &PIB2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&turistico2);

    printf("------Carta 1------- \nEstado: %c\n", estado); 
    printf("Código: %s\n", numero);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %i\n", populacao);
    printf("Área: %f\n", area); 
    printf("PIB: %f\n", PIB); 
    printf("Número de Pontos Turísticos: %i\n",turistico);

    printf("------Carta 2------ \nEstado: %c\n", estado2); 
    printf("Código: %s\n", numero2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %f\n", area2); 
    printf("PIB: %f\n", PIB2); 
    printf("Número de Pontos Turísticos: %i\n",turistico2);


}