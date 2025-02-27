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
    float densidadepopulacional;
    float pibpercapita;
    float superpoder;

    //variáveis para a segunda carta
    char estado2[100];
    char codigodacidade2[5];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    //CADASTRO DAS CARTAS
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

    densidadepopulacional = (float) (populacao + area) / 2;

    pibpercapita = (float) (pib + populacao) / 2;

    superpoder = populacao + area + pib + pontosturisticos + pibpercapita + (1 / densidadepopulacional);

    //CADASTRO DA SEGUNDA CARTA
    printf("\n--- Cadastro da 2ª Carta ---\n");

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

    densidadepopulacional2 = (float) (populacao2 + area2) / 2;

    pibpercapita2 = (float) (pib2 + populacao2) / 2;

    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    //EXIBIÇÃO DOS DADOS
    printf("\n--- Suas Cartas ---\n");

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", codigodacidade2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    //Comparação das cartas

    printf("\n---- Comparação de Cartas ----\n");
    printf("População: Carta %d venceu\n", populacao > populacao2);
    printf("Área: Carta %d venceu\n", area > area2);
    printf("PIB: Carta %d venceu\n", pib > pib2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: Carta %d venceu\n", densidadepopulacional > densidadepopulacional2);
    printf("PIB per Capita: Carta %d venceu\n", pibpercapita > pibpercapita2);
    printf("Super Poder: Carta %d venceu\n", superpoder > superpoder2);
    

    return 0;
}
