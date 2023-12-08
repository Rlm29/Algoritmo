#include <stdio.h>

int main() {
    int codigoItem;
    float precoUnitario, valorTotal;
    int quantidade;

    printf("Digite o codigo do item (100 a 104): ");
    scanf("%d", &codigoItem);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (codigoItem) {
        case 100:
            precoUnitario = 10.10;
            break;
        case 101:
            precoUnitario = 8.30;
            break;
        case 102:
            precoUnitario = 8.50;
            break;
        case 103:
            precoUnitario = 12.50;
            break;
        case 104:
            precoUnitario = 13.25;
            break;
        default:
            printf("Codigo de item invalido.\n");
            return 1; 
    }

    valorTotal = precoUnitario * quantidade;

    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
}
