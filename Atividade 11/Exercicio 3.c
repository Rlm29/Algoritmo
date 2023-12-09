#include <stdio.h>

float converterFahrenheitCelsius(float temperaturaFahrenheit) {
    return (temperaturaFahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    float temperaturaFahrenheit;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    float temperaturaCelsius = converterFahrenheitCelsius(temperaturaFahrenheit);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

}
