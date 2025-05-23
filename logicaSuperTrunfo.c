#include <stdio.h>

int main(){
    char pais1[20], pais2[20];
    int pontoTur1, pontoTur2, populacao1, populacao2, atributo1, atributo2;
    float area1, area2;
    double pib1, pib2;
    unsigned long int densidade1, densidade2;
    int resultado1, resultado2;

    /*Carta 1:
    País: BRA ou Brasil
    População: 212.600.000
    Área: 8.510.000 km²
    PIB: 2,174 trilhões de reais
    Número de Pontos Turísticos: 200
    Densidade Populacional: 24,98 hab/km²

    e

    Carta 2:
    País: EUA ou Estados Unidos
    População: 340.100.000
    Área: 9.867.000 km²
    PIB: 27,72 trilhões de reais
    Número de Pontos Turísticos: 100
    Densidade Populacional: 34,46 hab/km²
    */

    printf("Desafio Logica Super Trunfo.\n\n");
    //Inserção dos dados.
    printf("Carta 1:\n");
    printf("Digite o pais: ");
    scanf("%s", pais1);
    printf("Digite a populacao do pais: ");
    scanf("%d", &populacao1);
    printf("Digite a area [em km^2]: ");
    scanf("%f", &area1);
    printf("Digite o PIB local [em dolares]: ");
    scanf("%lf", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoTur1);

    //Cálculo da densidade populacional.
    densidade1 = populacao1/area1;

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Pais: %s\n", pais1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur1);

    printf("\n");
    printf("Carta 2:\n");
    printf("Digite o pais: ");
    scanf("%s", pais2);
    printf("Digite a populacao do pais: ");
    scanf("%d", &populacao2);
    printf("Digite a area [em km^2]: ");
    scanf("%f", &area2);
    printf("Digite o PIB local [em dolares]: ");
    scanf("%lf", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontoTur2);

    //Cálculo da densidade populacional.
    densidade2 = populacao2/area2;

    //Apresentação dos dados selecionados.
    printf("\n");
    printf("Pais: %s\n", pais2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: R$ %.2lf\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontoTur2);

    printf("\n");
    printf("Atributos para comparacao:\n");
    printf("1. Populacao | 2. Area | 3. PIB | 4. Pontos Turisticos | 5. Densidade demografica.\n");
    printf("Escolha o primeiro atributo [de 1 a 5]: ");
    scanf("%d", &atributo1);

    switch(atributo1){
        case 1:
            printf("Sua escolha foi Populacao.\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
            printf("Sua escolha foi Area.\n");
            resultado1 = area1 > area2 ? 1 : 0;
        break;
        case 3:
            printf("Sua escolha foi PIB.\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
            printf("Sua escolha foi Pontos Turisticos.\n");
            resultado1 = pontoTur1 > pontoTur2 ? 1 : 0;
        break;
        case 5:
            printf("Sua escolha foi Densidade demográfica.\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
        default:
            printf("Opcao invalida. Faca novamente.\n");
    }

    printf("\n");
    printf("1. Populacao | 2. Area | 3. PIB | 4. Pontos Turisticos | 5. Densidade demografica.\n");
    printf("Escolha o segundo atributo, diferente do primeiro [de 1 a 5]: ");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
            printf("\nNão pode atributos iguais! Reinicie o jogo.\n");
    } else{
        switch(atributo2){
            case 1:
                printf("Sua escolha foi Populacao.\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
            case 2:
                printf("Sua escolha foi Area.\n");
                resultado2 = area1 > area2 ? 1 : 0;
            break;
            case 3:
                printf("Sua escolha foi PIB.\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
            break;
            case 4:
                printf("Sua escolha foi Pontos Turisticos.\n");
                resultado2 = pontoTur1 > pontoTur2 ? 1 : 0;
            break;
            case 5:
                printf("Sua escolha foi Densidade demográfica.\n");
                resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
            default:
                printf("Opcao invalida. Faca novamente.\n");
            break;
        }

        printf("\n");
        if(resultado1 && resultado2)
            printf("A carta 1 (%s) venceu!\n", pais1);
        else {
            if (resultado1 != resultado2)
               printf("A carta 1 (%s) empatou com a carta 2 (%s)\n", pais1, pais2);
            else
               printf("A carta 2 (%s) venceu!\n", pais2);
        }
    }

    return 0;
}
