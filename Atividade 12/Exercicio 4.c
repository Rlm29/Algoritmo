#include <stdio.h>

#define LINHAS 61
#define COLUNAS 10

void somarColunasMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < COLUNAS; i++) {
        matriz[LINHAS - 1][i] = 0;
    }

    for (int i = 0; i < LINHAS - 1; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[LINHAS - 1][j] += matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    somarColunasMatriz(matriz);

    printf("\nMatriz com a soma das colunas na ultima linha:\n");
    imprimirMatriz(matriz);

}
