#include <stdio.h>


int main() {
  
  int atributo; 
  
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
  
  
  // Área para exibição dos dados de comparação
  printf("Escolha o atributo a ser comparado: \n");
  printf("1 para População\n");
  printf("2 para Área\n");
  printf("3 para PIB\n");
  printf("4 para Pontos Turísticos\n");
  printf("5 para Densidade Populacional\n");
  printf("6 para Pib per Capita\n");
  printf("7 para Super Poder\n");

  scanf("%d", &atributo);

  switch (atributo){                                                          //Parte do codigo onde o usuario escolhe o atributo a ser comparado
                                                                              //escolhido o atributo vai para a seçao de caso
    case 1:                                                                   //if para comparaçao e exibiçao do resultado
    
    if(populacao > populacao2){
    printf("Carta 1: %s (%s): %lu\n",nomeCidade, estado, populacao);
    printf("Carta 2: %s (%s): %lu\n",nomeCidade2, estado2, populacao2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(populacao2 > populacao){
    printf("Carta 1: %s (%s): %lu\n",nomeCidade, estado, populacao);
    printf("Carta 2: %s (%s): %lu\n",nomeCidade2, estado2, populacao2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }
  else{
    printf("Empate");
  }
    break;
  
    case 2:
    if(area > area2){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, area);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, area2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(area2 > area){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, area);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, area2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }else{
    printf("Empate");
  }
   
    break;

    case 3:
    if(pib > pib2){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, pib);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, pib2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(pib2 > pib){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, pib);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, pib2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }else{
    printf("Empate");
  }
   
    break;

    case 4:
    if(pontosTuristicos > pontosTuristicos2){
    printf("Carta 1: %s (%s): %d\n",nomeCidade, estado, pontosTuristicos);
    printf("Carta 2: %s (%s): %d\n",nomeCidade2, estado2, pontosTuristicos2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(pontosTuristicos2 > pontosTuristicos){
    printf("Carta 1: %s (%s): %d\n",nomeCidade, estado, pontosTuristicos);
    printf("Carta 2: %s (%s): %d\n",nomeCidade2, estado2, pontosTuristicos2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }else{
    printf("Empate");
  }
   
    break;

    case 5:
    if(densidadePopulacional < densidadePopulacional2){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, densidadePopulacional);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, densidadePopulacional2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(densidadePopulacional2 < densidadePopulacional){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, densidadePopulacional);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, densidadePopulacional2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }else{
    printf("Empate");
  }
   
    break;

    case 6:
    if(pibPCapita > pibPCapita2){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, pibPCapita);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, pibPCapita2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(pibPCapita2 > pibPCapita){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, pibPCapita);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, pibPCapita2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }else{
    printf("Empate");
  }
   
    break;

    case 7:
    if(superPoder > superPoder2){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, superPoder);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, superPoder2);
    printf("Carta 1 %s Venceu!\n",nomeCidade);
  }else if(superPoder2 > superPoder){
    printf("Carta 1: %s (%s): %.2f\n",nomeCidade, estado, superPoder);
    printf("Carta 2: %s (%s): %.2f\n",nomeCidade2, estado2, superPoder2);
    printf("Carta 2 %s Venceu!\n",nomeCidade2); 
  }else{
    printf("Empate");
  } 
   
    break;

  default:
    break;
  }

  
return 0;
} 
