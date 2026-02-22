#include <stdio.h>

int main()
{
    // variaveis
    char letraEstadoA, letraEstadoB;
    char codigoCartaA[5], codigoCartaB[5];
    char nomeCidadeA[50], nomeCidadeB[50];
    int populacaoA, populacaoB;
    float areaCartaA, areaCartaB;
    float pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadePopulacionalA, densidadePopulacionalB;
    float pibPerCapitaA, pibPerCapitaB;
    // carta A
    // entrada de dados
    printf("Carta A\n");

    printf("Insira a letra do estado:\n");
    scanf(" %c", &letraEstadoA);

    printf("Insira o código da carta:\n");
    scanf(" %s", codigoCartaA);

    getchar();

    printf("Insira o nome da cidade:\n");
    fgets(nomeCidadeA, 50, stdin);

    printf("Insira o número de população da cidade:\n");
    scanf("%d", &populacaoA);

    printf("Insira a área da cidade:\n");
    scanf("%f", &areaCartaA);

    printf("Insira o PIB:\n");
    scanf("%f", &pibA);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicosA);

    // operação carta A
    densidadePopulacionalA = (float)populacaoA / areaCartaA;
    pibPerCapitaA = (pibA * 1000000000) / populacaoA;
    // carta b
    // entrada de dados
    printf("<===============>\n");
    printf("Carta B\n");

    printf("Insira a letra do estado:\n");
    scanf(" %c", &letraEstadoB);

    printf("Insira o código da carta:\n");
    scanf("%s", codigoCartaB);

    getchar();

    printf("Insira o nome da cidade:\n");
    fgets(nomeCidadeB, 50, stdin);

    printf("Insira o número de população da cidade:\n");
    scanf("%d", &populacaoB);

    printf("Insira a área da cidade:\n");
    scanf("%f", &areaCartaB);

    printf("Insira o PIB:\n");
    scanf("%f", &pibB);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicosB);

    // operação carta B

    densidadePopulacionalB = (float)populacaoB / areaCartaB;
    pibPerCapitaB = (pibB * 1000000000) / populacaoB;

    // Saida de dados
    // carta A
    printf("<===============>\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", letraEstadoA);
    printf("Código: %s\n", codigoCartaA);
    printf("Nome da cidade: %s\n", nomeCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaCartaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalA);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaA);

    // carta B
    printf("<===============>\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", letraEstadoB);
    printf("Código: %s\n", codigoCartaB);
    printf("Nome da cidade: %s\n", nomeCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaCartaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalB);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaB);

    return 0;
}