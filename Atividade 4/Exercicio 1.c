#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("A raiz quadrada de %.2f %c %.2f\n", numero, 130, sqrt(numero));
    } else {
        printf("O quadrado de %.2f %c %.2f\n", numero, 130, numero * numero);
    }
}
