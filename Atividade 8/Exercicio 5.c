#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_JOGADORAS 5
#define MIN_ENTREVISTAS 50
#define MAX_ENTREVISTAS 300

typedef struct {
    char nome[50];
    int idade;
    char sexo; 
    int voto; 
} Entrevistado;

const char *nomeDaJogadora(int numeroVoto) {
    switch (numeroVoto) {
        case 1:
            return "Sam Kerr - Australia";
        case 2:
            return "Alex Morgan - Estados Unidos";
        case 3:
            return "Dzsenifer Marozsan - Alemanha";
        case 4:
            return "Amandine Henry - França";
        case 5:
            return "Marta Vieira - Brasil";
        default:
            return "Voto invalido";
    }
}

int main() {
    int totalEntrevistas = 0;
    Entrevistado entrevistados[MAX_ENTREVISTAS];

    while (totalEntrevistas < MIN_ENTREVISTAS || totalEntrevistas > MAX_ENTREVISTAS) {
        printf("Informe o nome: ");
        scanf(" %[^\n]s", entrevistados[totalEntrevistas].nome);

        printf("Informe a idade (maior que 12): ");
        scanf("%d", &entrevistados[totalEntrevistas].idade);

        if (entrevistados[totalEntrevistas].idade <= 12) {
            printf("Idade invalida. A idade deve ser maior que 12.\n");
            continue;
        }

        printf("Informe o sexo (M para masculino, F para feminino): ");
        scanf(" %c", &entrevistados[totalEntrevistas].sexo);

        printf("Escolha o numero correspondente a jogadora votada (1 a 5): ");
        scanf("%d", &entrevistados[totalEntrevistas].voto);

        if (entrevistados[totalEntrevistas].voto < 1 || entrevistados[totalEntrevistas].voto > NUM_JOGADORAS) {
            printf("Voto invalido. Escolha um numero de 1 a 5.\n");
            continue;
        }

        totalEntrevistas++;
    }

    int contagemVotos[NUM_JOGADORAS] = {0};
    int maxVotos = 0;


    for (int i = 0; i < totalEntrevistas; i++) {
        int voto = entrevistados[i].voto;
        contagemVotos[voto - 1]++;
        if (contagemVotos[voto - 1] > maxVotos) {
            maxVotos = contagemVotos[voto - 1];
        }
    }

    printf("\nJogadoras mais votadas:\n");
    for (int i = 0; i < NUM_JOGADORAS; i++) {
        if (contagemVotos[i] == maxVotos) {
            printf("%s\n", nomeDaJogadora(i + 1));
        }
    }

    printf("\nParticipantes da pesquisa:\n");
    for (int i = 0; i < totalEntrevistas; i++) {
        printf("Nome: %s, Idade: %d, Sexo: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
    }

    printf("\nSeparando por sexo, maior de idade e menor de idade:\n");
    int mulheres = 0;

    for (int i = 0; i < totalEntrevistas; i++) {
        if (entrevistados[i].sexo == 'F') {
            mulheres++;
        }

        if (entrevistados[i].idade >= 18) {
            printf("Maior de idade - Nome: %s, Idade: %d, Sexo: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
        } else {
            printf("Menor de idade - Nome: %s, Idade: %d, Sexo: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
        }
    }

    printf("\nPessoas maior de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < totalEntrevistas; i++) {
        if (entrevistados[i].idade >= 18 && entrevistados[i].voto == 5) {
            printf("Nome: %s\n", entrevistados[i].nome);
        }
    }

    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", mulheres);

}
