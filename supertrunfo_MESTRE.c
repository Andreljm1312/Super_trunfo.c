#include <stdio.h>

int main(){

//Estrutura de dados para armazenamento
//População (int)
//Área (float)
//PIB (float)
//Número de pontos turísticos (int)
struct Trunfo{
    char estado;//estado(ex: A;B;C)
    char codigo[4];//codigo da carta de 01 a 04(ex: A01,B03)
    char cidade[20];//nome da cidade(ex: Rio de Janeiro)
    int habitantes; //numero de habitantes
    float area; //area da cidade em quilometros
    float PIB; //produto interno bruto da cidade
    int Pontos_turisticos; //quantidade de pontos turisticos
    float Densidade_Populacional; //o número de habitantes por quilômetro quadrado
    float PIB_per_Capita; //a riqueza média por pessoa na cidade
};

struct Trunfo carta1; //variavel do tipo estrutura
//cartas
//cadastro da primeria carta
printf("cadastre a 1° carta:\n");
printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
scanf("%c", &carta1.estado);
printf("digite o codigo da carta de 01 a 04(ex: A01,B03): \n");
scanf("%3s", carta1.codigo);
printf("Digite o nome da cidade: \n");
scanf("%s", carta1.cidade);
printf("digite o numero de habitantes: \n");
scanf("%d", &carta1.habitantes);
printf("Digitar a area da cidade em quilometros: \n");
scanf("%f", &carta1.area);
printf("Digitar o PIB: \n");
scanf("%f", &carta1.PIB);
printf("Quantos pontos turisticos tem: \n");
scanf("%d", &carta1.Pontos_turisticos);

 // Valores da Densidade e PIB e da 1ª carta
    carta1.Densidade_Populacional = carta1.habitantes / carta1.area;
    carta1.PIB_per_Capita = (carta1.PIB * 1000000000) / carta1.habitantes;

//calculo do Super Poder
    carta1.super_poder = ((float)carta1.habitantes + carta1.area + carta1.PIB + carta1.Pontos_turisticos + carta1.PIB_per_Capita) + (1/ carta1.Densidade_Populacional);
    
struct Trunfo carta2; //variavel do tipo estrutura
//cartas
//cadastro da segunda carta
printf("cadastre a 2° carta:\n");
printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
scanf(" %c", &carta2.estado);
printf("digite o codigo da carta de 01 a 04(ex: A01,B03): \n");
scanf("%3s", carta2.codigo);
printf("Digite o nome da cidade: \n");
scanf("%s", carta2.cidade);
printf("digite o numero de habitantes: \n");
scanf("%d", &carta2.habitantes);
printf("Digitar a area da cidade em quilometros: \n");
scanf("%f", &carta2.area);
printf("Digitar o PIB: \n");
scanf("%f", &carta2.PIB);
printf("Quantos pontos turisticos tem: \n");
scanf("%d", &carta2.Pontos_turisticos);

 // Valores da Densidade e PIB e da 2ª carta
    carta2.Densidade_Populacional = carta2.habitantes / carta2.area;
    carta2.PIB_per_Capita = (carta2.PIB * 1000000000) / carta2.habitantes;

//calculo do Super Poder
    carta2.super_poder = ((float)carta2.habitantes + carta2.area + carta2.PIB + carta2.Pontos_turisticos + carta2.PIB_per_Capita) + (1/ carta2.Densidade_Populacional);

    
//EXIBIÇÃO PRIMEIRA CARTA

printf("\nPrimeira carta: \n");
printf("Estado: %c\n", carta1.estado);
printf("Código: %s\n", carta1.codigo);
printf("Nome da Cidade: %s\n", carta1.cidade);
printf("População: %d\n", carta1.habitantes);
printf("Área: %.2f km²\n", carta1.area);
printf("PIB:%.2f bilhões de reais\n", carta1.PIB);
printf("Número de Pontos Turísticos: %d\n",carta1.Pontos_turisticos);
printf("Densidade Populacional: %.2f hab/km²\n", carta1.Densidade_Populacional);
printf("PIB per Capita: %.2f reais\n", carta1.PIB_per_Capita);
    
//EXIBIÇÃO SEGUNDA CARTA

printf("\nSegunda carta: \n");
printf("Estado: %c\n", carta2.estado);
printf("Código: %s\n", carta2.codigo);
printf("Nome da Cidade: %s\n", carta2.cidade);
printf("População: %d\n", carta2.habitantes);
printf("Área: %.2f km²\n", carta2.area);
printf("PIB:%.2f bilhões de reais\n", carta2.PIB);
printf("Número de Pontos Turísticos: %d\n",carta2.Pontos_turisticos);
printf("Densidade Populacional: %.2f hab/km²\n", carta2.Densidade_Populacional);
printf("PIB per Capita: %.2f reais\n", carta2.PIB_per_Capita);

// Comparações de cartas

    printf("Comparação das Cartas:\n");

    // Habitantes (maior população vence)
    printf("População: Carta %d venceu (%d)\n",
           (carta1.habitantes > carta2.habitantes) * 1 + (carta2.habitantes >= carta1.habitantes) * 2,
           carta1.habitantes > carta2.habitantes);

    // Área em KM (maior vence)
    printf("Área: Carta %d venceu (%d)\n",
           (carta1.area > carta2.area) * 1 + (carta2.area >= carta1.area) * 2,
           carta1.area > carta2.area);

    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.PIB > carta2.PIB) * 1 + (carta2.PIB >= carta1.PIB) * 2,
           carta1.PIB > carta2.PIB);

    // Pontos Turísticos (maior vence) - CORRIGIDO
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (carta1.Pontos_turisticos > carta2.Pontos_turisticos) * 1 + (carta2.Pontos_turisticos >= carta1.Pontos_turisticos) * 2,
           carta1.Pontos_turisticos > carta2.Pontos_turisticos);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (carta1.Densidade_Populacional < carta2.Densidade_Populacional) * 1 + (carta1.Densidade_Populacional > carta2.Densidade_Populacional) * 2,
           carta1.Densidade_Populacional < carta2.Densidade_Populacional);

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (carta1.PIB_per_Capita > carta2.PIB_per_Capita) * 1 + (carta2.PIB_per_Capita >= carta1.PIB_per_Capita) * 2,
           carta1.PIB_per_Capita > carta2.PIB_per_Capita);

    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n",
           (carta1.super_poder > carta2.super_poder) * 1 + (carta2.super_poder >= carta1.super_poder) * 2,
           carta1.super_poder > carta2.super_poder);

return 0;
}
