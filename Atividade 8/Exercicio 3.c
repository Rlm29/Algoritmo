#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Informe um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido. Por favor, informe um numero maior ou igual a zero.\n");
        return 1; 
    }

    int resultado = fibonacci(n);
    printf("O %d termo da sequencia de Fibonacci %c: %d\n", n, 130, resultado);
}
