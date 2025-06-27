#include <stdio.h>

#define TAM 10           // Tamanho do tabuleiro
#define AGUA 0           // Representa água
#define NAVIO 3          // Representa navio
#define HABILIDADE 5     // Representa área afetada pela habilidade
#define TAM_HAB 5        // Tamanho das matrizes de habilidade

// Função para inicializar o tabuleiro com água
void inicializarTabuleiro(int tab[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tab[i][j] = AGUA;
}

// Função para posicionar um navio horizontal no tabuleiro
void posicionarNavioHorizontal(int tab[TAM][TAM], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        tab[linha][coluna + i] = NAVIO;
}

// Função para posicionar um navio vertical no tabuleiro
void posicionarNavioVertical(int tab[TAM][TAM], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        tab[linha + i][coluna] = NAVIO;
}

// Função para criar uma matriz de habilidade com formato de cone
void criarCone(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            // O cone se expande verticalmente a partir do centro
            int meio = TAM_HAB / 2;
            if (j >= meio - i && j <= meio + i && i <= meio)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para criar uma matriz de habilidade em cruz
void criarCruz(int matriz[TAM_HAB][TAM_HAB]) {
    int meio = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == meio || j == meio)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Função para criar uma matriz de habilidade em octaedro (losango)
void criarOctaedro(int matriz[TAM_HAB][TAM_HAB]) {
    int meio = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(meio - i) + abs(meio - j) <= meio)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Sobrepõe a matriz de habilidade no tabuleiro, com valor 5
void aplicarHabilidade(int tab[TAM][TAM], int matriz[TAM_HAB][TAM_HAB], int origem_l, int origem_c) {
    int desloca = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int l = origem_l - desloca + i;
            int c = origem_c - desloca + j;
            // Garante que está dentro dos limites
            if (l >= 0 && l < TAM && c >= 0 && c < TAM && matriz[i][j] == 1 && tab[l][c] == AGUA)
                tab[l][c] = HABILIDADE;
        }
    }
}

// Exibe o tabuleiro no console
void exibirTabuleiro(int tab[TAM][TAM]) {
    printf("\n=== TABULEIRO ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tab[i][j] == AGUA) printf("~ ");
            else if (tab[i][j] == NAVIO) printf("N ");
            else if (tab[i][j] == HABILIDADE) printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int cone[TAM_HAB][TAM_HAB], cruz[TAM_HAB][TAM_HAB], octaedro[TAM_HAB][TAM_HAB];

    inicializarTabuleiro(tabuleiro);

    // Posiciona dois navios
    posicionarNavioHorizontal(tabuleiro, 2, 3, 3);
    posicionarNavioVertical(tabuleiro, 5, 6, 3);

    // Cria matrizes de habilidades
    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Aplica habilidades sobre o tabuleiro
    aplicarHabilidade(tabuleiro, cone, 2, 5);       // Cone com origem na linha 2, coluna 5
    aplicarHabilidade(tabuleiro, cruz, 5, 5);       // Cruz com origem no centro do tabuleiro
    aplicarHabilidade(tabuleiro, octaedro, 7, 2);   // Octaedro com origem em outra parte

    // Exibe resultado
    exibirTabuleiro(tabuleiro);

    return 0;
}