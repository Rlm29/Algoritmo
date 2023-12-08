#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    printf("Os primeiros %d numeros naturais impares:\n", N);
    for (int i = 1; i <= 2 * N; i += 2) {
        printf("%d\n", i);
    }
}
