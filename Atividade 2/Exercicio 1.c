#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);

    if (num2 != 0) {
        float divisao = num1 / num2;  
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("A divisao por zero nao %c permitida.\n", 130);
    }
}
