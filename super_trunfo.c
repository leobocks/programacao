#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 int populacao, turistico, populacao2, turistico2;
 float area, area2; 
 float pib, pib2;
 char estado, estado2;
 char codigocidade[10], codigocarta[10], nomecidade[10];
 char codigocidade2[10], codigocarta2[10], nomecidade2[10];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 printf("Digite uma letra para representar o Estado: \n");
 scanf("%c", &estado);

 printf("Use uma letra e um número para o código da carta: \n");
 scanf("%s", &codigocarta);

 printf("Digite o nome da cidade: \n");
 scanf("%s", &nomecidade);

 printf("Digite a população: \n");
 scanf("%d", &populacao);

 printf("Digite a área em km²: \n");
 scanf("%f", &area);

 printf("Digite o PIB: \n");
 scanf("%f", &pib);

 printf("Digite o número de pontos turísticos: \n");
 scanf("%d", &turistico);

  
 printf("Digite uma letra para representar o Estado: \n");
 scanf(" %c", &estado2);

 printf("Use uma letra e um número para o código da carta: \n");
 scanf("%s", &codigocarta2);

 printf("Digite o nome da cidade: \n");
 scanf("%s", &nomecidade2);

 printf("Digite a população: \n");
 scanf("%d", &populacao2);

 printf("Digite a área em km²: \n");
 scanf("%f", &area2);

 printf("Digite o PIB: \n");
 scanf("%f", &pib2);

 printf("Digite o número de pontos turísticos: \n");
 scanf("%d", &turistico2);
printf("\n\n");
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 printf("Carta 1 \n");
 printf("Estado: %c \n", estado);
 printf("Código: %s \n", codigocarta);
 printf("Nome da cidade: %s \n", nomecidade);
 printf("População: %d \n", populacao);
 printf("Área em km²: %f \n", area);
 printf("PIB: %f \n", pib);
 printf("Número de pontos turísticos: %d \n\n", turistico);

 printf("Carta 2 \n");
 printf("Estado: %c \n", estado2);
 printf("Código: %s \n", codigocarta2);
 printf("Nome da cidade: %s \n", nomecidade2);
 printf("População: %d \n", populacao2);
 printf("Área em km²: %f \n", area2);
 printf("PIB: %f \n", pib2);
 printf("Número de pontos turísticos: %d \n", turistico2);

 return 0;
}
