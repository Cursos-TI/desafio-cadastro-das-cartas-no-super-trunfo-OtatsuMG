#include <stdio.h>

int main() {
    printf("\nDesafio Super Trunfo!\n"); // TÍTULO DO JOGO

    // VARIÁVEIS DAS CARTAS
    //***NIVEL NOVATO***
    char estado1, estado2; // NOME DOS ESTADOS DAS CARTAS
    char codigo1[5], codigo2[5]; // CÓDIGO DAS CARTAS 
    char cidade1[50], cidade2[50]; // NOME DAS CIDADES 
    int populacao1, populacao2; // TAMANHO DA POPULAÇÃO
    float area1, area2; // ÁREA (EM KM²)
    float pib1, pib2; // PIB (EM BILHÕES DE REAIS)
    int pontos_turisticos1, pontos_turisticos2; // QUANTIDADE DE PONTOS TURÍSTICOS

    //***NIVEL AVENTUREIRO***
    float densidadepopulacional1;
    float pibpercapita1;

    float densidadepopulacional2;
    float pibpercapita2;

    // FORNECIMENTO DAS INFORMAÇÕES DA CARTA 1
    //NIVEL NOVATO
    printf("\nDados da Carta 1\n");

    printf("Estado (letra de A a H):");
    scanf(" %c", &estado1); // O espaço antes de %c é para capturar o caractere corretamente

    printf("Código da Carta (letra + número de 01 a 04):");
    scanf("%4s", codigo1); // Limite de 4 caracteres para evitar overflow

    printf("Nome da Cidade:");
    scanf("%s", cidade1); 

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área (em km²):");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos1);


    // FORNECIMENTO DAS INFORMAÇÕES DA CARTA 2
    //NIVEL NOVATO
    printf("\nDados da Carta 2\n");

    printf("Estado (letra de A a H):");
    scanf(" %c", &estado2); // O espaço antes de %c é para capturar o caractere corretamente

    printf("Código da Carta (número de 01 a 04):");
    scanf("%4s", codigo2); // Limite de 4 caracteres para evitar overflow

    printf("Nome da Cidade:");
    scanf("%s", cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área (em km²):");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);

    //***NIVEL AVENTUREIRO***
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (float)(pib1 * 10000000000) / (populacao1 * 10);

    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (float)(pib2 * 10000000000) / (populacao2 * 10);

    // EXIBIÇÃO DA CARTA 1
    //NIVEL NOVATO
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1); 
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //NIVEL AVENTUREIRO
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("Pib per capita: %.2f reais\n", pibpercapita1);
    //DENSIDADE POPULACIONAL E PIB PER CAPITA

    // EXIBIÇÃO DA CARTA 2
    //NIVEL NOVATO
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2); 
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    //NIVEL AVENTUREIRO
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("Pib per capita: %.2f reais\n", pibpercapita2);
    //DENSIDADE POPULACIONAL E PIB PER CAPITA

    return 0;
}
