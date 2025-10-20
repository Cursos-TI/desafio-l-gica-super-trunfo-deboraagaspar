#include <stdio.h>

int main() {
    // Dados fixos das cartas (exemplo)
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[30] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 799000.0;
    int pontostur1 = 25;
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.0;
    float pib2 = 364000.0;
    int pontostur2 = 40;
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Exibir informações das cartas
    printf("=== SUPER TRUNFO ===\n\n");

    printf("CARTA 1: %s (%s)\n", cidade1, codigo1);
    printf("Estado: %c\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n\n",
           estado1, populacao1, area1, pib1, pontostur1, densidade1, pibpercapita1);

    printf("CARTA 2: %s (%s)\n", cidade2, codigo2);
    printf("Estado: %c\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n\n",
           estado2, populacao2, area2, pib2, pontostur2, densidade2, pibpercapita2);

    // Menu para escolha do atributo
    printf("Escolha o atributo para comparar:\n");
    printf(" 1 - População\n");
    printf(" 2 - Área\n");
    printf(" 3 - PIB\n");
    printf(" 4 - Pontos turísticos\n");
    printf(" 5 - Densidade demográfica\n");
    printf(" 6 - PIB per capita\n");
    printf("Opção: ");

    int opcao;
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    // Processa escolha com switch
    switch (opcao) {
        case 1:
            printf("População:\n%s: %lu\n%s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s!\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("Área:\n%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Vencedor: %s!\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n%s: %.2f\n%s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s!\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("Pontos turísticos:\n%s: %d\n%s: %d\n", cidade1, pontostur1, cidade2, pontostur2);
            if (pontostur1 > pontostur2) printf("Vencedor: %s!\n", cidade1);
            else if (pontostur2 > pontostur1) printf("Vencedor: %s!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("Densidade demográfica:\n%s: %.2f\n%s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s!\n", cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6:
            printf("PIB per capita:\n%s: %.2f\n%s: %.2f\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) printf("Vencedor: %s!\n", cidade1);
            else if (pibpercapita2 > pibpercapita1) printf("Vencedor: %s!\n", cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 6.\n");
    }

    return 0;
}
