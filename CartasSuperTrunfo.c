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
  scanf("%3s", codigo);
  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", cidade);
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
  scanf("%3s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", cidade2);
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

  int escolha, escolha2;
  printf("\nEscolha duas propriedades que deseja comparar (1-6):\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("Digite sua primeira escolha: ");
  scanf("%d", &escolha);
  while (escolha < 1 || escolha > 6) {
    printf("Escolha inválida! Por favor, escolha um número entre 1 e 6.\n");
    scanf("%d", &escolha);
  }
  
  printf((escolha != 1) ? "1. População\n" : "");
  printf((escolha != 2) ? "2. Área\n" : "");
  printf((escolha != 3) ? "3. PIB\n" : "");
  printf((escolha != 4) ? "4. Número de Pontos Turísticos\n" : "");
  printf((escolha != 5) ? "5. Densidade Populacional\n" : "");
  printf((escolha != 6) ? "6. PIB per Capita\n" : "");
  printf("Digite sua segunda escolha: ");
  scanf("%d", &escolha2);
  do {
    printf("Digite sua segunda escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 6) {
      printf("Escolha inválida! Por favor, escolha um número entre 1 e 6.\n");
    } else if (escolha2 == escolha) {
      printf("Você já escolheu essa propriedade! Por favor, escolha uma diferente.\n");
    }
  } while (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha);

  float soma1 = 0, soma2 = 0;

  printf("\n=== %s vs %s ===\n\n", cidade, cidade2); 

  switch (escolha) {
    case 1:
      printf("Atributo escolhido: População\n");
      printf("%s: %d\n", cidade, populacao);
      printf("%s: %d\n", cidade2, populacao2);
      printf("Comparação de População: %s\n", (populacao > populacao2) ? "Carta 1 venceu!" : (populacao < populacao2) ? "Carta 2 venceu!" : "Empate");
      soma1 += populacao;
      soma2 += populacao2;
      break;
    case 2:
      printf("Atributo escolhido: Área\n");
      printf("%s: %.2f km²\n", cidade, area);
      printf("%s: %.2f km²\n", cidade2, area2);
      printf("Comparação de Área: %s\n", (area > area2) ? "Carta 1 venceu!" : (area < area2) ? "Carta 2 venceu!" : "Empate");
      soma1 += area;
      soma2 += area2;
      break;
    case 3:
      printf("Atributo escolhido: PIB\n");
      printf("%s: R$%.2f\n", cidade, pib);
      printf("%s: R$%.2f\n", cidade2, pib2);
      printf("Comparação de PIB: %s\n", (pib > pib2) ? "Carta 1 venceu!" : (pib < pib2) ? "Carta 2 venceu!" : "Empate");
      soma1 += pib;
      soma2 += pib2;
      break;
    case 4:
      printf("Atributo escolhido: Número de Pontos Turísticos\n");
      printf("%s: %d\n", cidade, pontos_turisticos);
      printf("%s: %d\n", cidade2, pontos_turisticos2);
      printf("Comparação de Número de Pontos Turísticos: %s\n", (pontos_turisticos > pontos_turisticos2) ? "Carta 1 venceu!" : (pontos_turisticos < pontos_turisticos2) ? "Carta 2 venceu!" : "Empate");
      soma1 += pontos_turisticos;
      soma2 += pontos_turisticos2;
      break;
    case 5:
      printf("Atributo escolhido: Densidade Populacional\n");
      printf("%s: %f hab/km²\n", cidade, dens_pop);
      printf("%s: %f hab/km²\n", cidade2, dens_pop2);
      printf("Comparação de Densidade Populacional: %s\n", (dens_pop < dens_pop2) ? "Carta 1 venceu!" : (dens_pop > dens_pop2) ? "Carta 2 venceu!" : "Empate");
      soma1 += dens_pop;
      soma2 += dens_pop2;
      break;
    case 6:
      printf("Atributo escolhido: PIB per Capita\n");
      printf("%s: R$%.2f\n", cidade, pib_per_capita);
      printf("%s: R$%.2f\n", cidade2, pib_per_capita2);
      printf("Comparação de PIB per Capita: %s\n", (pib_per_capita > pib_per_capita2) ? "Carta 1 venceu!" : (pib_per_capita < pib_per_capita2) ? "Carta 2 venceu!" : "Empate");
      soma1 += pib_per_capita;
      soma2 += pib_per_capita2;
      break;
    default:
      printf("Escolha inválida!\n");
      break;
  }

  switch (escolha2) {
    case 1:
      printf("Atributo escolhido: População\n");
      printf("%s: %d\n", cidade, populacao);
      printf("%s: %d\n", cidade2, populacao2);
      printf("Comparação de População: %s\n", (populacao > populacao2) ? "Carta 1 venceu!" : (populacao < populacao2) ? "Carta 2 venceu!" : "Empate");
      soma1 += populacao;
      soma2 += populacao2;
      break;
    case 2:
      printf("Atributo escolhido: Área\n");
      printf("%s: %.2f km²\n", cidade, area);
      printf("%s: %.2f km²\n", cidade2, area2);
      printf("Comparação de Área: %s\n", (area > area2) ? "Carta 1 venceu!" : (area < area2) ? "Carta 2 venceu!" : "Empate");
      soma1 += area;
      soma2 += area2;
      break;
    case 3:
      printf("Atributo escolhido: PIB\n");
      printf("%s: R$%.2f\n", cidade, pib);
      printf("%s: R$%.2f\n", cidade2, pib2);
      printf("Comparação de PIB: %s\n", (pib > pib2) ? "Carta 1 venceu!" : (pib < pib2) ? "Carta 2 venceu!" : "Empate");
      soma1 += pib;
      soma2 += pib2;
      break;
    case 4:
      printf("Atributo escolhido: Número de Pontos Turísticos\n");
      printf("%s: %d\n", cidade, pontos_turisticos);
      printf("%s: %d\n", cidade2, pontos_turisticos2);
      printf("Comparação de Número de Pontos Turísticos: %s\n", (pontos_turisticos > pontos_turisticos2) ? "Carta 1 venceu!" : (pontos_turisticos < pontos_turisticos2) ? "Carta 2 venceu!" : "Empate");
      soma1 += pontos_turisticos;
      soma2 += pontos_turisticos2;
      break;
    case 5:
      printf("Atributo escolhido: Densidade Populacional\n");
      printf("%s: %f hab/km²\n", cidade, dens_pop);
      printf("%s: %f hab/km²\n", cidade2, dens_pop2);
      printf("Comparação de Densidade Populacional: %s\n", (dens_pop < dens_pop2) ? "Carta 1 venceu!" : (dens_pop > dens_pop2) ? "Carta 2 venceu!" : "Empate");
      soma1 += dens_pop;
      soma2 += dens_pop2;
      break;
    case 6:
      printf("Atributo escolhido: PIB per Capita\n");
      printf("%s: R$%.2f\n", cidade, pib_per_capita);
      printf("%s: R$%.2f\n", cidade2, pib_per_capita2);
      printf("Comparação de PIB per Capita: %s\n", (pib_per_capita > pib_per_capita2) ? "Carta 1 venceu!" : (pib_per_capita < pib_per_capita2) ? "Carta 2 venceu!" : "Empate");
      soma1 += pib_per_capita;
      soma2 += pib_per_capita2;
      break;
    default:
      printf("Escolha inválida!\n");
      break;
  }

  printf("\nResultado Final:\n");
  printf("Poder total da Carta 1: %.2f\n", soma1);
  printf("Poder total da Carta 2: %.2f\n", soma2);
  if (soma1 > soma2) {
    printf("Carta 1 venceu a partida!\n");
  } else if (soma1 < soma2) {
    printf("Carta 2 venceu a partida!\n");
  } else {
    printf("A partida terminou em empate!\n");
  }
  return 0;
}   
