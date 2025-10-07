#include <stdio.h>


int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  unsigned long int populacao;
  int pontosTuristicos;                                                                    // Armazena numeros inteiros
  char codigo[4], estado[2], nomeCidade[50];   // Armazena texto
  float pib, area, pibPCapita, densidadePopulacional, superPoder;                          // Armazena numeros decimais
  
  //Propriedades da segunda carta
  unsigned long int populacao2;
  int pontosTuristicos2;                                                                   
  char codigo2[4], estado2[2], nomeCidade2[50];  
  float pib2, area2, pibPCapita2, densidadePopulacional2, superPoder2;                      
  
  
  // Área para entrada de dados
  printf("Cadastro de cartas\n");        //mensagem para o usuário
  printf("**===========================**\n");

  printf("Informações da primeira carta\n");
  printf("Estado (A - H): ");          //Pede e lê a letra do estado (De A–H), atribuindo à variável "estado"
  scanf(" %s", estado);

  printf("Código da carta (Ex: A01, B01):  ");         //Pede e lê o código da carta, atribuindo à variável "codigo"
  scanf("%s", codigo);

  printf("Nome da cidade: ");          //Pede e lê o nome da cidade, aceitando espaços (" %[^\n]"), atribuindo à variável "nomeCidade"
  scanf(" %[^\n]", nomeCidade);

  printf("População: ");            //Pede e lê a população da cidade, atribuindo à variável "populacao"
  scanf("%lu", &populacao);

  printf("Área (em km²): ");        //Pede e lê a área da cidade, atribuindo à variável "area"
  scanf("%f", &area);

  printf("PIB: ");              //Pede e lê o PIB da cidade, atribuindo à variável "pib"
  scanf("%f", &pib);
  
  printf("Numero de pontos turisticos: ");          //Pede e lê o número de pontos turísticos, atribuindo à variável "pontosTuristicos"
  scanf("%d", &pontosTuristicos);

  //Entrada de dados carta 2
  printf("Informações da segunda carta\n");
  printf("Estado (A - H): ");          //Pede e lê a letra do estado (De A–H), atribuindo à variável "estado2"
  scanf(" %s", estado2);

  printf("Código da carta (Ex: A01, B01):  ");         //Pede e lê o código da carta, atribuindo à variável "codigo2"
  scanf("%s", codigo2);

  printf("Nome da cidade: ");          //Pede e lê o nome da cidade, aceitando espaços (" %[^\n]"), atribuindo à variável "nomeCidade2"
  scanf(" %[^\n]", nomeCidade2);

  printf("População: ");            //Pede e lê a população da cidade, atribuindo à variável "populacao2"
  scanf("%lu", &populacao2);

  printf("Área (em km²): ");        //Pede e lê a área da cidade, atribuindo à variável "area2"
  scanf("%f", &area2);

  printf("PIB: ");              //Pede e lê o PIB da cidade, atribuindo à variável "pib2"
  scanf("%f", &pib2);
  
  printf("Numero de pontos turisticos: ");          //Pede e lê o número de pontos turísticos, atribuindo à variável "pontosTuristicos2"
  scanf("%d", &pontosTuristicos2);

  //Calculos das cartas
  densidadePopulacional = (float) populacao / area;
  pibPCapita = pib / (float) populacao;
  superPoder = (float) populacao + area + pib + pibPCapita + pontosTuristicos + (1.0f / densidadePopulacional);
  
  densidadePopulacional2 = (float) populacao2 / area2;
  pibPCapita2 = pib2 / (float) populacao2;
  superPoder2 = (float) populacao2 + area2 + pib2 + pibPCapita2 + pontosTuristicos2 + (1.0f / densidadePopulacional2);
  
  
  // Área para exibição dos dados da cidade 1
  printf("Informacoes carta numero 1\n");
  printf("===================\n===================\n");            //Saída final formatada para o usuário
  printf("Estado: %s\n", estado);                                  // "\n" indica quebra de linha    
  printf("Código: %s\n", codigo);                          
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);                                    // "%.2f" mostra numeros decimais com duas casas após a vírgula
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos turisticos: %d\n", pontosTuristicos);
  printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional);
  printf("PIB per capita: %.2f reais\n", pibPCapita);

  printf("===================\n===================\n");

  // Área para exibição dos dados da cidade 2
  printf("Informacoes carta numero 2\n");
  printf("===================\n===================\n");            //Saída final formatada para o usuário
  printf("Estado: %s\n", estado2);                                  // "\n" indica quebra de linha    
  printf("Código: %s\n", codigo2);                          
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);                                    // "%.2f" mostra numeros decimais com duas casas após a vírgula
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos turisticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional2);
  printf("PIB per capita: %.2f reais\n", pibPCapita2);
  printf("===================\n===================\n");
  

  //Variaveis Menu dinamico
  int atributo1, atributo2;
  // Área para exibição dos dados de comparação
  printf("Escolha o atributo a ser comparado: \n");
  printf("1 para População\n");
  printf("2 para Área\n");
  printf("3 para PIB\n");
  printf("4 para Pontos Turísticos\n");
  printf("5 para Densidade Populacional\n");
  printf("6 para Pib per Capita\n");
  printf("7 para Super Poder\n");

    scanf("%d", &atributo1);
  printf("Escolha o segundo atributo: \n");
  for(int i=1; i<=7; i++) {
    if (i != atributo1) {
      switch(i){
        case 1:
        printf("1 - População\n");
        break;
        case 2:
        printf("2 - Área\n");
        break;
        case 3:
        printf("3 - Pib\n");
        break;
        case 4:
        printf("4 - Pontos turisticos\n");
        break;
        case 5:
        printf("5 - Densidade Populacional\n");
        break;
        case 6:
        printf("6 - PIB per capita\n");
        break;
        case 7:
        printf("7 - Super poder\n");
        break;
        
      }
    }
  }
  printf("Atributo 2: ");
  scanf("%d", &atributo2);

  if(atributo1 == atributo2) {
    printf("Os atributos devem ser diferentes");
  return 0;
  }
  
  

  float valor1Carta1, valor2Carta1, valor1Carta2, valor2Carta2;
  
  switch(atributo1) {
    case 1:
    valor1Carta1 = populacao;
    valor1Carta2 = populacao2;
    break;
    case 2:
    valor1Carta1 = area;
    valor1Carta2 = area2;
    break;
    case 3:
    valor1Carta1 = pib;
    valor1Carta2 = pib2;
    break;
    case 4:
    valor1Carta1 = pontosTuristicos;
    valor1Carta2 = pontosTuristicos2;
    break;
    case 5:
    valor1Carta1 = densidadePopulacional;
    valor1Carta2 = densidadePopulacional2;
    break;
    case 6:
    valor1Carta1 = pibPCapita;
    valor1Carta2 = pibPCapita2;
    break;
    case 7:
    valor1Carta1 = superPoder;
    valor1Carta2 = superPoder2;
    break;
  }

    //Atribuição do segundo atributo escolhido
    switch(atributo2) {
    case 1:
    valor2Carta1 = populacao;
    valor2Carta2 = populacao2;
    break;
    case 2:
    valor2Carta1 = area;
    valor2Carta2 = area2;
    break;
    case 3:
    valor2Carta1 = pib;
    valor2Carta2 = pib2;
    break;
    case 4:
    valor2Carta1 = pontosTuristicos;
    valor2Carta2 = pontosTuristicos2;
    break;
    case 5:
    valor2Carta1 = densidadePopulacional;
    valor2Carta2 = densidadePopulacional2;
    break;
    case 6:
    valor2Carta1 = pibPCapita;
    valor2Carta2 = pibPCapita2;
    break;
    case 7:
    valor2Carta1 = superPoder;
    valor2Carta2 = superPoder2;
    break;
  }

  //Comparação das variáveis
  int resultado1 = (atributo1 == 5) ? (valor1Carta1 < valor1Carta2) : (valor1Carta1 > valor1Carta2);
  int resultado2 = (atributo2 == 5) ? (valor2Carta1 < valor2Carta2) : (valor2Carta1 > valor2Carta2);

  float soma1 = valor1Carta1 + valor2Carta1;
  float soma2 = valor1Carta2 + valor2Carta2;

  printf("Resultado da comparaçao dos atributos: \n");
  printf("Carta 1: %s (%s)\n", nomeCidade, estado);
  printf("Atributo 1: %.2f\n", valor1Carta1);
  printf("Atributo 2: %.2f\n", valor2Carta1);
  printf("Soma total dos atributos: %.2f\n", soma1);

  
  printf("Resultado da comparaçao dos atributos: \n");
  printf("Carta 2: %s (%s)\n", nomeCidade2, estado2);
  printf("Atributo 1: %.2f\n", valor1Carta2);
  printf("Atributo 2: %.2f\n", valor2Carta2);
  printf("Soma total dos atributos: %.2f\n", soma2);

  //Vitoria por atributo

    printf("Comparação individual dos atributos:\n");

  if (resultado1)
    printf("Carta 1 venceu no atributo 1.\n");
else if (valor1Carta1 == valor1Carta2)
    printf("Empate no atributo 1.\n");
else
    printf("Carta 2 venceu no atributo 1.\n");

if (resultado2)
    printf("Carta 1 venceu no atributo 2.\n");
else if (valor2Carta1 == valor2Carta2)
    printf("Empate no atributo 2.\n");
else
    printf("Carta 2 venceu no atributo 2.\n");
  //Soma dos atributos

  if(soma1 > soma2) {
    printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade);
  }else if (soma2 > soma1){
    printf("Resultado: Carta 2 %s Venceu\n", nomeCidade2);
  }else{
    printf("Resultado: EMPATE\n");
  }
  
return 0;
} 
