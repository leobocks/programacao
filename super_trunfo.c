#include <stdio.h>

// Desafio Super Trunfo - mestre
// Como cadastrar cartas
// Siga as indicações para cadastrar as cartas



int main() {
    // Estado é representado apenas por um caractere
    // População agora aceita números maiores
 int turistico, turistico2;
 unsigned long int populacao, populacao2;
 float area, area2;
 float pib, pib2;
 float superpoder, superpoder2;
 float densidade, densidade2;
 float rendaper, rendaper2;  
 char estado, estado2;
 char codigocidade[10], codigocarta[10], nomecidade[10];
 char codigocidade2[10], codigocarta2[10], nomecidade2[10];
 densidade = populacao / area;
 densidade2 = populacao2 / area2;
 rendaper = pib / populacao;
 rendaper2 = pib2 / populacao2;    
    
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
 scanf("%ld", &populacao);

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
 scanf("%ld", &populacao2);

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
 printf("Número de pontos turísticos: %d \n", turistico);
 densidade = populacao / area;
 printf("Densidade Populacional: %.2f hab/km²\n", densidade);
 rendaper = pib / populacao;   
 printf("PIB per Capta: %.2f reais\n\n", rendaper);
      
 printf("Carta 2 \n");
 printf("Estado: %c \n", estado2);
 printf("Código: %s \n", codigocarta2);
 printf("Nome da cidade: %s \n", nomecidade2);
 printf("População: %d \n", populacao2);
 printf("Área em km²: %f \n", area2);
 printf("PIB: %f \n", pib2);
 printf("Número de pontos turísticos: %d \n", turistico2);
 densidade2 = populacao2 / area2;   
 printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
 rendaper2 = pib2 / populacao2;    
 printf("PIB per Capta: %.2f reais\n\n", rendaper2);
 
       // Cálculo do Super Poder
      // Superpoder é a soma de todos os atributos mais o inverso da densidade - quanto menor a densidade, maior o poder
       
    superpoder = populacao + area + pib + turistico + rendaper + (1.0 / densidade);
    superpoder2 = populacao2 + area2 + pib2 + turistico2 + rendaper2 + (1.0 / densidade2);
 
    // Comparação das cartas - usando if e else
  printf("\nComparação de Cartas:\n");
    printf("População: ");
    if (populacao > populacao2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
    printf("Área: ");
    if (area > area2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
    printf("PIB: ");
    if (pib > pib2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
    printf("Pontos Turísticos: ");
    if (turistico > turistico2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
    printf("Densidade Populacional: ");
    if (densidade < densidade2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
    printf("PIB per Capita: ");
    if (rendaper > rendaper2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");
    printf("Super Poder: ");
    if (superpoder > superpoder2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

 return 0;
}
