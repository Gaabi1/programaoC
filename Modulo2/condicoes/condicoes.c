#include <stdio.h>

int main()
{
    float temp, umidade;
    unsigned int estoque, estoqueMinimo=100;

    printf("Temperatura: ");
    scanf("%f", &temp);

    printf("Umidade: ");
    scanf("%f", &umidade);

    printf("Estoque: ");
    scanf("%u", &estoque);

    if(temp > 30)
    { 
        printf("Temperatura acima do nível\n");
    }
    else
    {
        printf("Temperatura adequada\n");
    }
    if(umidade>50)
    {
        printf("Alta umidade\n");
    }
    else 
    {
        printf("Umidade adequada\n");
    }
    if(estoque<estoqueMinimo)
    {
        printf("Estoque baixo!\n");
    }
    else
    {
        printf("Estoque adequado\n");
    }
    return 0;
}