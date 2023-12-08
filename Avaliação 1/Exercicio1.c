#include <stdio.h>
#include <math.h>


int main() {
    float x;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    float resultado_fx;

    if (x <= 4) {
        printf("A raiz quadrada de x^2 - 16 nao %c real.\n", 130);
        resultado_fx = nanf(""); 
    } else {
        resultado_fx = (5 * x + 3) / sqrt(x * x - 16);
    }

    if (!isnan(resultado_fx)) {
        printf("O valor de f(%.2f) %c igual a %.2f\n", x, 130, resultado_fx);
    }
}
