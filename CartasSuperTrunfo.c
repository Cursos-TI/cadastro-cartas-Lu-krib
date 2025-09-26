#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao, pontosTuristicos;          // Armazena numeros inteiros
  char codigo[4], estado, nomeCidade[50];   // Armazena texto
  float pib, area;                          // Armazena numeros decimais
  //Propriedades da segunda carta
  int populacao2, pontosTuristicos2;          // Armazena numeros inteiros
  char codigo2[4], estado2, nomeCidade2[50];   // Armazena texto
  float pib2, area2;                          // Armazena numeros decimais
  // Área para entrada de dados
  printf("Cadastro de cartas\n");        //mensagem para o usuário
  printf("**===========================**\n");

  printf("Informações da primeira carta\n");
  printf("Estado (A - H): ");          //Pede e lê a letra do estado (De A–H), atribuindo à variável "estado"
  scanf(" %c", &estado);

  printf("Código da carta (Ex: A01, B01):  ");         //Pede e lê o código da carta, atribuindo à variável "codigo"
  scanf("%s", codigo);

  printf("Nome da cidade: ");          //Pede e lê o nome da cidade, aceitando espaços (" %[^\n]"), atribuindo à variável "nomeCidade"
  scanf(" %[^\n]", nomeCidade);

  printf("População: ");            //Pede e lê a população da cidade, atribuindo à variável "populacao"
  scanf("%d", &populacao);

  printf("Área (em km²): ");        //Pede e lê a área da cidade, atribuindo à variável "area"
  scanf("%f", &area);

  printf("PIB: ");              //Pede e lê o PIB da cidade, atribuindo à variável "pib"
  scanf("%f", &pib);
  
  printf("Numero de pontos turisticos: ");          //Pede e lê o número de pontos turísticos, atribuindo à variável "pontosTuristicos"
  scanf("%d", &pontosTuristicos);

  //Entrada de dados carta 2
  printf("Informações da segunda carta");
  printf("Estado (A - H): ");          //Pede e lê a letra do estado (De A–H), atribuindo à variável "estado2"
  scanf(" %c", &estado2);

  printf("Código da carta (Ex: A01, B01):  ");         //Pede e lê o código da carta, atribuindo à variável "codigo2"
  scanf("%s", codigo2);

  printf("Nome da cidade: ");          //Pede e lê o nome da cidade, aceitando espaços (" %[^\n]"), atribuindo à variável "nomeCidade2"
  scanf(" %[^\n]", nomeCidade2);

  printf("População: ");            //Pede e lê a população da cidade, atribuindo à variável "populacao2"
  scanf("%d", &populacao2);

  printf("Área (em km²): ");        //Pede e lê a área da cidade, atribuindo à variável "area2"
  scanf("%f", &area2);

  printf("PIB: ");              //Pede e lê o PIB da cidade, atribuindo à variável "pib2"
  scanf("%f", &pib2);
  
  printf("Numero de pontos turisticos: ");          //Pede e lê o número de pontos turísticos, atribuindo à variável "pontosTuristicos2"
  scanf("%d", &pontosTuristicos2);
  
  
// Área para exibição dos dados da cidade 1
  printf("Informacoes carta numero 1\n");
  printf("=========================\n=========================\n");            //Saída final formatada para o usuário
  printf("Estado: %c\n", estado);                                              // "\n" indica quebra de linha    
  printf("Código: %s\n", codigo);                          
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);                                    // "%.2f" mostra numeros decimais com duas casas após a vírgula
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos turisticos: %d\n", pontosTuristicos);
  printf("=========================\n=========================\n");

  // Área para exibição dos dados da cidade 2
  printf("Informacoes carta numero 2\n");
  printf("=========================\n=========================\n");            //Saída final formatada para o usuário
  printf("Estado: %c\n", estado2);                                             // "\n" indica quebra de linha    
  printf("Código: %s\n", codigo2);                          
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);                                    // "%.2f" mostra numeros decimais com duas casas após a vírgula
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos turisticos: %d\n", pontosTuristicos2);
  printf("=========================\n=========================\n");






  
return 0;
} 
