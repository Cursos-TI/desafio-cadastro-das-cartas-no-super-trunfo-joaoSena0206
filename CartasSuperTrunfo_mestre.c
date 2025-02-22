#include <stdio.h>

int main()
{
    // Cria variáveis para armazenar os dados das duas cartas posteriormente
    char estado_carta1;
    char codigo_carta1[4];
    char cidade_carta1[100];
    unsigned long int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontosTuristicos_carta1;
    float densidadePopulacional_carta1;
    float pibCapita_carta1;
    float poder_carta1;

    char estado_carta2;
    char codigo_carta2[4];
    char cidade_carta2[100];
    unsigned long int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontosTuristicos_carta2;
    float densidadePopulacional_carta2;
    float pibCapita_carta2;
    float poder_carta2;

    // Pega os dados da primeira carta digitados pelo usuário
    printf("Insira o estado da primeira carta (A a H): \n");
    scanf(" %c", &estado_carta1);

    codigo_carta1[0] = estado_carta1;

    printf("Digite o código da carta (01 a 04): \n%c", codigo_carta1[0]);
    scanf("%2s", &codigo_carta1[1]);

    printf("Digite o nome da cidade da carta: \n");
    scanf(" %99[^\n]", cidade_carta1);

    printf("Digite o número de habitandes da cidade: \n");
    scanf("%lu", &populacao_carta1);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos_carta1);

    // Pega os dados da segunda carta
    printf("\nAgora você deverá digitar os dados da segunda carta \n\n");

    printf("Insira o estado da segunda carta (A a H): \n");
    scanf(" %c", &estado_carta2);

    codigo_carta2[0] = estado_carta2;

    printf("Digite o código da carta (01 a 04): \n%c", codigo_carta2[0]);
    scanf("%2s", &codigo_carta2[1]);

    printf("Digite o nome da cidade da carta: \n");
    scanf(" %99[^\n]", cidade_carta2);

    printf("Digite o número de habitandes da cidade: \n");
    scanf("%d", &populacao_carta2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_carta2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos_carta2);

    // Calcula a densidade populacional e o PIB per capita
    densidadePopulacional_carta1 = populacao_carta1 / area_carta1;
    pibCapita_carta1 = pib_carta1 * 1000000000 / populacao_carta1;

    densidadePopulacional_carta2 = populacao_carta2 / area_carta2;
    pibCapita_carta2 = pib_carta2 * 1000000000 / populacao_carta2;

    // Calcula o super poder
    poder_carta1 = populacao_carta1 + area_carta1 + pib_carta1 + pontosTuristicos_carta1 + pibCapita_carta1 + 1 / densidadePopulacional_carta1;
    poder_carta2 = populacao_carta2 + area_carta2 + pib_carta2 + pontosTuristicos_carta2 + pibCapita_carta2 + 1 / densidadePopulacional_carta2;

    // Mostra os dados das duas cartas na tela
    printf("\nAgora serão mostrados os dados das duas cartas \n\n");

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", cidade_carta1);
    printf("População: %lu \n", populacao_carta1);
    printf("Área: %.2f km² \n", area_carta1);
    printf("PIB: %.2f bilhões de reais \n", pib_carta1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos_carta1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional_carta1);
    printf("PIB per Capita: %.2f reais \n\n", pibCapita_carta1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %.2f km² \n", area_carta2);
    printf("PIB: %.2f bilhões de reais \n", pib_carta2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos_carta2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional_carta2);
    printf("PIB per Capita: %.2f reais \n\n", pibCapita_carta2);

    // Compara os atributos e mostra o ganhador na tela
    printf("Agora será feita uma comparação entre as duas cartas\n\n");

    int ganhadorPopulacao = (populacao_carta1 > populacao_carta2) + (populacao_carta1 < populacao_carta2) * 2;
    int ganhadorArea = (area_carta1 > area_carta2) + (area_carta1 < area_carta2) * 2;
    int ganhadorPib = (pib_carta1 > pib_carta2) + (pib_carta1 < pib_carta2) * 2;
    int ganhadorPontosTuristicos = (pontosTuristicos_carta1 > pontosTuristicos_carta2) + (pontosTuristicos_carta1 < pontosTuristicos_carta2) * 2;
    int ganhadorDensidade = (densidadePopulacional_carta1 < densidadePopulacional_carta2) + (densidadePopulacional_carta1 > densidadePopulacional_carta2) * 2;
    int ganhadorPibCapita = (pibCapita_carta1 > pibCapita_carta2) + (pibCapita_carta1 < pibCapita_carta2) * 2;
    int ganhadorPoder = (poder_carta1 > poder_carta2) + (poder_carta1 < poder_carta2) * 2;

    printf("População: Carta %d venceu (%d)\n", ganhadorPopulacao, populacao_carta1 > populacao_carta2);
    printf("Área: Carta %d venceu (%d)\n", ganhadorArea, area_carta1 > area_carta2);
    printf("PIB: Carta %d venceu (%d)\n", ganhadorPib, pib_carta1 > pib_carta2); 
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", ganhadorPontosTuristicos, pontosTuristicos_carta1 > pontosTuristicos_carta2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", ganhadorDensidade, densidadePopulacional_carta1 < densidadePopulacional_carta2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", ganhadorPibCapita, pibCapita_carta1 > pibCapita_carta2);
    printf("Super Poder: Carta %d venceu (%d)\n", ganhadorPoder, poder_carta1 > poder_carta2);

    return 0;
}
