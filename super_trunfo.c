#include <stdio.h>

int main(){
    char estado1[20], estado2[20], codigo1[3], codigo2[3], cidade1[20], cidade2[20];
    int locais1, locais2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, pibPerCapita1, densidade2, pibPerCapita2, superPoder1, superPoder2;
    float resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;


    //CARTA 1 ** Irá lançar os dados contidos na primeira carta de super trunfo:

    printf("Digite o estado da carta 1: ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes da populacao na carta 1: ");
    scanf("%u", &populacao1);

    printf("Digite a area em km2 na carta 1: ");
    scanf("%f", &area1);

    printf("Digite o pib na carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos na carta 1: ");
    scanf("%d", &locais1);

    //CALCULO 1: DENSIDADE E PIB DA CARTA 1!

    densidade1 = (float) (1/(populacao1 / area1));

    pibPerCapita1 = (float) (pib1 / populacao1);

    //CALCULO 2: CALCULAR O SUPER PODER DA CARTA 1!

    superPoder1 = (float) populacao1 + area1 + pib1 + locais1;


    //RESULTADOS DA CARTA 1
    printf("*** DADOS DA CARTA 1 *** \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Area em km2: %.2f\n", area1);
    printf("PIB (em bilhoes de reais): %.2f\n", pib1);
    printf("Numero de pontos turísticos: %d\n", locais1);
    printf("Densidade populacional (hab/km2): %.2f\n", densidade1);
    printf("PIB per Capita (em reais): %.2f\n", pibPerCapita1);
    printf("O super Poder da Carta 1 é: %.2f\n", superPoder1);


    //CARTA 2 ** Irá lançar os dados contidos na segunda carta de super trunfo:

    printf("Digite o estado da carta 2: ");
    scanf("%s", &estado2);

    printf("Digiteo codigo da carta 2: ");
    scanf("%s", &codigo2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de habitantes da populacao na carta 2: ");
    scanf("%u", &populacao2);

    printf("Digite a area em km2 na carta 2: ");
    scanf("%f", &area2);

    printf("Digite o pib na carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos na carta 2: ");
    scanf("%d", &locais2);

    //CALCULO 3: DENSIDADE E PIB DA CARTA 2!

    densidade2 = (float) (1/(populacao2 / area2));

    pibPerCapita2 = (float) (pib2 / populacao2);

    //CALCULO 4: CALCULAR O SUPER PODER DA CARTA 2!

    superPoder2 = (float) (populacao2 + area2 + pib2 + locais2);

    //RESULTADOS DA CARTA 2
    printf("*** DADOS DA CARTA 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Area em km2: %.2f\n", area2);
    printf("PIB (em bilhoes de reais): %.2f\n", pib2);
    printf("Numero de pontos turísticos: %d\n", locais2);
    printf("Densidade populacional (hab/km2): %.2f\n", densidade2);
    printf("PIB per Capita (em reais): %.2f\n", pibPerCapita2);
    printf("O super Poder da Carta 2 é: %.2f\n", superPoder2);

    //COMPARACÕES ENTRE VALORES DAS DUAS CARTAS:
    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = locais1 > locais2;
    resultado5 = densidade1 < densidade2;
    resultado6 = pibPerCapita1 > pibPerCapita2;
    resultado7 = superPoder1 > superPoder2;

    // IMPRESSÃO DO RESULTADO FINAL!
    printf("*** COMPARAÇÕES DAS CARTAS ***\n");
    printf("População: Carta %d venceu!\n", resultado1);
    printf("Área: Carta %d venceu!\n", resultado2);
    printf("PIB: Carta %d venceu!\n", resultado3);
    printf("Pontos turísticos: Carta %d venceu!\n", resultado4);
    printf("Densidade Populacional: Carta %d venceu!\n", resultado5);
    printf("PIB per Capita: Carta %d venceu!\n", resultado6);
    printf("Super Poder: Carta %d venceu!\n", resultado7);

    return 0;
}
