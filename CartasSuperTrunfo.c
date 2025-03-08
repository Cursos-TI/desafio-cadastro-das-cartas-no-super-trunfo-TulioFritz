#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variavel do menu
    int opcao;
    int comparacao;
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

    //Menu Principal
    printf("   |  BEM VINDO |\n");
    printf("   |     AO     |\n");
    printf("   |SUPER TRUNFO|\n");
    printf("\n* Menu Principal *\n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Regras\n");
    printf("\n-Escolha uma opção-\n");
    scanf("%d", &opcao);

    //CADASTRO DAS CARTAS

    switch (opcao) {
        case 1:
    
    printf("--- Cadastro da 1ª Carta ---\n");

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
    break;
        case 2:
    printf("\n--- Explicação das Regras ---\n ");
    printf("1- Cadastre duas cartas com suas respectivas informações.\n");
    printf("2- Compare as cartas para saber quem vence!\n");
    printf("*Explicação de como funciona a comparação de cartas*\n");
    printf("Vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
    
        return 0;
    break;
        default:
    printf("Opção Inválida!");
    break;

    }

    //Comparação das cartas
    //Maior valor vence

    printf("\n---- Comparação de Cartas ----\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");
    printf("\n|Escolha um atributo para comparar|\n");
    scanf("%d", &comparacao);

    switch (comparacao) {
        case 1:
    
    if (populacao > populacao2){
        printf("\nPopulação: Carta 1 venceu!\n");
    }else {
        printf("\nPopulação: Carta 2 venceu!\n");
    }
    break;
        case 2:
    if (area > area2){
        printf("Área: Carta 1 venceu!\n");
    }else {
        printf("Área: Carta 2 venceu!\n");
    }
    break;
        case 3:
    if (pib > pib2 ){
        printf("PIB: Carta 1 venceu!\n");
    }else {
        printf("PIB: Carta 2 venceu!\n");
    }
    break;
        case 4:
    if (pontosturisticos > pontosturisticos2 ){
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    }else {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }
    break;
        case 5:
    if (densidadepopulacional < densidadepopulacional2 ){
        printf("Densidade Demográfica: Carta 1 venceu!\n");
    }else {
        printf("Densidade Demográfica: Carta 2 venceu!\n");
    }
    break;
        default:
    printf("Opção Inválida!");
    return 0;
    break;
    }
    
    //Apenas como "Backup"
    //if (pibpercapita > pibpercapita2){
        //printf("PIB per Capita: Carta 1 venceu!\n");
    //}else {
        //printf("PIB per Capita: Carta 2 venceu!\n");
    //}
    
    //if (superpoder > superpoder2 ){
        //printf("Super Poder: Carta 1 venceu!\n");
    //}else {
        //printf("Super Poder: Carta 2 venceu!\n");
    //} 

    //EXIBIÇÃO DOS DADOS
    //printf("\n--- Suas Cartas ---\n");

    //printf("\n *Carta 1* \n");
    //printf("Estado: %s\n", estado);
    //printf("Codigo da cidade: %s\n", codigodacidade);
    //printf("Nome da cidade: %s\n", nome);
    //printf("População: %d\n", populacao);
    //printf("Área: %.2f km²\n", area);
    //printf("PIB: %.2f bilhões de reais\n",pib);
    //printf("Pontos turísticos: %d\n", pontosturisticos);
    //printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    //printf("PIB per Capita: %.2f reais\n", pibpercapita);

    //printf("\n *Carta 2* \n");
    //printf("Estado: %s\n", estado2);
    //printf("Codigo da cidade: %s\n", codigodacidade2);
    //printf("Nome da cidade: %s\n", nome2);
    //printf("População: %d\n", populacao2);
    //printf("Área: %.2f km²\n", area);
    //printf("PIB: %.2f bilhões de reais\n", pib2);
    //printf("Pontos turísticos: %d\n", pontosturisticos2);
    //printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    //printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    

    return 0;
}
