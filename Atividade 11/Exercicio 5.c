#include <stdio.h>
#include <math.h>

float calcularVolumeEsfera(float raio) {
    const float pi = 3.141592653589793;

    float volume = (4.0 / 3.0) * pi * pow(raio, 3);

    return volume;
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volumeEsfera = calcularVolumeEsfera(raio);

    printf("O volume da esfera %c: %.2f unidades cubicas\n", 130, volumeEsfera);

}
