#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("O numero %c igual a 5.\n", 130);
    } else if (numero == 200) {
        printf("O numero %c igual a 200.\n", 130);
    } else if (numero == 400) {
        printf("O numero %c igual a 400.\n", 130);
    } else if (numero >= 500 && numero <= 1000) {
        printf("O numero esta no intervalo entre 500 e 1000.\n");
    } else {
        printf("O numero esta fora dos escopos anteriores.\n");
    }
}
