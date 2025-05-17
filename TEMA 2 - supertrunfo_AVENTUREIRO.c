#include <stdio.h>
#include <string.h>

struct Trunfo {
    char estado; // Estado (ex: A, B, C)
    char codigo[4]; // Código da carta (ex: A01, B03)
    char cidade[20]; // Nome da cidade (ex: Rio de Janeiro)
    int habitantes; // Número de habitantes
    float area; // Área da cidade em quilômetros quadrados
    float PIB; // Produto Interno Bruto da cidade em bilhões de reais
    int Pontos_turisticos; // Número de pontos turísticos
    float Densidade_Populacional; // Densidade populacional (habitantes por km²)
    float PIB_per_Capita; // PIB per capita (riqueza média por pessoa)
    float super_poder; // Super poder calculado
};

// Função para comparar a população
void comparar_populacao(struct Trunfo carta1, struct Trunfo carta2) {
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %d\n", carta1.habitantes);
    printf("Carta 2 - %d\n", carta2.habitantes);
    if (carta1.habitantes > carta2.habitantes) {
        printf("Resultado: Carta 1 venceu\n");
    } else if (carta1.habitantes < carta2.habitantes) {
        printf("Resultado: Carta 2 venceu\n");
    } else {
        printf("Resultado: Empate\n");
    }
}

// Função para comparar a área
void comparar_area(struct Trunfo carta1, struct Trunfo carta2) {
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %.2f km²\n", carta1.area);
    printf("Carta 2 - %.2f km²\n", carta2.area);
    if (carta1.area > carta2.area) {
        printf("Resultado: Carta 1 venceu\n");
    } else if (carta1.area < carta2.area) {
        printf("Resultado: Carta 2 venceu\n");
    } else {
        printf("Resultado: Empate\n");
    }
}

// Função para comparar o PIB
void comparar_pib(struct Trunfo carta1, struct Trunfo carta2) {
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %.2f bilhões de reais\n", carta1.PIB);
    printf("Carta 2 - %.2f bilhões de reais\n", carta2.PIB);
    if (carta1.PIB > carta2.PIB) {
        printf("Resultado: Carta 1 venceu\n");
    } else if (carta1.PIB < carta2.PIB) {
        printf("Resultado: Carta 2 venceu\n");
    } else {
        printf("Resultado: Empate\n");
    }
}

// Função para comparar os pontos turísticos
void comparar_pontos_turisticos(struct Trunfo carta1, struct Trunfo carta2) {
    printf("Comparação de cartas (Atributo: Pontos turísticos):\n");
    printf("Carta 1 - %d\n", carta1.Pontos_turisticos);
    printf("Carta 2 - %d\n", carta2.Pontos_turisticos);
    if (carta1.Pontos_turisticos > carta2.Pontos_turisticos) {
        printf("Resultado: Carta 1 venceu\n");
    } else if (carta1.Pontos_turisticos < carta2.Pontos_turisticos) {
        printf("Resultado: Carta 2 venceu\n");
    } else {
        printf("Resultado: Empate\n");
    }
}

// Função para comparar a densidade demográfica
void comparar_densidade_demografica(struct Trunfo carta1, struct Trunfo carta2) {
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %.2f hab/km²\n", carta1.Densidade_Populacional);
    printf("Carta 2 - %.2f hab/km²\n", carta2.Densidade_Populacional);
    if (carta1.Densidade_Populacional < carta2.Densidade_Populacional) {
        printf("Resultado: Carta 1 venceu (menor densidade)\n");
    } else if (carta1.Densidade_Populacional > carta2.Densidade_Populacional) {
        printf("Resultado: Carta 2 venceu (menor densidade)\n");
    } else {
        printf("Resultado: Empate\n");
    }
}

// Função para comparar o PIB per capita
void comparar_pib_per_capita(struct Trunfo carta1, struct Trunfo carta2) {
    printf("Comparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %.2f reais\n", carta1.PIB_per_Capita);
    printf("Carta 2 - %.2f reais\n", carta2.PIB_per_Capita);
    if (carta1.PIB_per_Capita > carta2.PIB_per_Capita) {
        printf("Resultado: Carta 1 venceu\n");
    } else if (carta1.PIB_per_Capita < carta2.PIB_per_Capita) {
        printf("Resultado: Carta 2 venceu\n");
    } else {
        printf("Resultado: Empate\n");
    }
}

int main() {
    struct Trunfo carta1 = {'A', "A01", "Rio de Janeiro", 6700000, 1182.3, 0.7, 50, 5636.32, 1047.75}; // Exemplos para carta 1
    struct Trunfo carta2 = {'B', "B02", "São Paulo", 12300000, 1521.1, 1.2, 100, 8079.54, 1225.45}; // Exemplos para carta 2

    int opcao;

    // Menu de seleção
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção desejada (1-6): ");
    scanf("%d", &opcao);

    // Simulação de switch
    switch (opcao) {
        case 1:
            comparar_populacao(carta1, carta2);
            break;
        case 2:
            comparar_area(carta1, carta2);
            break;
        case 3:
            comparar_pib(carta1, carta2);
            break;
        case 4:
            comparar_pontos_turisticos(carta1, carta2);
            break;
        case 5:
            comparar_densidade_demografica(carta1, carta2);
            break;
        case 6:
            comparar_pib_per_capita(carta1, carta2);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
