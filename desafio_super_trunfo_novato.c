#include <stdio.h>
#include <string.h>

int main() {
    // Definindo variáveis para a Carta 1
    char estado1[50];
    int codigo1;
    char cidade1[50];
    long populacao1;
    double area1;
    long pib1;
    int pontos_turisticos1;

    // Definindo variáveis para a Carta 2
    char estado2[50];
    int codigo2;
    char cidade2[50];
    long populacao2;
    double area2;
    long pib2;
    int pontos_turisticos2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%ld", &populacao1);
    printf("Digite a area (em km^2): ");
    scanf("%lf", &area1);
    printf("Digite o PIB: ");
    scanf("%ld", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%ld", &populacao2);
    printf("Digite a area (em km^2): ");
    scanf("%lf", &area2);
    printf("Digite o PIB: ");
    scanf("%ld", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n--- Informacoes das Cartas ---\n");
    printf("\nCarta 1: %s - %s (Codigo: %d)\n", estado1, cidade1, codigo1);
    printf("  Populacao: %ld\n", populacao1);
    printf("  Area: %.2f km^2\n", area1);
    printf("  PIB: %ld\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2: %s - %s (Codigo: %d)\n", estado2, cidade2, codigo2);
    printf("  Populacao: %ld\n", populacao2);
    printf("  Area: %.2f km^2\n", area2);
    printf("  PIB: %ld\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontos_turisticos2);

    // --- Comparação de Atributos ---
    printf("\n--- Resultado da Comparacao ---\n");
    // Vamos comparar a populacao (maior vence)
    if (populacao1 > populacao2) {
        printf("A Carta 1 (%s) vence! Maior populacao.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("A Carta 2 (%s) vence! Maior populacao.\n", cidade2);
    } else {
        printf("As duas cartas tem a mesma populacao. Empate!\n");
    }

    // Calculando e comparando a densidade populacional (menor vence)
    double densidade1 = populacao1 / area1;
    double densidade2 = populacao2 / area2;

    printf("\n--- Comparacao de Densidade Populacional ---\n");
    printf("Densidade de %s: %.2f hab/km^2\n", cidade1, densidade1);
    printf("Densidade de %s: %.2f hab/km^2\n", cidade2, densidade2);

    if (densidade1 < densidade2) {
        printf("A Carta 1 (%s) vence! Menor densidade populacional.\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("A Carta 2 (%s) vence! Menor densidade populacional.\n", cidade2);
    } else {
        printf("As duas cartas tem a mesma densidade populacional. Empate!\n");
    }

    return 0;
}