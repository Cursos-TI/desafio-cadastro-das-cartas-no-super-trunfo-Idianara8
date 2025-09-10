#include <stdio.h>

int main() {
    
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    printf("Dados da carta 1 : Brasil:");
    int resultado_populacao1;
    int resultado_area1;
    int resultado_pib1;
    int resultado_pontos_turisticos1;
    int resultado_densidade1;
    int resultado_pib_per_capita1;
    int resultado_super_poder1;
    printf("Dados da carta 2: Uruguai:");
    int resultado_população2;
    int resultado_area2;
    int resultado_pib2;
    int resultado_pontos_turisticos2;
    int resultado_pib_per_capita2;
    int resultado_super_poder2

    printf("--- Nivel Mestre: Comparacao e Super Poder ---\n");

    
    printf("\nCadastro da Carta 1:Brasil\n");
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB : ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\nCadastro da Carta 2:Uruguai\n");
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;


    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0f / densidade1) + pib_per_capita1;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0f / densidade2) + pib_per_capita2;
    
    
    printf("\n--- Resultados da Comparacao ---\n");

    resultado_populacao = populacao1 > populacao2 ? 1 : 0;
    printf("Populacao: %d\n", resultado_populacao);

    resultado_area = area1 > area2 ? 1 : 0;
    printf("Area: %d\n", resultado_area);
    
    resultado_pib = pib1 > pib2 ? 1 : 0;
    printf("PIB: %d\n", resultado_pib);

    
    printf("Pontos Turisticos: %d\n", resultado_pontos_turisticos);

    resultado_densidade = densidade1 < densidade2 ? 1 : 0;
    printf("Densidade Populacional: %d\n", resultado_densidade);

    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    printf("PIB per Capita: %d\n", resultado_pib_per_capita);

    resultado_super_poder = super_poder1 > super_poder2 ? 1 : 0;
    printf("Super Poder: %d\n", resultado_super_poder);

    return 0;
}