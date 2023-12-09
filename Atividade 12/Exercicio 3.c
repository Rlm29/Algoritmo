#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void realizarTrocas(int A[LINHAS][COLUNAS]) {
    for (int i = 0; i < COLUNAS; i++) {
        int temp = A[1][i];
        A[1][i] = A[7][i];
        A[7][i] = temp;
    }

    for (int i = 0; i < LINHAS; i++) {
        int temp = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = temp;
    }

    for (int i = 0; i < LINHAS; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][LINHAS - 1 - i];
        A[i][LINHAS - 1 - i] = temp;
    }

    for (int i = 0; i < COLUNAS; i++) {
        int temp = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = temp;
    }
}

void imprimirMatriz(int A[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[LINHAS][COLUNAS] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    printf("Matriz original:\n");
    imprimirMatriz(A);

    realizarTrocas(A);

    printf("\nMatriz alterada:\n");
    imprimirMatriz(A);

}
