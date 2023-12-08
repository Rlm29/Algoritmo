#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    float temp;

    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A < C) {
        temp = A;
        A = C;
        C = temp;
    }

    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("Valores em ordem descendente: %.2f, %.2f, %.2f\n", A, B, C);
}
