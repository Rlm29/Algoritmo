#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[10];
} Veiculo;

typedef struct No {
    Veiculo veiculo;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} ListaVeiculos;

ListaVeiculos inicializarLista() {
    ListaVeiculos lista;
    lista.inicio = NULL;
    return lista;
}

void adicionarVeiculo(ListaVeiculos *lista, Veiculo veiculo) {
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->veiculo = veiculo;
    novoNo->prox = lista->inicio;
    lista->inicio = novoNo;
}

void listarDiesel2010ouPosterior(ListaVeiculos *lista) {
    printf("Proprietarios de carros diesel do ano de 2010 ou posterior:\n");
    No *atual = lista->inicio;
    while (atual != NULL) {
        if (strcmp(atual->veiculo.combustivel, "diesel") == 0 && atual->veiculo.ano >= 2010) {
            printf("%s\n", atual->veiculo.proprietario);
        }
        atual = atual->prox;
    }
}

void listarPlacasJ_0_2_4_7(ListaVeiculos *lista) {
    printf("Placas que comecam com J e terminam com 0, 2, 4 ou 7 e seus respectivos proprietarios:\n");
    No *atual = lista->inicio;
    while (atual != NULL) {
        if (atual->veiculo.placa[0] == 'J' && (atual->veiculo.placa[6] == '0' || atual->veiculo.placa[6] == '2' || atual->veiculo.placa[6] == '4' || atual->veiculo.placa[6] == '7')) {
            printf("Placa: %s, Proprietario: %s\n", atual->veiculo.placa, atual->veiculo.proprietario);
        }
        atual = atual->prox;
    }
}

void listarVogalSomaPar(ListaVeiculos *lista) {
    printf("Modelo e cor de veiculos cujas placas tem segunda letra vogal e soma dos valores numericos %c par:\n", 130);
    No *atual = lista->inicio;
    while (atual != NULL) {
        char vogais[] = "aeiouAEIOU";
        char segundaLetra = atual->veiculo.placa[1];
        int somaNumeros = 0;
        for (int i = 3; i <= 6; i++) {
            somaNumeros += atual->veiculo.placa[i] - '0';
        }

        if (strchr(vogais, segundaLetra) != NULL && somaNumeros % 2 == 0) {
            printf("Modelo: %s, Cor: %s\n", atual->veiculo.modelo, atual->veiculo.cor);
        }
        atual = atual->prox;
    }
}

void trocarSemZeroNaPlaca(ListaVeiculos *lista, char novoProprietario[50], char chassi[20]) {
    No *atual = lista->inicio;
    while (atual != NULL) {
        if (strcmp(atual->veiculo.chassi, chassi) == 0) {
            if (strchr(atual->veiculo.placa, '0') == NULL) {
                strcpy(atual->veiculo.proprietario, novoProprietario);
                printf("Proprietario do veiculo com chassi %s alterado para %s\n", chassi, novoProprietario);
            } else {
                printf("Nao %c possível trocar o proprietario do veículo com chassi %s, pois a placa possui digito zero.\n", 130, chassi);
            }
            return;
        }
        atual = atual->prox;
    }

    printf("Veiculo com chassi %s nao encontrado.\n", chassi);
}

int main() {
    ListaVeiculos lista = inicializarLista();

// veiculos para teste
    Veiculo veiculo1 = {"Proprietario1", "diesel", "Modelo1", "Cor1", "Chassi1", 2015, "JAB1234"};
    Veiculo veiculo2 = {"Proprietario2", "gasolina", "Modelo2", "Cor2", "Chassi2", 2012, "JCD5678"};
    Veiculo veiculo3 = {"Proprietario3", "diesel", "Modelo3", "Cor3", "Chassi3", 2010, "JEF9012"};

    adicionarVeiculo(&lista, veiculo1);
    adicionarVeiculo(&lista, veiculo2);
    adicionarVeiculo(&lista, veiculo3);

    listarDiesel2010ouPosterior(&lista);
    listarPlacasJ_0_2_4_7(&lista);
    listarVogalSomaPar(&lista);

    char novoProprietario[50];
    char chassi[20];
    printf("Informe o novo proprietario: ");
    scanf(" %[^\n]s", novoProprietario);
    printf("Informe o numero do chassi: ");
    scanf("%s", chassi);

    trocarSemZeroNaPlaca(&lista, novoProprietario, chassi);
}
