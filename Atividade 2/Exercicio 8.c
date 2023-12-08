#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o salario mensal atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    printf("O novo salario %c: R$ %.2f\n", 130,  novoSalario);
}
