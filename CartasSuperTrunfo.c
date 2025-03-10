#include <stdio.h>

int main() {
    printf("\nDesafio Super Trunfo!\n");

    char pais1[50], pais2[50]; // NOME DOS PAISES
    int populacao1, populacao2; // TAMANHO DA POPULAÇÃO
    float area1, area2; // ÁREA (EM KM²)
    float pib1, pib2; // PIB (EM BILHÕES DE REAIS)
    int pontos_turisticos1, pontos_turisticos2; // QUANTIDADE DE PONTOS TURÍSTICOS
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    int escolha_carta1_1, escolha_carta1_2, escolha_carta2_1, escolha_carta2_2;
    float atributoCarta1_1, atributoCarta1_2, atributoCarta2_1, atributoCarta2_2;
    float somaCarta1, somaCarta2;

    // FORNECIMENTO DAS INFORMAÇÕES DA CARTA 1
    printf("\nDados da Carta 1\n");

    printf("Nome do País:");
    scanf("%s", pais1); 
    printf("População:");
    scanf("%d", &populacao1);
    printf("Área (em km²):");
    scanf("%f", &area1);
    printf("PIB:");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos1);
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (float)(pib1 * 10000000000) / (populacao1 * 10);
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
    
    // FORNECIMENTO DAS INFORMAÇÕES DA CARTA 2
    printf("\nDados da Carta 2\n");

    printf("Nome do País:");
    scanf("%s", pais2);
    printf("População:");
    scanf("%d", &populacao2);
    printf("Área (em km²):");
    scanf("%f", &area2);
    printf("PIB:");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontos_turisticos2);
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (float)(pib2 * 10000000000) / (populacao2 * 10);
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    // EXIBIÇÃO DA CARTA 1
    printf("\nCarta 1:\nNome do País: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
    pais1, populacao1, area1, pib1, pontos_turisticos1, densidadepopulacional1, pibpercapita1, superpoder1);

    // EXIBIÇÃO DA CARTA 2
    printf("\nCarta 2:\nNome do País: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
    pais2, populacao2, area2, pib2, pontos_turisticos2, densidadepopulacional2, pibpercapita2, superpoder2);

    // JOGADOR 1 ESCOLHE 2 ATRIBUTOS
    printf("\nJogador - Carta 1");
    printf("\nEscolha dois atributos para a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o primeiro atributo (1 a 7): ");
    scanf("%d", &escolha_carta1_1);
    printf("Escolha o segundo atributo (1 a 7): ");
    scanf("%d", &escolha_carta1_2);

    // JOGADOR 2 ESCOLHE 2 ATRIBUTOS
    printf("\nJogador - Carta 2");
    printf("\nEscolha dois atributos para a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o primeiro atributo (1 a 7): ");
    scanf("%d", &escolha_carta2_1);
    printf("Escolha o segundo atributo (1 a 7): ");
    scanf("%d", &escolha_carta2_2);

    // Atribuindo os valores dos atributos escolhidos (Carta 1)
    switch (escolha_carta1_1) {
        case 1: atributoCarta1_1 = populacao1; break;
        case 2: atributoCarta1_1 = area1; break;
        case 3: atributoCarta1_1 = pib1; break;
        case 4: atributoCarta1_1 = pontos_turisticos1; break;
        case 5: atributoCarta1_1 = densidadepopulacional1; break;
        case 6: atributoCarta1_1 = pibpercapita1; break;
        case 7: atributoCarta1_1 = superpoder1; break;
        default: printf("Opção Inválida\n"); break;
    }

    switch (escolha_carta1_2) {
        case 1: atributoCarta1_2 = populacao1; break;
        case 2: atributoCarta1_2 = area1; break;
        case 3: atributoCarta1_2 = pib1; break;
        case 4: atributoCarta1_2 = pontos_turisticos1; break;
        case 5: atributoCarta1_2 = densidadepopulacional1; break;
        case 6: atributoCarta1_2 = pibpercapita1; break;
        case 7: atributoCarta1_2 = superpoder1; break;
        default: printf("Opção Inválida\n"); break;
    }

    // Atribuindo os valores dos atributos escolhidos (Carta 2)
    switch (escolha_carta2_1) {
        case 1: atributoCarta2_1 = populacao2; break;
        case 2: atributoCarta2_1 = area2; break;
        case 3: atributoCarta2_1 = pib2; break;
        case 4: atributoCarta2_1 = pontos_turisticos2; break;
        case 5: atributoCarta2_1 = densidadepopulacional2; break;
        case 6: atributoCarta2_1 = pibpercapita2; break;
        case 7: atributoCarta2_1 = superpoder2; break;
        default: printf("Opção Inválida\n"); break;
    }

    switch (escolha_carta2_2) {
        case 1: atributoCarta2_2 = populacao2; break;
        case 2: atributoCarta2_2 = area2; break;
        case 3: atributoCarta2_2 = pib2; break;
        case 4: atributoCarta2_2 = pontos_turisticos2; break;
        case 5: atributoCarta2_2 = densidadepopulacional2; break;
        case 6: atributoCarta2_2 = pibpercapita2; break;
        case 7: atributoCarta2_2 = superpoder2; break;
        default: printf("Opção Inválida\n"); break;
    }

    // Calculando a soma dos atributos para cada carta
    somaCarta1 = atributoCarta1_1 + atributoCarta1_2;
    somaCarta2 = atributoCarta2_1 + atributoCarta2_2;

    // Comparando as somas
    printf("\n === Resultado da Comparação ===\n");
    printf("Nome do país: %s\n", pais1);
    printf("Atributos escolhidos: %d e %d\n", escolha_carta1_1, escolha_carta1_2);
    printf("Soma da Carta 1: %.2f\n", somaCarta1);

    printf("\nNome do país: %s\n", pais2);
    printf("Atributos escolhidos: %d e %d\n", escolha_carta2_1, escolha_carta2_2);
    printf("Soma da Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("\n §== Carta 1 Venceu! ==§\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("\n §== Carta 2 Venceu! ==§ \n");
    } else {
        printf("\n === Cartas 1 e 2 Empataram! === \n");
    }

    return 0;
}