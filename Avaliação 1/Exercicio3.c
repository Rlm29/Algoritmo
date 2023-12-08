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
        if (A == B && B == C) {
            printf("%c um triangulo equilatero.\n", 144);
        } else if (A == B || A == C || B == C) {
            printf("%c um triangulo isosceles.\n", 144);
        } else {
            printf("%c um triangulo escaleno.\n", 144);
        }
    } else {
        printf("Esses valores nao formam um triangulo.\n");
    }

}
