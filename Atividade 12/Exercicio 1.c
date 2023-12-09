#include <stdio.h>

int escolherOpcaoPagamento() {
    int opcao;

    printf("Escolha a opcao de pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preco da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");

    do {
        printf("Digite a letra da opcao desejada: ");
        scanf(" %c", &opcao);
    } while (opcao < 'a' || opcao > 'c');

    return opcao;
}

void calcularPrestacoes(int totalCompra) {
    char opcao = escolherOpcaoPagamento();

    switch (opcao) {
        case 'a':
            printf("Valor total com 10%% de desconto: R$ %.2f\n", totalCompra * 0.9);
            break;
        case 'b':
            printf("Valor total em duas vezes: 2 parcelas de R$ %.2f\n", totalCompra / 2.0);
            break;
        case 'c':
            if (totalCompra > 100) {
                int numParcelas;
                do {
                    printf("Digite o numero de parcelas (3 a 10): ");
                    scanf("%d", &numParcelas);
                } while (numParcelas < 3 || numParcelas > 10);

                float valorParcela = totalCompra * 1.03 / numParcelas;
                printf("Valor total em %d vezes com 3%% de juros ao mes: %d parcelas de R$ %.2f\n", numParcelas, numParcelas, valorParcela);
            } else {
                printf("Opcao indisponivel para compras abaixo de R$ 100,00.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

int main() {
    int totalCompra;

    printf("Digite o total gasto pelo cliente: ");
    scanf("%d", &totalCompra);

    calcularPrestacoes(totalCompra);

}
