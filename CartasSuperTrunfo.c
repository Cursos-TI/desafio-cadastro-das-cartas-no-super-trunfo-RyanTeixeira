#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char estado;
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Informe o estado (A a H): ");
    scanf(" %c", &carta->estado);
    printf("Informe a cidade (1 a 4): ");
    scanf("%d", &carta->cidade);
    printf("Informe a população: ");
    scanf("%d", &carta->populacao);
    printf("Informe a área (em km²): ");
    scanf("%f", &carta->area);
    printf("Informe o PIB (em milhões): ");
    scanf("%f", &carta->pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(Carta carta) {
    printf("Estado: %c\n", carta.estado);
    printf("Cidade: %d\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta cartas[8][4]; // 8 estados e 4 cidades cada

    // Cadastrando cartas
    for (int i = 0; i < 8; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("\nCadastrando Carta para o Estado %c%d\n", 'A' + i, j);
            cadastrarCarta(&cartas[i][j-1]);
        }
    }

    // Exibindo cartas cadastradas
    printf("\nCartas Cadastradas:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\nCarta: %c%d\n", cartas[i][j].estado, cartas[i][j].cidade);
            exibirCarta(cartas[i][j]);
        }
    }

    return 0;
}

