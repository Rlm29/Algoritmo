#include <stdio.h>

int main() {
    int anos, meses, dias;

    printf("Digite a idade em anos, meses e dias (separados por espacos): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    int idadeEmDias = anos * 365 + meses * 30 + dias;

    printf("A idade em dias %c: %d dias\n", 130, idadeEmDias);
}
