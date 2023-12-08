#include <stdio.h>
#include <math.h>

float calcular_fx(float x) {
    float resultado;
    
    if (x <= 4) {
        printf("A raiz quadrada de x^2 - 16 nao %c real.\n", 130);
        resultado = 0; 
    } else {
        resultado = (5 * x + 3) / sqrt(x * x - 16);
    }
    
    return resultado;
}

main() {
    float x;
    
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    float resultado_fx = calcular_fx(x);

    if (resultado_fx != 0) {
        printf("O valor de f(%.2f) %c igual a %.2f\n", x, 130, resultado_fx);
    }

}
