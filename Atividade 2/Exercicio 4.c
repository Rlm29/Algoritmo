#include <stdio.h>

int main() {
    float valorReais, cotacaoDolar, valorDolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    valorDolares = valorReais / cotacaoDolar;

    printf("O valor em dolares %c: %.2f\n", 130, valorDolares);
}
