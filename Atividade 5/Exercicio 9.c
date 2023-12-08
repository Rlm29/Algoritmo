#include <stdio.h>

int main() {
    float salarioAtual, salarioReajustado, bonus;
    int tempoServico;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de servico do funcionario (em anos): ");
    scanf("%d", &tempoServico);

    float tabelaReajuste[5] = {0.25, 0.20, 0.15, 0.10, 0.0}; 
    float tabelaBonus[5] = {0.0, 100.0, 200.0, 300.0, 500.0}; 

    int faixaSalario = 0;
    if (salarioAtual > 500) faixaSalario = 1;
    if (salarioAtual > 1000) faixaSalario = 2;
    if (salarioAtual > 1500) faixaSalario = 3;
    if (salarioAtual > 2000) faixaSalario = 4;

    salarioReajustado = salarioAtual * (1 + tabelaReajuste[faixaSalario]);

    bonus = tabelaBonus[tempoServico / 3]; 

    salarioReajustado += bonus;

    if (salarioReajustado > salarioAtual) {
        printf("O novo salario %c: R$ %.2f\n", 130, salarioReajustado);
    } else {
        printf("O funcionario nao tem direito a aumento.\n");
    }
}

