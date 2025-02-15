#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char codigodacidade[5];
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    //CADASTRO DAS CARTAS

    printf("Digite o código da cidade: \n");
    scanf("%s", codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    //EXIBIÇÃO DOS DADOS

    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.3f\n",pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    

    return 0;
}
