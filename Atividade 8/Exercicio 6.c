#include <stdio.h>

int main() {
    char resposta;
    
    do {
        int mes, ano;

        printf("Digite o mes (1-12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mes invalido. Digite um numero entre 1 e 12.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

        int dias;

        switch (mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dias = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias = 30;
                break;
            case 2:
                dias = bissexto ? 29 : 28;
                break;
            default:
                dias = -1; 
        }

        if (dias != -1) {
            printf("O mes %d/%d tem %d dias.\n", mes, ano, dias);
        } else {
            printf("Erro ao determinar o numero de dias. Mes invalido.\n");
        }

        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

}
