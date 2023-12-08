#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct No {
    Produto produto;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} Estoque;

Estoque inicializarEstoque() {
    Estoque estoque;
    estoque.inicio = NULL;
    return estoque;
}

void adicionarProduto(Estoque *estoque) {
    Produto produto;

    printf("Informe o codigo do produto: ");
    scanf("%d", &produto.codigo);

    printf("Informe a descricao do produto: ");
    scanf(" %[^\n]s", produto.descricao);

    printf("Informe a quantidade do produto: ");
    scanf("%d", &produto.quantidade);

    printf("Informe o valor do produto: ");
    scanf("%f", &produto.valor);

    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->produto = produto;
    novoNo->prox = NULL;

    if (estoque->inicio == NULL) {
        estoque->inicio = novoNo;
    } else {
        No *atual = estoque->inicio;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novoNo;
    }

    printf("Produto adicionado ao estoque.\n");
}

void gerarRelatorio(Estoque *estoque) {
    if (estoque->inicio == NULL) {
        printf("Estoque vazio.\n");
        return;
    }

    printf("Relatorio de Produtos:\n");
    No *atual = estoque->inicio;
    while (atual != NULL) {
        printf("Codigo: %d\n", atual->produto.codigo);
        printf("Descricao: %s\n", atual->produto.descricao);
        printf("Quantidade: %d\n", atual->produto.quantidade);
        printf("Valor: %.2f\n\n", atual->produto.valor);

        atual = atual->prox;
    }
}

void consultarProduto(Estoque *estoque) {
    int codigo;
    printf("Informe o codigo do produto a ser consultado: ");
    scanf("%d", &codigo);

    No *atual = estoque->inicio;
    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", atual->produto.codigo);
            printf("Descricao: %s\n", atual->produto.descricao);
            printf("Quantidade: %d\n", atual->produto.quantidade);
            printf("Valor: %.2f\n", atual->produto.valor);
            return;
        }
        atual = atual->prox;
    }

    printf("Produto nao encontrado.\n");
}

void removerProduto(Estoque *estoque) {
    int codigo;
    printf("Informe o codigo do produto a ser removido: ");
    scanf("%d", &codigo);

    No *anterior = NULL;
    No *atual = estoque->inicio;

    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            if (anterior == NULL) {
                estoque->inicio = atual->prox;
            } else {
                anterior->prox = atual->prox;
            }

            free(atual);
            printf("Produto removido do estoque.\n");
            return;
        }

        anterior = atual;
        atual = atual->prox;
    }

    printf("Produto nao encontrado.\n");
}

int main() {
    Estoque estoque = inicializarEstoque();
    int opcao;

    do {
        printf("\n==== Menu ====\n");
        printf("1. Adicionar Produto\n");
        printf("2. Gerar Relatorio\n");
        printf("3. Consultar Produto\n");
        printf("4. Remover Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(&estoque);
                break;
            case 2:
                gerarRelatorio(&estoque);
                break;
            case 3:
                consultarProduto(&estoque);
                break;
            case 4:
                removerProduto(&estoque);
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
}
