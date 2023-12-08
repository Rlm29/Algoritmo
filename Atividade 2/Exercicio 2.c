#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    float dobro = 2 * numero;

    printf("O dobro de %.2f %c %.2f\n", numero, 130, dobro);
}
