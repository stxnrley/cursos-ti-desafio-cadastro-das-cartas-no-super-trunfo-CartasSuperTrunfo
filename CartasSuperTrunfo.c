#include <stdio.h>

int main(){
    /*========== CARTA 1 ==========*/
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float perCapita1;

    /*========== CADASTRO DE CARTA 1 ==========*/
    printf("\nCADASTRO DE CARTA 1\n");

    printf("\nUma letra de A a H: \n");
    scanf(" %c", &estado1);

    printf("A letra do estado e um numero de 01 a 04 (ex: A01): \n");
    scanf("%s", codigo1);

    printf("O nome da cidade: \n");
    scanf("%s", cidade1);

    printf("O numero de habitantes: \n");
    scanf("%d", &populacao1);

    printf("A area em km²: \n");
    scanf("%f", &area1);

    printf("O produto interno bruto: \n");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos: \n");
    scanf("%d", &pontos1);

    perCapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;


    /*========== CARTA 2 ==========*/
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float perCapita2;

    /*========== CADASTRO DE CARTA 2 ==========*/
    printf("CADASTRO DE CARTA 2\n");

    printf("\nUma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("A letra do estado e um numero de 01 a 04 (ex: A01): \n");
    scanf("%s", codigo2);

    printf("O nome da cidade: \n");
    scanf("%s", cidade2);

    printf("O numero de habitantes: \n");
    scanf("%d", &populacao2);

    printf("A area em (km²): \n");
    scanf("%f", &area2);

    printf("O produto interno bruto: \n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos: \n");
    scanf("%d", &pontos2);

    perCapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;

    /*========== CARTA 1 ==========*/
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", perCapita1);

    /*========== CARTA 2 ==========*/
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", perCapita2);

    return 0;
}
