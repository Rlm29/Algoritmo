#include <stdio.h>

#define TAMANHO 500

void calcularLocacoesGratuitas(const int A[], int locacoesGratuitas[]) {
    for (int i = 0; i < TAMANHO; i++) {
        locacoesGratuitas[i] = A[i] / 15;
    }
}

int main() {
    int A[TAMANHO];

    int locacoesGratuitas[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite a quantidade de filmes retirados pelo cliente %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    calcularLocacoesGratuitas(A, locacoesGratuitas);

    printf("\nQuantidade de locacoes gratuitas para cada cliente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Cliente %d: %d locacoes gratuitas\n", i + 1, locacoesGratuitas[i]);
    }

}
