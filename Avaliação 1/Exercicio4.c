#include <stdio.h>

main() {
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if (A + B > C && A + C > B && B + C > A) {
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("%c um triangulo retangulo.\n", 144);
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("%c um triangulo obtusangulo.\n", 144);
        } else {
            printf("%c um triangulo acutangulo.\n", 144);
        }
    } else {
        printf("Esses valores nao formam um triangulo.\n");
    }

}
