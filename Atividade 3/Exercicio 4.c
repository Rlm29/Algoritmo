#include <stdio.h>

int main() {
    float peso;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("O peso %c menor que 60 kg.\n", 130);
    } else {
        printf("O peso %c igual ou maior que 60 kg.\n", 130);
    }
}
