#include <stdio.h>

main() {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;

    printf("Digite o codigo do candidato (ou 0 para encerrar): ");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            case 0:
                break;
            default:
                printf("Codigo de voto invalido!\n");
                break;
        }

        if (voto != 0) {
            printf("Digite o proximo codigo do candidato (ou 0 para encerrar): ");
        }

    } while (voto != 0);

    printf("\nResultado da eleicao:\n");
    printf("Total de votos para Candidato 1: %d\n", candidato1);
    printf("Total de votos para Candidato 2: %d\n", candidato2);
    printf("Total de votos para Candidato 3: %d\n", candidato3);
    printf("Total de votos para Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

}
