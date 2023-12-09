#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido. Por favor, informe um numero positivo.\n");
        return 1; 
    }

    printf("Os divisores do numero %d sao: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d", i);

            if (i < numero) {
                printf(", ");
            }
        }
    }
    printf("\n");
}
