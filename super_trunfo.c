#include <stdio.h>

int main(){

    char estado, estado2;
    char codigo_da_carta[10], codigo_da_carta2[10];
    char nome_da_cidade[50], nome_da_cidade2[50];
    int populacao, populacao2;
    double area, area2;
    float pib, pib2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float perCapita, perCapita2;
    float superpoder1, superpoder2;

    // ================= CARTA 1 =================

    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta 1: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%lf", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Cálculos carta 1
    densidade_populacional = (float)populacao / area;
    perCapita = pib / populacao;

    superpoder1 = populacao + area + pib +
                  numero_de_pontos_turisticos +
                  perCapita - densidade_populacional;

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2lf km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional);
    printf("Renda per capita: %.2f\n", perCapita);
    printf("Superpoder: %.2f\n", superpoder1);

    // ================= CARTA 2 =================

    printf("\nDigite o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%lf", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Cálculos carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    superpoder2 = populacao2 + area2 + pib2 +
                  numero_de_pontos_turisticos2 +
                  perCapita2 - densidade_populacional2;

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("Renda per capita: %.2f\n", perCapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // ================= COMPARAÇÃO =================

    printf("\n===== considerando que o resultado seja 1, a carta 1 ganhou se for 0, a carta 2 ganhou =====\n");

    printf("a carta 1 ganhou em superpoder: %d \n",superpoder1>superpoder2);
    printf("a carta 1 ganhou em populacao: %d \n",populacao>populacao2);
    printf("a carta 1 ganhou em area: %d \n",area>area2);
    printf("a carta 1 ganhou em pib: %d \n",pib>pib2);
    printf("a carta 1 ganhou em pontos turisticos: %d \n",numero_de_pontos_turisticos>numero_de_pontos_turisticos2);

    

    return 0;
}