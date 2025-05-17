#include <stdio.h>

int main() {
    // Estrutura de dados para armazenamento
    struct Trunfo {
        char estado; // estado (ex: A, B, C)
        char codigo[4]; // código da carta de 01 a 04 (ex: A01, B03)
        char cidade[20]; // nome da cidade (ex: Rio de Janeiro)
        int habitantes; // número de habitantes
        float area; // área da cidade em quilômetros quadrados
        float PIB; // produto interno bruto da cidade
        int Pontos_turisticos; // quantidade de pontos turísticos
        float Densidade_Populacional; // número de habitantes por quilômetro quadrado
        float PIB_per_Capita; // riqueza média por pessoa na cidade
        float super_poder; // variável calculada
    };

    struct Trunfo carta1; // variável do tipo estrutura para a primeira carta
    struct Trunfo carta2; // variável do tipo estrutura para a segunda carta

    // Cadastro da primeira carta
    printf("Cadastre a 1° carta:\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &carta1.estado); // Adiciona o espaço para evitar erro no primeiro scanf
    printf("Digite o código da carta de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", carta1.codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", carta1.cidade);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &carta1.habitantes);
    printf("Digite a área da cidade em quilômetros: \n");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: \n");
    scanf("%f", &carta1.PIB);
    printf("Quantos pontos turísticos tem: \n");
    scanf("%d", &carta1.Pontos_turisticos);

    // Cálculos da densidade e PIB per capita para a carta 1
    carta1.Densidade_Populacional = carta1.habitantes / carta1.area;
    carta1.PIB_per_Capita = carta1.PIB / carta1.habitantes;

    // Cálculo do super poder
    carta1.super_poder = ((float)carta1.habitantes + carta1.area + carta1.PIB + carta1.Pontos_turisticos + carta1.PIB_per_Capita) + (1.0f / carta1.Densidade_Populacional);

    // Cadastro da segunda carta
    printf("Cadastre a 2° carta:\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &carta2.estado); // Adiciona o espaço para evitar erro no primeiro scanf
    printf("Digite o código da carta de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", carta2.codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", carta2.cidade);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &carta2.habitantes);
    printf("Digite a área da cidade em quilômetros: \n");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: \n");
    scanf("%f", &carta2.PIB);
    printf("Quantos pontos turísticos tem: \n");
    scanf("%d", &carta2.Pontos_turisticos);

    // Cálculos da densidade e PIB per capita para a carta 2
    carta2.Densidade_Populacional = carta2.habitantes / carta2.area;
    carta2.PIB_per_Capita = carta2.PIB / carta2.habitantes;

    // Cálculo do super poder
    carta2.super_poder = ((float)carta2.habitantes + carta2.area + carta2.PIB + carta2.Pontos_turisticos + carta2.PIB_per_Capita) + (1.0f / carta2.Densidade_Populacional);

    // Exibição da primeira carta
    printf("\nPrimeira carta: \n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.habitantes);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.Pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.Densidade_Populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.PIB_per_Capita);

    // Exibição da segunda carta
    printf("\nSegunda carta: \n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.habitantes);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.Pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.Densidade_Populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.PIB_per_Capita);

    // Comparação de cartas (Atributo: População)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %d habitantes\n", carta1.habitantes);
    printf("Carta 2 - %d habitantes\n", carta2.habitantes);
    if (carta1.habitantes > carta2.habitantes) {
        printf("Resultado: Carta 1 (%c) venceu\n", carta1.estado);
    } else {
        printf("Resultado: Carta 2 (%c) venceu\n", carta2.estado);
    }

    // Comparação de cartas (Atributo: Área)
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %.2f km²\n", carta1.area);
    printf("Carta 2 - %.2f km²\n", carta2.area);
    if (carta1.area > carta2.area) {
        printf("Resultado: Carta 1 (%c) venceu\n", carta1.estado);
    } else {
        printf("Resultado: Carta 2 (%c) venceu\n", carta2.estado);
    }

    // Comparação de cartas (Atributo: PIB)
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %.2f bilhões\n", carta1.PIB);
    printf("Carta 2 - %.2f bilhões\n", carta2.PIB);
    if (carta1.PIB > carta2.PIB) {
        printf("Resultado: Carta 1 (%c) venceu\n", carta1.estado);
    } else {
        printf("Resultado: Carta 2 (%c)
    
  
 return 0;
 }
