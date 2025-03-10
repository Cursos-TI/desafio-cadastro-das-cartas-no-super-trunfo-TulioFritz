#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variavel do menu
    int opcao;
    int comparacao, comparacao2, resultado, resultado2;
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

    densidadepopulacional = (float) (populacao / area);

    pibpercapita = (float) (pib / populacao);

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

    densidadepopulacional2 = (float) (populacao2 / area2);

    pibpercapita2 = (float) (pib2 / populacao2);

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
    printf("\n|Escolha o primeiro atributo para comparar|\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");
    printf("\nEscolha: \n");
    scanf("%d", &comparacao);

    switch (comparacao) {
        case 1:
    printf("Você escolheu a opção População\n");
    resultado = populacao > populacao2 ? 1 : 0;
    break;
        case 2:
    printf("Você escolheu a opção Área\n");
    resultado = area > area2 ? 1 : 0;
    break;
        case 3:
    printf("Você escolheu a opção PIB\n");
    resultado = pib > pib2 ? 1 : 0;
    break;
        case 4:
    printf("Você escolheu a opção Pontos Turísticos\n");
    resultado = pontosturisticos > pontosturisticos2 ? 1 : 0;
    break;
        case 5:
    printf("Você escolheu a opção Densidade Demografica\n");
    resultado = densidadepopulacional > densidadepopulacional2 ? 1 : 0;
    break;
        default:
    printf("Opção Inválida!");
    return 0;
    break;
    }
    //escolha do segundo atributo

    printf("\n|Escolha o segundo atributo para comparar|\n");
    printf("\n**Atenção! Escolha um atributo diferente de primeiro escolhido!**\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");
    printf("\nEscolha: \n");
    scanf("%d", &comparacao2);


    if (comparacao == comparacao2){
            printf("Você escolheu o mesmo atributo!");
    } else {
        switch (comparacao2) {

        case 1:
    printf("Você escolheu a opção População\n");
    resultado2 = populacao > populacao2 ? 1 : 0;
    break;
        case 2:
    printf("Você escolheu a opção Área\n");
    resultado2 = area > area2 ? 1 : 0;
    break;
        case 3:
    printf("Você escolheu a opção PIB\n");
    resultado2 = pib > pib2 ? 1 : 0;
    break;
        case 4:
    printf("Você escolheu a opção Pontos Turísticos\n");
    resultado2 = pontosturisticos > pontosturisticos2 ? 1 : 0;
    break;
        case 5:
    printf("Você escolheu a opção Densidade Demografica\n");
    resultado2 = densidadepopulacional > densidadepopulacional2 ? 1 : 0;
    break;
        default:
    printf("Opção Inválida!");
    return 0;
    break;
    }
    }
    //exibição dos resultados
    printf("\n*** Resultado da Comparaçãoo ***\n");

    printf("\nCarta %s venceu no primeiro atributo!\n", resultado ? 1 : 2);
    printf("\nCarta %s venceu no segundo atributo!\n", resultado2  ? 1 : 2);

    if (resultado && resultado2){
        printf("\n| Carta 1 venceu! |\n");
    } else if (resultado != resultado2){
        printf("\n| Empate! |\n");
    } else {
        printf("\n| Carta 2 venceu! |\n");
    }

    printf("|Fim de Jogo|");
    return 0;
}
