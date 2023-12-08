#include <stdio.h>

int main() {
    int opcao;
    int quantidade;
    float valorTotal = 0.0;

    do {
        printf("\nMenu de Frutas:\n");
        printf("1 => ABACAXI - R$5,00 a unidade\n");
        printf("2 => MACA - R$1,00 a unidade\n");
        printf("3 => PERA - R$4,00 a unidade\n");
        printf("0 => Encerrar compra\n");

        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de ABACAXIS desejada: ");
                scanf("%d", &quantidade);
                valorTotal += 5.0 * quantidade;
                break;
            case 2:
                printf("Digite a quantidade de MACAS desejada: ");
                scanf("%d", &quantidade);
                valorTotal += 1.0 * quantidade;
                break;
            case 3:
                printf("Digite a quantidade de PERAS desejada: ");
                scanf("%d", &quantidade);
                valorTotal += 4.0 * quantidade;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida. Por favor, escolha novamente.\n");
        }
    } while (opcao != 0);

    printf("\nO valor total da compra %c: R$%.2f\n", 130, valorTotal);
}
