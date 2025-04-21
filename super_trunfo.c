#include <stdio.h>

int main(){
    char estado1[20], estado2[20], codigo1[3], codigo2[3], cidade1[20], cidade2[20];
    int locais1, locais2;
    float populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade, pibPerCapita;


    //CARTA 1 ** Irá lançar os dados contidos na primeira carta de super trunfo:

    printf("Digite o estado da carta 1: ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes da populacao na carta 1: ");
    scanf("%f", &populacao1);

    printf("Digite a area em km2 na carta 1: ");
    scanf("%f", &area1);

    printf("Digite o pib na carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos na carta 1: ");
    scanf("%d", &locais1);

    //calculos da carta 1

    densidade = (float) (populacao1 / area1);

    pibPerCapita = (float) (pib1 / populacao1);


    //RESULTADOS DA CARTA 1
    printf("*** DADOS DA CARTA 1 *** \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Area em km2: %.2f\n", area1);
    printf("PIB (em bilhoes de reais): %.2f\n", pib1);
    printf("Numero de pontos turísticos: %d\n", locais1);
    printf("Densidade populacional (hab/km2): %.2f\n", densidade);
    printf("PIB per Capita (em reais): %.2f\n", pibPerCapita);


    //CARTA 2 ** Irá lançar os dados contidos na segunda carta de super trunfo:

    printf("Digite o estado da carta 2: ");
    scanf("%s", &estado2);

    printf("Digiteo codigo da carta 2: ");
    scanf("%s", &codigo2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de habitantes da populacao na carta 2: ");
    scanf("%f", &populacao2);

    printf("Digite a area em km2 na carta 2: ");
    scanf("%f", &area2);

    printf("Digite o pib na carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos na carta 2: ");
    scanf("%d", &locais2);

    //calculos da carta 2

    densidade = (float) (populacao2 / area2);

    pibPerCapita = (float) (pib2 / populacao2);

    //RESULTADOS DA CARTA 2
    printf("*** DADOS DA CARTA 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Area em km2: %.2f\n", area2);
    printf("PIB (em bilhoes de reais): %.2f\n", pib2);
    printf("Numero de pontos turísticos: %d\n", locais2);
    printf("Densidade populacional (hab/km2): %.2f\n", densidade);
    printf("PIB per Capita (em reais): %.2f\n", pibPerCapita);

    return 0;
}