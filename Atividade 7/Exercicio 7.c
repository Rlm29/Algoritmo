#include <stdio.h>

int main() {
    char sexo, corOlhos, corCabelos;
    int idade;
    float salario;
    int totalHabitantes = 0;
    int totalMulheres = 0;

    do {
        printf("Informe os dados do habitante (sexo, olhos, cabelos, idade, salario): ");
        scanf(" %c %c %c %d %f", &sexo, &corOlhos, &corCabelos, &idade, &salario);

        if ((sexo == 'm' || sexo == 'f') &&
            (corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p') &&
            (corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r') &&
            (idade >= 10 && idade <= 100) &&
            salario >= 0) {

            totalHabitantes++;

            if (sexo == 'f' && idade >= 18 && idade <= 35 && corOlhos == 'c' && corCabelos == 'c') {
                totalMulheres++;
            }

        } else {
            printf("Dados invalidos. Habitante nao contabilizado.\n");
        }

    } while (idade != -1); 

    float porcentagemMulheres = 0.0;
    if (totalHabitantes > 0) {
        porcentagemMulheres = (float)totalMulheres / totalHabitantes * 100;
    }

    printf("\nTotal de habitantes: %d\n", totalHabitantes);
    printf("Porcentagem de mulheres com idade entre 18 e 35, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagemMulheres);
}
