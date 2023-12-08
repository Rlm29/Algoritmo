#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char matricula[20];
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[10][50];

    // Cadastrar as informações
    printf("Nome: ");
    scanf(" %[^\n]s", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Matricula: ");
    scanf(" %[^\n]s", matricula);

    printf("Endereco: ");
    scanf(" %[^\n]s", endereco);

    printf("Curso: ");
    scanf(" %[^\n]s", curso);

    printf("Periodo: ");
    scanf(" %[^\n]s", periodo);

    printf("Quantidade de disciplinas: ");
    int numDisciplinas;
    scanf("%d", &numDisciplinas);

    for (int i = 0; i < numDisciplinas; ++i) {
        printf("Digite a disciplina %d: ", i + 1);
        scanf(" %[^\n]s", disciplinas[i]);
    }

    printf("\nInformacoes do Cadastro:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %s\n", matricula);
    printf("Endereco: %s\n", endereco);
    printf("Curso: %s\n", curso);
    printf("Periodo: %s\n", periodo);

    printf("Disciplinas:\n");
    for (int i = 0; i < numDisciplinas; ++i) {
        printf("Disciplina %d: %s\n", i + 1, disciplinas[i]);
    }

}
