#include <stdio.h>

// Desafio Super Trunfo - novato
// Como cadastrar cartas
// Siga as indicações para cadastrar as cartas



int main() {
    // Estado é representado apenas por uma letra
 int populacao, turistico, populacao2, turistico2;
 float area, area2; 
 float pib, pib2;
 char estado, estado2;
 char codigocidade[10], codigocarta[10], nomecidade[10];
 char codigocidade2[10], codigocarta2[10], nomecidade2[10];
    
    // Cadastro das Cartas:
    // Esta seção solicita que o usuário preencha os dados
    // Função scanf para captura digitação do usuário
    // Digitar apenas números ao preencher os dados (ex: 7000000)
    // Uso de " %c" com espaço para inserir a informação do estado2, sem isso a informação será pulada
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
    // Serão preenchidas 2 cartas sequencialmente
    // Os valores inseridos para cada atributo da cidade serão exibidos um por linha.

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
