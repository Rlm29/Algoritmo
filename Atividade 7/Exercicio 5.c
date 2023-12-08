#include <stdio.h>

int main() {
    int contador = 0; 
    int numero = 2;  
    int soma = 0;    

    while (contador < 50) {
        soma += numero;
        numero += 2;
        contador++;
    }

    printf("A soma dos 50 primeiros numeros pares %c: %d\n", 130, soma);
}
