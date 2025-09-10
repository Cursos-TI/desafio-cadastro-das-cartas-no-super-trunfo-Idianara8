#include <stdio.h>
int main()
{
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("-=-=- Nível 1 = Cadastro de Cartas-=-=\n");

 printf("Cadastro da carta 1 Brasil \n");
 printf("Digite a população (int): ");
 scanf("%d",&populacao1);
 printf("Digite a area (float):");
 scanf("%f", &area1);
 printf("Digite o PIB (float)");
 scanf("%f", &pib1);
 printf("Digite o numero de pontos turisticos (int):");
 scanf("%d", &pontos_turisticos1);

 printf("\nCadastro da carta 2 Uruguai\n");
 printf("Digite a população (int)");
 scanf("%d", &populacao2 );
 printf("Digite a area (float):");
 scanf("%f", &area2);
 printf("Digite o PIB (float):");
 scanf("%f" ,&pib2);
 printf("Digite o numero de pontos turisticos (int): ");
 scanf("%d", &pontos_turisticos2 ); 

 printf("\n --Dados da carta 1: Brasil--\n");
 printf("Populaçaõ: %d\n", populacao1);
 printf("Area: %.2f\n", area1);
 printf("PIB: %.2.f\n", pib1 );
 printf("Pontos Turisticos: %d\n", pontos_turisticos1);
 
 printf("\n --Dados da Carta 2 : Uruguai--\n");
 printf("População: %d\n", populacao2 );
 printf("Area: %.2f\n", area2);
 printf("PIB: %.2f\n", pib2 );
 printf("Pontos Turisticos: %d\n", pontos_turisticos2);

 return 0;

} 
