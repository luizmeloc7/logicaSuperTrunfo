#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    float densidadeDemografica;
};

int main() {
    // Cartas pré-cadastradas
    struct Carta carta1 = {"Brasil", 213000000, 8515767, 2200.50, 25.0};
    struct Carta carta2 = {"Argentina", 45100000, 2780000, 550.20, 16.2};

    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1, soma_c2;

    // Menu de atributos
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n");
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica (vence o menor!)\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo (1 a 4): ");
    scanf("%d", &escolha1);

    // Menu dinâmico para o segundo atributo (não pode ser o mesmo)
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 4; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Densidade Demográfica\n", i); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // Captura os valores do primeiro atributo
    switch (escolha1) {
        case 1:
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            break;
        case 2:
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            break;
        case 3:
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            break;
        case 4:
            valor1_c1 = carta1.densidadeDemografica;
            valor1_c2 = carta2.densidadeDemografica;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Captura os valores do segundo atributo
    switch (escolha2) {
        case 1:
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            break;
        case 2:
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            break;
        case 3:
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            break;
        case 4:
            valor2_c1 = carta1.densidadeDemografica;
            valor2_c2 = carta2.densidadeDemografica;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Exibe os resultados das comparações individuais
    printf("\nComparação entre: %s vs %s\n", carta1.nome, carta2.nome);

    printf("\nPrimeiro atributo:\n");
    printf("%s: %.2f\n", carta1.nome, valor1_c1);
    printf("%s: %.2f\n", carta2.nome, valor1_c2);

    printf("\nSegundo atributo:\n");
    printf("%s: %.2f\n", carta1.nome, valor2_c1);
    printf("%s: %.2f\n", carta2.nome, valor2_c2);

    // Aplica a lógica de comparação: densidade vence com menor valor
    float pontos_c1 = 0, pontos_c2 = 0;

    pontos_c1 += (escolha1 == 4) ? (valor1_c1 < valor1_c2 ? 1 : 0) : (valor1_c1 > valor1_c2 ? 1 : 0);
    pontos_c2 += (escolha1 == 4) ? (valor1_c2 < valor1_c1 ? 1 : 0) : (valor1_c2 > valor1_c1 ? 1 : 0);

    pontos_c1 += (escolha2 == 4) ? (valor2_c1 < valor2_c2 ? 1 : 0) : (valor2_c1 > valor2_c2 ? 1 : 0);
    pontos_c2 += (escolha2 == 4) ? (valor2_c2 < valor2_c1 ? 1 : 0) : (valor2_c2 > valor2_c1 ? 1 : 0);

    // Soma dos valores
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", carta1.nome, soma_c1);
    printf("%s: %.2f\n", carta2.nome, soma_c2);

    // Resultado final
    printf("\nResultado da rodada:\n");
    (soma_c1 > soma_c2) ? printf("%s venceu!\n", carta1.nome) :
    (soma_c2 > soma_c1) ? printf("%s venceu!\n", carta2.nome) :
                          printf("Empate!\n");

    return 0;
}
