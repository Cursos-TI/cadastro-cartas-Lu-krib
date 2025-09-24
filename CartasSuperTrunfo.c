#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao, pontosTuristicos;
  char codigo[4], estado, nomeCidade[50];
  float pib, area;
  // Área para entrada de dados
  printf("Cadastro de cartas");
  printf("**================**\n");

  printf("Estado (A - H): ");
  scanf(" %c", &estado);

  printf("Código da carta (Ex: A01, B01):  ");
  scanf("%s", &codigo);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", &nomeCidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área (em km²): ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);
  
  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos);
  
  // Área para exibição dos dados da cidade
  printf("===================\n===================\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turisticos: %d\n", pontosTuristicos);
  printf("===================\n===================\n");







  
return 0;
} 
