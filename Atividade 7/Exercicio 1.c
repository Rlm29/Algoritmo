#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    printf("Numeros naturais de 0 ate %d:\n", N);
    for (int i = 0; i <= N; i++) {
        printf("%d\n", i);
    }
}
