#include <stdio.h>

int main() {
    float altura;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    if (altura > 1.8) {
        printf("A pessoa %c mais alta que 1.8 metros.\n", 130);
    } else {
        printf("A pessoa %c igual ou mais baixa que 1.8 metros.\n", 130);
    }
}
