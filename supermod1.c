#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
struct Carta {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Cadastro das duas cartas
    struct Carta carta1 = {
        "São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 830000000000.0, 20, 0, 0
    };

    struct Carta carta2 = {
        "Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1182.3, 429000000000.0, 15, 0, 0
    };

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Escolha do atributo para comparação: POPULAÇÃO
    printf("🔍 Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

    // Comparação usando estrutura de decisão
    if (carta1.populacao > carta2.populacao) {
        printf("\n🏆 Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\n🏆 Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\n⚖️ Resultado: Empate!\n");
    }

    // Exibição das informações calculadas
    printf("\n📊 Informações adicionais:\n");
    printf("%s: Densidade Populacional = %.2f, PIB per capita = %.2f\n", carta1.cidade, carta1.densidadePopulacional, carta1.pibPerCapita);
    printf("%s: Densidade Populacional = %.2f, PIB per capita = %.2f\n", carta2.cidade, carta2.densidadePopulacional, carta2.pibPerCapita);

    return 0;
}