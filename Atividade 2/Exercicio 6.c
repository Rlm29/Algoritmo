#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A area do circulo %c: %.2f\n", 130, area);
}
