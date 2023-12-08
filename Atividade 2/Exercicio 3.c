#include <stdio.h>

int main() {
    float comprimento, largura, area;

    printf("Digite o comprimento da sala em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da sala em metros: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("A area da sala %c %.2f metros quadrados.\n", 130, area);
}
