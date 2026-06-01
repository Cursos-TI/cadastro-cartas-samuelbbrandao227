#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[4];
  char cidade[50];
  int populacao, pontos_turisticos;
  float area, pib;

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2, pontos_turisticos2;
  float area2, pib2;

  // Área para entrada de dados
  printf("Informe os dados da carta 1:\n");

  printf("Estado: ");
  scanf(" %c", &estado);
  printf("Código: ");
  scanf("%s", codigo);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade);
  printf("População: ");
  scanf("%d", &populacao);
  printf("Área (km²): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos);

  float dens_pop = populacao / area;
  float pib_per_capita = pib / populacao;

  printf("Informe os dados da carta 2:\n");

  printf("Estado: ");
  scanf(" %c", &estado2);
  printf("Código: ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);

  float dens_pop2 = populacao2 / area2;
  float pib_per_capita2 = pib2 / populacao2;
 
  // Área para exibição dos dados da cidade
  printf("\nDados da Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$%.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
  printf("Densidade Populacional: %f hab/km²\n", dens_pop);
  printf("PIB per Capita: R$%.2f\n", pib_per_capita);

  printf("\nDados da Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$%.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %f hab/km²\n", dens_pop2);
  printf("PIB per Capita: R$%.2f\n", pib_per_capita2);
  
  return 0;
} 
