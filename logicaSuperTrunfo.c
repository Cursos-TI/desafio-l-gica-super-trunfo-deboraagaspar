#include <stdio.h>

int main() {
    // variáveis da carta 1
    char estado1, codigo1[4], cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontostur1;
    float densidade1, pibpercapita1;

    // variáveis da carta 2
    char estado2, codigo2[4], cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontostur2;
    float densidade2, pibpercapita2;

    // entrada carta 1
    printf("Digite a letra do estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur1);

    // cálculos carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // entrada carta 2
    printf("\nDigite a letra do estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur2);

    // cálculos carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // exibindo as cartas
    printf("\n************************************\n");
    printf("*           SUPER TRUNFO            *\n");
    printf("************************************\n");

    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontostur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    printf("\n------------------------------------\n");

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontostur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    // comparação usando apenas 1 atributo (PIB per capita)
    printf("\n====================================\n");
    printf("       COMPARAÇÃO DE CARTAS         \n");
    printf("====================================\n");
    printf("Atributo utilizado: PIB per capita\n\n");

    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pibpercapita2);

    if (pibpercapita1 > pibpercapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibpercapita2 > pibpercapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
    }
    

    return 0;
}
