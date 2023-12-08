#include <stdio.h>

main() {
    float salario, somaSalario = 0.0;
    int numeroFilhos, totalPessoas = 0, totalSalarioAte100 = 0;
    float maiorSalario = 0.0;

    do {
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o numero de filhos: ");
        scanf("%d", &numeroFilhos);

        somaSalario += salario;
        totalPessoas++;
        
        if (salario <= 100) {
            totalSalarioAte100++;
        }

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
    } while (1);

    if (totalPessoas > 0) {
        float mediaSalario = somaSalario / totalPessoas;
        float mediaFilhos = (float)totalPessoas / totalPessoas;

        printf("a) Media do salario da populacao: %.2f\n", mediaSalario);
        printf("b) Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("c) Maior salario: %.2f\n", maiorSalario);
        
        float percentualAte100 = (float)totalSalarioAte100 / totalPessoas * 100;
        printf("d) Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentualAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

}
