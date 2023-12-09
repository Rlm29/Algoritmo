#include <stdio.h>

void converterIdade(int anos, int meses, int dias) {
    int idadeEmDias = anos * 365 + meses * 30 + dias;

    printf("Idade: %d anos, %d meses, %d dias, totalizando %d dias\n", anos, meses, dias, idadeEmDias);
}

int main() {
    int anos, meses, dias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    converterIdade(anos, meses, dias);

}

