

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


    char estado;
    char codigocarta [4];
    char nomecidade [20];
    int populacao; 
    float area;
    double PIB;
    int pontosturisticos;

    printf("Carta 1\n");

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado);

    printf("Digite a letra anterior seguido de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome de uma cidade que não seja composto: \n");
    scanf("%s", nomecidade);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km2: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 1\n\n");

    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);


 
   // printf("Idade: %d anos\n", idade);
   // printf("Altura: %.2f metros\n", altura);
   // printf("Saldo Bancário: %.2f reais\n", saldoBancario);
   // printf("Inicial do Nome: %c\n", inicial);
   // printf("Nome: %s\n", nome);
 
  







  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
