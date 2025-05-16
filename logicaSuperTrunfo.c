#include <stdio.h>
#include <string.h>

int main(){
    char estado[2], codigoCarta[5], nomeCidade[20], cidade1[20], cidade2[20];
    int pontoTur, populacao;
    float area, pib, perCapita;
    unsigned long int densidade, densidade1, densidade2;
    float superpoder, resultado, resultado2, carta1, carta2;

    /*Carta 1:
    Estado: CE
    Código: A01
    Nome da Cidade: Fortaleza
    População: 9345192
    Área: 148.886 km²
    PIB: 73.436 bilhões de reais
    Número de Pontos Turísticos: 40
    Densidade Populacional: 62,76 hab/km²
    PIB per Capita: 7.858,15 reais
    Super Poder:

    e

    Carta 2:
    Estado: PB
    Código: B02
    Nome da Cidade: João Pessoa
    População: 5044963
    Área: 56.585 km²
    PIB: 22.244 bilhões de reais
    Número de Pontos Turísticos: 30
    Densidade Populacional: 89,15 hab/km²
    PIB per Capita: 4.409,15 reais
    Super Poder:
    */
    printf("Desafio Logica Super Trunfo.\n\n");
    //Inserção dos dados.
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o codigo: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area [em km^2]: ");
    scanf("%f", &area);
    printf("Digite o PIB local [em reais]: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoTur);

    //Cálculo da densidade populacional.
    densidade = populacao/area;
    //Cálculo do PIB per capita.
    perCapita = pib/populacao;
    //Cálculo do Super Poder.
    superpoder = populacao+area+pib+perCapita+(1/densidade)+pontoTur;
    carta1 = area;
    strcpy(cidade1, nomeCidade);

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km^2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur);
    printf("Densidade Populacional: %lu hab/km^2\n", densidade);
    printf("PIB per capita: R$ %.2f\n", perCapita);

    printf("\n");
    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o codigo: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area [em km^2]: ");
    scanf("%f", &area);
    printf("Digite o PIB local [em reais]: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoTur);

    //Cálculo da densidade populacional.
    densidade = populacao/area;
    //Cálculo do PIB per capita.
    perCapita = pib/populacao;
    //Cálculo do Super Poder.
    superpoder = populacao+area+pib+perCapita+(1/densidade)+pontoTur;
    carta2 = area;
    densidade2 = densidade;
    strcpy(cidade2, nomeCidade);

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km^2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur);
    printf("Densidade Populacional: %lu hab/km^2\n", densidade);
    printf("PIB per capita: R$ %.2f\n", perCapita);

    printf("\nComparacao entre cartas: Area\n");
    if(carta1 > carta2){
        printf("A carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("A carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparacao entre densidades:\n");
    if(densidade1 < densidade2){
        printf("A carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("A carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}