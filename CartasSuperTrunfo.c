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
    int escolha_carta1, escolha_carta2;
    float atributoCarta1, atributoCarta2;

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


    /*COMPARAÇÃO DAS CARTAS
    printf("\nResultado do Duelo:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoderA > SuperPoderB);

    RESULTADO DO SUPERPODER DAS CARTAS
    printf("\nSuperPoderA: %.2f\n", SuperPoderA);
    printf("SuperPoderB: %.2f\n", SuperPoderB);

    printf("\nCarta 1 - %s (%c%s): %d\n", cidade1, estado1, codigo1, pontos_turisticos1);
    printf("Carta 2 - %s (%c%s): %d\n", cidade2, estado2, codigo2, pontos_turisticos2);

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
    } else {
        printf("Reultado: Carta 2 (%s) venceu!", cidade2);
    }
    */
    printf("\nJogador - Carta 1");
    printf("\nEscolha um atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha_carta1);

    printf("\nJogador - Carta 2");
    printf("\nEscolha um atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha_carta2);

    printf("\n === Carta 1 ===");
    printf("\nNome do País: \n");
    printf("%s\n", pais1);
    printf("Atributo escolhido:\n");
    switch (escolha_carta1)
{
    case 1:
        printf("População: %d\n", populacao1);
        atributoCarta1 = populacao1;
        break;
    case 2:
        printf("Área: %.2f km²\n", area1);
        atributoCarta1 = area1;
        break;
    case 3:
        printf("PIB: %.2f bilhões\n", pib1);
        atributoCarta1 = pib1;
        break;
    case 4:
        printf("Pontos Turísticos: %d\n", pontos_turisticos1);
        atributoCarta1 = pontos_turisticos1;
        break;
    case 5:
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        atributoCarta1 = densidadepopulacional1;
        break;
    case 6:
        printf("PIB per capita: %.2f\n", pibpercapita1);
        atributoCarta1 = pibpercapita1;
        break;
    case 7:
        printf("Super Poder: %.2f\n", superpoder1);
        atributoCarta1 = superpoder1;
        break;
    default:
        printf("Opção Inválida\n");
        break;
}

        printf("\n === Carta 2 ===");
        printf("\nNome do País: \n");
        printf("%s\n", pais2);
        printf("Atributo escolhido:\n");
switch (escolha_carta2)
{
    case 1:
        printf("População: %d\n", populacao2);
        atributoCarta2 = populacao2;
        break;
    case 2:
        printf("Área: %.2f km²\n", area2);
        atributoCarta2 = area2;
        break;
    case 3:
        printf("PIB: %.2f bilhões\n", pib2);
        atributoCarta2 = pib2;
        break;
    case 4:
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);
        atributoCarta2 = pontos_turisticos2;
        break;
    case 5:
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        atributoCarta2 = densidadepopulacional2;
        break;
    case 6:
        printf("PIB per capita: %.2f\n", pibpercapita2);
        atributoCarta2 = pibpercapita2;
        break;
    case 7:
        printf("Super Poder: %.2f\n", superpoder2);
        atributoCarta1 = superpoder2;
    default:
        printf("Opção Inválida\n");
        break;
}

   if ((escolha_carta1 == 5 && densidadepopulacional1 < densidadepopulacional2) ||
       (escolha_carta1 != 5 && atributoCarta1 > atributoCarta2)) {
        printf("\n §== Carta 1 Venceu! ==§\n");
    } else if ((escolha_carta1 == 5 && densidadepopulacional1 > densidadepopulacional2) ||
       (escolha_carta1 != 5 && atributoCarta1 < atributoCarta2)) {
        printf("\n §== Carta 2 Venceu! ==§ \n");
    } else {
        printf("\n === Cartas 1 e 2 Empataram! === \n");
    }

        return 0;
    }