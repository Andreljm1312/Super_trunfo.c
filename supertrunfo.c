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

//EXIBIÇÃO PRIMEIRA CARTA

printf("\nPrimeira carta: \n");
printf("Estado: %c\n", carta1.estado);
printf("Código: %s\n", carta1.codigo);
printf("Nome da Cidade: %s\n", carta1.cidade);
printf("População: %d\n", carta1.habitantes);
printf("Área: %.2f km²\n", carta1.area);
printf("PIB:%.2f bilhões de reais\n", carta1.PIB);
printf("Número de Pontos Turísticos: %d\n",carta1.Pontos_turisticos);

//EXIBIÇÃO SEGUNDA CARTA

printf("\nSegunda carta: \n");
printf("Estado: %c\n", carta2.estado);
printf("Código: %s\n", carta2.codigo);
printf("Nome da Cidade: %s\n", carta2.cidade);
printf("População: %d\n", carta2.habitantes);
printf("Área: %.2f km²\n", carta2.area);
printf("PIB:%.2f bilhões de reais\n", carta2.PIB);
printf("Número de Pontos Turísticos: %d\n",carta2.Pontos_turisticos);

return 0;
}
