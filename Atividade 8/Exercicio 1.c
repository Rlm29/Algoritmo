#include <stdio.h>

int main() {
    int idade, totalRespostasOtimo = 0, totalRespostasBom = 0, totalRespostasRegular = 0, totalRespostasRuim = 0, totalRespostasPessimo = 0;
    int somaIdadeRuim = 0, maiorIdadeOtimo = 0, maiorIdadeRuim = 0;
    char opiniao;

    for (int i = 1; i <= 100; i++) {
        printf("Informe a idade e a opiniao (A/B/C/D/E) do espectador %d: ", i);
        scanf("%d %c", &idade, &opiniao);

        switch (opiniao) {
            case 'A':
                totalRespostasOtimo++;
                if (idade > maiorIdadeOtimo) {
                    maiorIdadeOtimo = idade;
                }
                break;
            case 'B':
                totalRespostasBom++;
                break;
            case 'C':
                totalRespostasRegular++;
                break;
            case 'D':
                totalRespostasRuim++;
                somaIdadeRuim += idade;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            case 'E':
                totalRespostasPessimo++;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            default:
                printf("Opiniao invalida. Tente novamente.\n");
                i--;
        }
    }

    printf("\nQuantidade de respostas Otimo: %d\n", totalRespostasOtimo);
    
    if (totalRespostasBom > totalRespostasRegular) {
        printf("Diferenca percentual entre respostas Bom e Regular: %.2f%%\n", ((float)(totalRespostasBom - totalRespostasRegular) / totalRespostasBom) * 100);
    } else {
        printf("Diferenca percentual entre respostas Bom e Regular: N/A (respostas Bom menor ou igual a Regular)\n");
    }

    if (totalRespostasRuim > 0) {
        float mediaIdadeRuim = (float)somaIdadeRuim / totalRespostasRuim;
        printf("Media de idade das pessoas que responderam Ruim: %.2f\n", mediaIdadeRuim);
    } else {
        printf("Media de idade das pessoas que responderam Ruim: N/A (nenhuma resposta Ruim)\n");
    }

    if (totalRespostasPessimo > 0) {
        float porcentagemPessimo = ((float)totalRespostasPessimo / 100) * 100;
        printf("Porcentagem de respostas Pessimo: %.2f%%\n", porcentagemPessimo);
        printf("Maior idade que respondeu Pessimo: %d\n", maiorIdadeRuim);
    } else {
        printf("Porcentagem de respostas Pessimo: N/A (nenhuma resposta Pessimo)\n");
        printf("Maior idade que respondeu Pessimo: N/A (nenhuma resposta Pessimo)\n");
    }

    printf("Diferença de idade entre a maior idade que respondeu Otimo e a maior idade que respondeu Ruim: %d anos\n", maiorIdadeOtimo - maiorIdadeRuim);
}
