#include <stdio.h>

int main() {
    int prato, sobremesa, bebida;
    int caloriasPrato, caloriasSobremesa, caloriasBebida;
    int totalCalorias;

    printf("Escolha o prato (1 a 4): ");
    scanf("%d", &prato);

    printf("Escolha a sobremesa (1 a 4): ");
    scanf("%d", &sobremesa);

    printf("Escolha a bebida (1 a 4): ");
    scanf("%d", &bebida);

    switch (prato) {
        case 1:
            caloriasPrato = 180;
            break;
        case 2:
            caloriasPrato = 230;
            break;
        case 3:
            caloriasPrato = 250;
            break;
        case 4:
            caloriasPrato = 350;
            break;
        default:
            printf("Escolha de prato invalida.\n");
            return 1;
    }

    switch (sobremesa) {
        case 1:
            caloriasSobremesa = 75;
            break;
        case 2:
            caloriasSobremesa = 110;
            break;
        case 3:
            caloriasSobremesa = 170;
            break;
        case 4:
            caloriasSobremesa = 200;
            break;
        default:
            printf("Escolha de sobremesa invalida.\n");
            return 1;
    }

    switch (bebida) {
        case 1:
            caloriasBebida = 20;
            break;
        case 2:
            caloriasBebida = 70;
            break;
        case 3:
            caloriasBebida = 100;
            break;
        case 4:
            caloriasBebida = 65;
            break;
        default:
            printf("Escolha de bebida invalida.\n");
            return 1;
    }

    totalCalorias = caloriasPrato + caloriasSobremesa + caloriasBebida;

    printf("Total de calorias da refeicao: %d cal\n", totalCalorias);
}
