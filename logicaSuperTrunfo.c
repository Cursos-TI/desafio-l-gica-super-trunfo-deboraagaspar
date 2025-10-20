#include <stdio.h>

int main() {
    // Dados fixos das cartas
    char cidade1[30] = "São Paulo";
    unsigned long populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 799000.0;
    int pontostur1 = 25;
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    char cidade2[30] = "Rio de Janeiro";
    unsigned long populacao2 = 6748000;
    float area2 = 1200.0;
    float pib2 = 364000.0;
    int pontostur2 = 40;
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");

    // Menu 1
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &atributo1);

    // Switch para validar e obter o primeiro atributo
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontostur1; valor1_carta2 = pontostur2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibpercapita1; valor1_carta2 = pibpercapita2; break;
        default:
            printf("\nOpcao invalida! Reinicie o programa e escolha um valor entre 1 e 6.\n");
            return 0;
    }

    // Menu 2 (exclui o atributo já escolhido)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade demográfica\n");
    if (atributo1 != 6) printf("6 - PIB per capita\n");
    scanf("%d", &atributo2);

    // Validação da segunda escolha
    if (atributo2 == atributo1) {
        printf("\nVocê escolheu o mesmo atributo duas vezes! Reinicie o programa.\n");
        return 0;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontostur1; valor2_carta2 = pontostur2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibpercapita1; valor2_carta2 = pibpercapita2; break;
        default:
            printf("\nOpcao invalida! Reinicie o programa e escolha um valor entre 1 e 6.\n");
            return 0;
    }

    // Comparações com regras especiais (densidade menor vence)
    int pontos1 = 0, pontos2 = 0;

    if (atributo1 == 5)
        (valor1_carta1 < valor1_carta2) ? pontos1++ : (valor1_carta2 < valor1_carta1 ? pontos2++ : 0);
    else
        (valor1_carta1 > valor1_carta2) ? pontos1++ : (valor1_carta2 > valor1_carta1 ? pontos2++ : 0);

    if (atributo2 == 5)
        (valor2_carta1 < valor2_carta2) ? pontos1++ : (valor2_carta2 < valor2_carta1 ? pontos2++ : 0);
    else
        (valor2_carta1 > valor2_carta2) ? pontos1++ : (valor2_carta2 > valor2_carta1 ? pontos2++ : 0);

    // Soma dos dois atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Resultado final
    printf("\n--- RESULTADOS ---\n");
    printf("%s -> %.2f + %.2f = %.2f\n", cidade1, valor1_carta1, valor2_carta1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", cidade2, valor1_carta2, valor2_carta2, soma2);

    printf("\nVencedor final: ");
    (soma1 > soma2) ? printf("%s venceu!\n", cidade1) :
    (soma2 > soma1) ? printf("%s venceu!\n", cidade2) :
    printf("Empate!\n");

    return 0;
}
