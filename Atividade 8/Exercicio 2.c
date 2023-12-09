#include <stdio.h>

int main() {
    int totalUsuarios = 50;
    int contadorElevadorA_Matutino = 0, contadorElevadorA_Vespertino = 0, contadorElevadorA_Noturno = 0;
    int contadorElevadorB_Matutino = 0, contadorElevadorB_Vespertino = 0, contadorElevadorB_Noturno = 0;
    int contadorElevadorC_Matutino = 0, contadorElevadorC_Vespertino = 0, contadorElevadorC_Noturno = 0;

    for (int i = 1; i <= totalUsuarios; i++) {
        char elevador, periodo;

        printf("Informe o elevador (A/B/C) e o periodo (M/V/N) que utiliza com mais frequencia (usuario %d): ", i);
        scanf(" %c %c", &elevador, &periodo);

        switch (elevador) {
            case 'A':
                if (periodo == 'M') {
                    contadorElevadorA_Matutino++;
                } else if (periodo == 'V') {
                    contadorElevadorA_Vespertino++;
                } else if (periodo == 'N') {
                    contadorElevadorA_Noturno++;
                }
                break;
            case 'B':
                if (periodo == 'M') {
                    contadorElevadorB_Matutino++;
                } else if (periodo == 'V') {
                    contadorElevadorB_Vespertino++;
                } else if (periodo == 'N') {
                    contadorElevadorB_Noturno++;
                }
                break;
            case 'C':
                if (periodo == 'M') {
                    contadorElevadorC_Matutino++;
                } else if (periodo == 'V') {
                    contadorElevadorC_Vespertino++;
                } else if (periodo == 'N') {
                    contadorElevadorC_Noturno++;
                }
                break;
            default:
                printf("Elevador invalido. Tente novamente.\n");
                i--;
        }
    }

    int totalElevadorA = contadorElevadorA_Matutino + contadorElevadorA_Vespertino + contadorElevadorA_Noturno;
    int totalElevadorB = contadorElevadorB_Matutino + contadorElevadorB_Vespertino + contadorElevadorB_Noturno;
    int totalElevadorC = contadorElevadorC_Matutino + contadorElevadorC_Vespertino + contadorElevadorC_Noturno;

    char periodoMaisUsado;
    char elevadorMaisUsado;
    int maxTotalPeriodo = 0;

    if (totalElevadorA > maxTotalPeriodo) {
        maxTotalPeriodo = totalElevadorA;
        periodoMaisUsado = 'A';
        elevadorMaisUsado = 'A';
    }

    if (totalElevadorB > maxTotalPeriodo) {
        maxTotalPeriodo = totalElevadorB;
        periodoMaisUsado = 'B';
        elevadorMaisUsado = 'B';
    }

    if (totalElevadorC > maxTotalPeriodo) {
        maxTotalPeriodo = totalElevadorC;
        periodoMaisUsado = 'C';
        elevadorMaisUsado = 'C';
    }

    printf("\nO periodo mais usado de todos %c %c e pertence ao elevador %c.\n", 130, periodoMaisUsado, elevadorMaisUsado);

    char periodoMaiorFluxo;
    char elevadorMaiorFluxo;
    int maxTotalElevador = 0;

    if (totalElevadorA > maxTotalElevador) {
        maxTotalElevador = totalElevadorA;
        periodoMaiorFluxo = 'A';
        elevadorMaiorFluxo = 'A';
    }

    if (totalElevadorB > maxTotalElevador) {
        maxTotalElevador = totalElevadorB;
        periodoMaiorFluxo = 'B';
        elevadorMaiorFluxo = 'B';
    }

    if (totalElevadorC > maxTotalElevador) {
        maxTotalElevador = totalElevadorC;
        periodoMaiorFluxo = 'C';
        elevadorMaiorFluxo = 'C';
    }

    printf("O elevador mais frequentado %c %c e o maior fluxo se concentra no período %c.\n", 130, elevadorMaiorFluxo, periodoMaiorFluxo);

    int minTotalPeriodo = totalElevadorA;
    if (totalElevadorB < minTotalPeriodo) {
        minTotalPeriodo = totalElevadorB;
    }
    if (totalElevadorC < minTotalPeriodo) {
        minTotalPeriodo = totalElevadorC;
    }

    float diferencaPercentual = ((float)(maxTotalPeriodo - minTotalPeriodo) / maxTotalPeriodo) * 100;
    printf("Diferenca percentual entre o mais usado dos horarios e o menos usado: %.2f%%\n", diferencaPercentual);

    int totalElevadorMediaUtilizacao = 0;

    if (totalElevadorA >= 30 && totalElevadorA <= 40) {
        totalElevadorMediaUtilizacao = totalElevadorA;
    } else if (totalElevadorB >= 30 && totalElevadorB <= 40) {
        totalElevadorMediaUtilizacao = totalElevadorB;
    } else if (totalElevadorC >= 30 && totalElevadorC <= 40) {
        totalElevadorMediaUtilizacao = totalElevadorC;
    }

    float porcentagemMediaUtilizacao = ((float)totalElevadorMediaUtilizacao / totalUsuarios) * 100;
    printf("Porcentagem sobre o total de serviços prestados do elevador de media utilizacao: %.2f%%\n", porcentagemMediaUtilizacao);
}
