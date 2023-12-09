#include <stdio.h>

float calcularIMC(float peso, float altura) {
    float imc = peso / (altura * altura);
    return imc;
}

int main() {
    float peso, altura;

    printf("Digite o peso (em quilos): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    float imc = calcularIMC(peso, altura);

    printf("O IMC %c: %.2f\n", 130, imc);

}
