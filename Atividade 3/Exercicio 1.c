#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("A pessoa %c maior de idade.\n", 130);
    } else {
        printf("A pessoa %c menor de idade.\n", 130);
    }
}
