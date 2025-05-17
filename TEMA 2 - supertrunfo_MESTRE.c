#include <stdio.h>

struct Trunfo {
    char nome[30]; // Nome do país
    int populacao; // População
    float area; // Área
    float PIB; // PIB
    int pontos_turisticos; // Pontos turísticos
    float densidade_populacional; // Densidade populacional
};

// Função para comparar a população
int comparar_populacao(struct Trunfo carta1, struct Trunfo carta2) {
    return (carta1.populacao > carta2.populacao) ? carta1.populacao : carta2.populacao;
}

// Função para comparar a área
float comparar_area(struct Trunfo carta1, struct Trunfo carta2) {
    return (carta1.area > carta2.area) ? carta1.area : carta2.area;
}

// Função para comparar o PIB
float comparar_pib(struct Trunfo carta1, struct Trunfo carta2) {
    return (carta1.PIB > carta2.PIB) ? carta1.PIB : carta2.PIB;
}

// Função para comparar os pontos turísticos
int comparar_pontos_turisticos(struct Trunfo carta1, struct Trunfo carta2) {
    return (carta1.pontos_turisticos > carta2.pontos_turisticos) ? carta1.pontos_turisticos : carta2.pontos_turisticos;
}

// Função para comparar a densidade populacional
float comparar_densidade_populacional(struct Trunfo carta1, struct Trunfo carta2) {
    return (carta1.densidade_populacional < carta2.densidade_populacional) ? carta1.densidade_populacional : carta2.densidade_populacional;
}

// Função para exibir o resultado
void exibir_resultado(struct Trunfo carta1, struct Trunfo carta2, char *atributo1, char *atributo2, float soma1, float soma2) {
    printf("\nComparando %s e %s\n", carta1.nome, carta2.nome);
    printf("Atributo 1: %s\n", atributo1);
    printf("Atributo 2: %s\n", atributo2);
    printf("%s - %s: %.2f\n", carta1.nome, atributo1, soma1);
    printf("%s - %s: %.2f\n", carta2.nome, atributo1, soma2);
    if (soma1 > soma2) {
        printf("Resultado: %s venceu!\n", carta1.nome);
    } else if (soma1 < soma2) {
        printf("Resultado: %s venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    struct Trunfo carta1 = {"Brasil", 211000000, 8515767.0, 2.055, 200, 25.0};
    struct Trunfo carta2 = {"Argentina", 45195777, 2780400.0, 0.449, 50, 16.0};

    int escolha1, escolha2;

    // Menu de seleção do primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &escolha1);

    // Menu de seleção do segundo atributo (não pode ser o mesmo)
    printf("\nEscolha o segundo atributo para comparar (não pode ser o mesmo do primeiro):\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &escolha2);

    // Verificação de escolha válida
    if (escolha1 == escolha2) {
        printf("\nErro: Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    float soma1 = 0.0, soma2 = 0.0;
    char *atributo1, *atributo2;

    // Atribuindo os atributos escolhidos
    switch (escolha1) {
        case 1: atributo1 = "População"; soma1 = comparar_populacao(carta1, carta2); break;
        case 2: atributo1 = "Área"; soma1 = comparar_area(carta1, carta2); break;
        case 3: atributo1 = "PIB"; soma1 = comparar_pib(carta1, carta2); break;
        case 4: atributo1 = "Pontos Turísticos"; soma1 = comparar_pontos_turisticos(carta1, carta2); break;
        case 5: atributo1 = "Densidade Populacional"; soma1 = comparar_densidade_populacional(carta1, carta2); break;
        default: printf("Escolha inválida!\n"); return 1;
    }

    switch (escolha2) {
        case 1: atributo2 = "População"; soma2 = comparar_populacao(carta1, carta2); break;
        case 2: atributo2 = "Área"; soma2 = comparar_area(carta1, carta2); break;
        case 3: atributo2 = "PIB"; soma2 = comparar_pib(carta1, carta2); break;
        case 4: atributo2 = "Pontos Turísticos"; soma2 = comparar_pontos_turisticos(carta1, carta2); break;
        case 5: atributo2 = "Densidade Populacional"; soma2 = comparar_densidade_populacional(carta1, carta2); break;
        default: printf("Escolha inválida!\n"); return 1;
    }

    // Exibindo o resultado final
    exibir_resultado(carta1, carta2, atributo1, atributo2, soma1, soma2);

    return 0;
}
