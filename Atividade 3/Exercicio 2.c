#include <stdio.h>

int main() {
    float salario, salarioMinimo;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    salarioMinimo = 1320.00; 

    if (salario > salarioMinimo) {
        printf("A pessoa ganha mais que o salario minimo.\n");
    } else {
        printf("A pessoa ganha igual ou menos que o salario minimo.\n");
    }
}
