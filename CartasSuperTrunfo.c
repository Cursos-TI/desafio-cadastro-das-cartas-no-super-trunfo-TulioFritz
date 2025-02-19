#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //variáveis para a primeira carta
    char estado[100];
    char codigodacidade[5];
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    //variáveis para a segunda carta
    char estado2[100];
    char codigodacidade2[5];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //CADASTRO DA PRIMEIRA CARTA
    printf("\n---- Cadastro da 1ª Carta ----\n");

    printf("Digite o Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da cidade (EX: A01, B02): \n");
    scanf("%s", codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (Bilhões): \n");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    //CADASTRO DA SEGUNDA CARTA
    printf("\n---- Cadastro da 2ª Carta ----\n");

    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da cidade (EX: A01, B02): \n");
    scanf("%s", codigodacidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a populção: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (Bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    //EXIBIÇÃO DOS DADOS
    printf("\n---- Suas Cartas ----\n");

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", codigodacidade2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    

    return 0;
}
