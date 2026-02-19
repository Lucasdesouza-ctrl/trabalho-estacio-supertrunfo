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

    // Saida de dados
    printf("<===============>\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", letraEstadoA);
    printf("Código: %s\n", codigoCartaA);
    printf("Nome da cidade: %s\n", nomeCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km^2\n", areaCartaA);
    printf("PIB: %.2f\n", pibA);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosA);

    printf("<===============>\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", letraEstadoB);
    printf("Código: %s\n", codigoCartaB);
    printf("Nome da cidade: %s\n", nomeCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km^2\n", areaCartaB);
    printf("PIB: %.2f \n", pibB);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosB);

    return 0;
}