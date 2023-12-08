#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    float percentualDistribuidor = 0.28;  // 28%
    float percentualImpostos = 0.45;      // 45%

    custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    printf("O custo final ao consumidor %c: R$ %.2f\n", 130, custoFinal);
}
