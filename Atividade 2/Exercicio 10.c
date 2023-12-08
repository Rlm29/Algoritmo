#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (numCarrosVendidos * valorPorCarro) + (0.05 * valorTotalVendas);

    printf("O salario final do vendedor %c: R$ %.2f\n", 130, salarioFinal);
}
