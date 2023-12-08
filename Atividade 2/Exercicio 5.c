#include <stdio.h>

int main() {
    float custo, frete, despesas, valorVenda, lucro, percentualLucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);

    printf("Digite o valor do frete: ");
    scanf("%f", &frete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);

    float custoTotal = custo + frete + despesas;

    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

    lucro = valorVenda - custoTotal;
    percentualLucro = (lucro / custoTotal) * 100;

    printf("\nResumo:\n");
    printf("Custo total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentualLucro);
}
