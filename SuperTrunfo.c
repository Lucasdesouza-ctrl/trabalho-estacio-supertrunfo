#include <stdio.h>

int main()
{
    // variaveis
    char nomePaisA[50], nomePaisB[50];
    int populacaoA, populacaoB;
    float areaCartaA, areaCartaB;
    float pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadePopulacionalA, densidadePopulacionalB;
    float pibFormatadoA, pibFormatadoB;
    // carta A
    // entrada de dados

    printf("Carta A\n");

    printf("Insira o nome do país:\n");
    fgets(nomePaisA, 50, stdin);

    printf("Insira o número de população do país:\n");
    scanf("%d", &populacaoA);

    printf("Insira a área do país:\n");
    scanf("%f", &areaCartaA);

    printf("Insira o PIB:\n");
    scanf("%f", &pibA);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicosA);
    getchar();

    // operação carta A
    densidadePopulacionalA = (float)populacaoA / areaCartaA;
    pibFormatadoA = pibA * 1000000000;
    // carta b
    // entrada de dados
    printf("<===============>\n");
    printf("Carta B\n");

    printf("Insira o nome do país:\n");
    fgets(nomePaisB, 50, stdin);

    printf("Insira o número de população do país:\n");
    scanf("%d", &populacaoB);

    printf("Insira a área do país:\n");
    scanf("%f", &areaCartaB);

    printf("Insira o PIB:\n");
    scanf("%f", &pibB);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicosB);
    getchar();

    // operação carta B

    densidadePopulacionalB = (float)populacaoB / areaCartaB;
    pibFormatadoB = pibB * 1000000000;

    // Saida de dados
    // carta A
    printf("<===============>\n");
    printf("Carta 1:\n");
    printf("Nome do país: %s\n", nomePaisA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaCartaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalA);

    // carta B
    printf("<===============>\n");
    printf("Carta 2:\n");
    printf("Nome do país: %s\n", nomePaisB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaCartaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalB);

    // menu

    printf("Escola uma opção de comparação\n");

    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Número de pontos túristicos\n");
    printf("5-Densidade populacional\n");

    int numeroEscolha;

    scanf("%d", &numeroEscolha);

    switch (numeroEscolha)
    {
    case 1:

        printf("%s: %d \n", nomePaisA, populacaoA);
        printf("%s: %d \n", nomePaisB, populacaoB);

        if (populacaoA > populacaoB)
        {
            printf("População: %s venceu\n", nomePaisA);
        }
        else if (populacaoA < populacaoB)
        {
            printf("População: %s venceu\n", nomePaisB);
        }
        else if (populacaoA == populacaoB)
        {
            printf("População: empatou!!!\n");
        }

        break;

    case 2:

        printf("%s: %.2f \n", nomePaisA, areaCartaA);
        printf("%s: %.2f \n", nomePaisB, areaCartaB);

        if (areaCartaA > areaCartaB)
        {
            printf("Área: %s venceu\n", nomePaisA);
        }
        else if (areaCartaA < areaCartaB)
        {
            printf("Área: %s venceu\n", nomePaisB);
        }
        else if (areaCartaA == areaCartaB)
        {
            printf("Área: empatou!!!\n");
        }

        break;

    case 3:

        printf("%s: %.2f \n", nomePaisA, pibFormatadoA);
        printf("%s: %.2f \n", nomePaisB, pibFormatadoB);

        if (pibFormatadoA > pibFormatadoB)
        {
            printf("PIB: %s venceu\n", nomePaisA);
        }
        else if (pibFormatadoA < pibFormatadoB)
        {
            printf("PIB: %s venceu\n", nomePaisB);
        }
        else if (pibFormatadoA == pibFormatadoB)
        {
            printf("PIB: empatou!!!\n");
        }

        break;

    case 4:

        printf("%s: %d \n", nomePaisA, pontosTuristicosA);
        printf("%s: %d \n", nomePaisB, pontosTuristicosB);

        if (pontosTuristicosA > pontosTuristicosB)
        {
            printf("Pontos turísticos: %s venceu\n", nomePaisA);
        }
        else if (pontosTuristicosA < pontosTuristicosB)
        {
            printf("Pontos turísticos: %s venceu\n", nomePaisB);
        }
        else if (pontosTuristicosA == pontosTuristicosB)
        {
            printf("Pontos turísticos: empatou!!!\n");
        }

        break;

    case 5:

        printf("%s: %.2f \n", nomePaisA, densidadePopulacionalA);
        printf("%s: %.2f \n", nomePaisB, densidadePopulacionalB);

        if (densidadePopulacionalA > densidadePopulacionalB)
        {
            printf("Densidade populacional: %s venceu\n", nomePaisB);
        }
        else if (densidadePopulacionalA < densidadePopulacionalB)
        {
            printf("Densidade populacional: %s venceu\n", nomePaisA);
        }
        else if (densidadePopulacionalA == densidadePopulacionalB)
        {
            printf("Densidade populacional: empatou!!!\n");
        }

        break;

    default:

        printf("Escolha inválida!");

        break;
    }

    return 0;
}