#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
  // Declaração de váriaveis do tipo char
  char estado_1[3], estado_2[3];
  char cod_1[5], cod_2[5];
  char cidade_1[50], cidade_2[50];

  // Declaração de váriaveis do tipo int
  int populacao_1, populacao_2, qtd_pontos_turisticos_1, qtd_pontos_turisticos_2;

  // Declaração de váriaveis do tipo float
  float area_1, area_2, pib_1, pib_2, densidade_pop1, densidade_pop2, pib_percapita1, pib_percapita2;

  // Cadastro das Cartas:
  // Lendo os dados da carta 1
  printf("Digite uma letra para o estado da carta 1: \n");
  scanf("%2s", estado_1);

  printf("Digite um código para a carta 1, o código deve ser a letra do estado seguida de um número, ex: A01: \n");
  scanf("%4s", cod_1);

  printf("Digite o nome da cidade da carta 1: \n");
  scanf(" %[^\n]", cidade_1);

  printf("Digite a população da cidade da carta 1: \n");
  scanf("%i", &populacao_1);

  printf("Digite a área da cidade da carta 1: \n");
  scanf("%f", &area_1);

  printf("Digite o PIB da cidade da carta 1: \n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
  scanf("%i", &qtd_pontos_turisticos_1);

  // print para fazer para facilitar a visualização no terminal
  printf("*******************\n");

  // Lendo os dados da carta 2
  printf("Digite uma letra para o estado da carta 2: \n");
  scanf("%2s", estado_2);

  printf("Digite um código para a carta 2, o código deve ser a letra do estado seguida de um número, ex: B02: \n");
  scanf("%4s", cod_2);

  printf("Digite o nome da cidade da carta 2: \n");
  scanf(" %[^\n]", cidade_2);

  printf("Digite a população da cidade da carta 2: \n");
  scanf("%i", &populacao_2);

  printf("Digite a área da cidade da carta 2: \n");
  scanf("%f", &area_2);

  printf("Digite o PIB da cidade da carta 2: \n");
  scanf("%f", &pib_2);

  printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
  scanf("%i", &qtd_pontos_turisticos_2);

  // calculo da densidade populacional e PIB per capita
  // usando o casting para forçar a conversão de dados
  densidade_pop1 = (float)populacao_1 / area_1;
  densidade_pop2 = (float)populacao_2 / area_2;
  // multiplicando o pib pelo o fato de o valor ser em bilhões
  pib_percapita1 = ((float)pib_1 * 1000000000) / populacao_1;
  pib_percapita2 = ((float)pib_2 * 1000000000) / populacao_2;

  // Exibição dos Dados das Cartas:
  printf("==== Carta 1: ====\n");
  printf("Estado: %s \n", estado_1);
  printf("Código: %s \n", cod_1);
  printf("Nome da cidade: %s \n", cidade_1);
  printf("População: %i \n", populacao_1);
  printf("Área: %.2f km² \n", area_1);
  printf("PIB: %.2f bilhões de reais \n", pib_1);
  printf("Número de pontos turísticos: %i \n", qtd_pontos_turisticos_1);
  printf("Densidade populacional: %.2f hab/km² \n", densidade_pop1);
  printf("PIB per Capita: %.2f reais \n", pib_percapita1);

  printf("==== Carta 2: ====\n");
  printf("Estado: %s \n", estado_2);
  printf("Código: %s \n", cod_2);
  printf("Nome da cidade: %s \n", cidade_2);
  printf("População: %i \n", populacao_2);
  printf("Área: %.2f km² \n", area_2);
  printf("PIB: %.2f bilhões de reais \n", pib_2);
  printf("Número de pontos turísticos: %i \n", qtd_pontos_turisticos_2);
  printf("Densidade populacional: %.2f hab/km² \n", densidade_pop2);
  printf("PIB per Capita: %.2f reais \n", pib_percapita2);

  printf("*******************\n");

  // comparação de atributos das cartas
  // escolhi o atributo população para fazer a comparação
  printf("Comparação de cartas (Atributo: População):\n");
  printf("Carta 1 - %s (%s): %i \n", cidade_1, estado_1, populacao_1);
  printf("Carta 2 - %s (%s): %i \n", cidade_2, estado_2, populacao_2);

  if (populacao_1 > populacao_2)
  {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
  }
  else
  {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
  }

  return 0;
}
