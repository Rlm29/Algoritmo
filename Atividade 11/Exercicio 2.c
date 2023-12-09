#include <stdio.h>

void imprimirMesEQuantidadeDias(int numeroMes) {
    if (numeroMes < 1 || numeroMes > 12) {
        printf("Numero de mes invalido. Digite um numero entre 1 e 12.\n");
        return;
    }

    const char *nomesMeses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Mes: %s\n", nomesMeses[numeroMes - 1]);
    printf("Quantidade de dias: %d\n", diasNoMes[numeroMes - 1]);
}

int main() {
    int numeroMes;

    printf("Digite um numero de 1 a 12 para representar um mes: ");
    scanf("%d", &numeroMes);

    imprimirMesEQuantidadeDias(numeroMes);

}
