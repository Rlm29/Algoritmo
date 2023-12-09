#include <stdio.h>
#include <math.h>

float calcularVolumeCilindro(float altura, float raio) {
    const float pi = 3.141592653589793;

    float volume = pi * pow(raio, 2) * altura;

    return volume;
}

int main() {
    float altura, raio;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    float volumeCilindro = calcularVolumeCilindro(altura, raio);

    printf("O volume do cilindro %c: %.2f unidades cubicas\n", 130, volumeCilindro);

}
