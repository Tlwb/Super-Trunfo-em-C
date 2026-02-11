#include <stdio.h>

int main(){
    char estado;
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    int populacao;
    double area;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Digite o estado da carta: \n");
    scanf(" %c", &estado);  

    printf("Digite o codigo da carta: \n");
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

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %lf\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}
