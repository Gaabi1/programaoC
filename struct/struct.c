#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Novos tipos de dados
//Typedef struct

typedef struct{
    char nome[100];
    int idade;
    float altura;
    char sexo;
    char profissao[100];
}Pessoa;

int main(){
    Pessoa pessoa1;
    strcpy(pessoa1.nome, "Gabi");
    pessoa1.idade= 22;
    pessoa1.altura= 1.60;
    pessoa1.sexo= 'f';
    strcpy(pessoa1.profissao,"Backend");

    printf("Nome: %s\nIdade: %d\nAltura: %.2f\nSexo: %c\nProfissão: %s\n",pessoa1.nome, pessoa1.idade, pessoa1.altura, pessoa1.sexo, pessoa1.profissao);
    
    return 0;
}





