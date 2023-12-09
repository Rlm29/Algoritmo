#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 1000

struct Usuario {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

struct Usuario usuarios[MAX_USUARIOS];

int numUsuarios = 0;

int gerarId() {
    return rand();
}

int validarEmail(char *email) {
    char *arroba = strchr(email, '@');
    return (arroba != NULL);
}

int validarSexo(char *sexo) {
    return (strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "Indiferente") == 0);
}

int validarAltura(double altura) {
    return (altura >= 1.0 && altura <= 2.0);
}

int validarVacina(int vacina) {
    return (vacina == 0 || vacina == 1);
}

void incluirUsuario() {
    if (numUsuarios < MAX_USUARIOS) {
        struct Usuario novoUsuario;

        novoUsuario.id = gerarId();

        printf("Nome completo: ");
        scanf(" %[^\n]s", novoUsuario.nome);

        printf("Email: ");
        scanf("%s", novoUsuario.email);

        while (!validarEmail(novoUsuario.email)) {
            printf("Email invalido. Digite novamente: ");
            scanf("%s", novoUsuario.email);
        }

        printf("Sexo (Feminino, Masculino, Indiferente): ");
        scanf("%s", novoUsuario.sexo);

        while (!validarSexo(novoUsuario.sexo)) {
            printf("Sexo invalido. Digite novamente: ");
            scanf("%s", novoUsuario.sexo);
        }

        printf("Endereco: ");
        scanf(" %[^\n]s", novoUsuario.endereco);

        printf("Altura (entre 1 e 2 metros): ");
        scanf("%lf", &novoUsuario.altura);

        while (!validarAltura(novoUsuario.altura)) {
            printf("Altura invalida. Digite novamente: ");
            scanf("%lf", &novoUsuario.altura);
        }

        printf("Vacina (1 para sim, 0 para nao): ");
        scanf("%d", &novoUsuario.vacina);

        while (!validarVacina(novoUsuario.vacina)) {
            printf("Opcao de vacina invalida. Digite novamente: ");
            scanf("%d", &novoUsuario.vacina);
        }

        usuarios[numUsuarios++] = novoUsuario;
        printf("Usuario cadastrado com sucesso.\n");
    } else {
        printf("Limite maximo de usuarios atingido.\n");
    }
}

void editarUsuario() {
    int id;
    printf("Digite o ID do usuario que deseja editar: ");
    scanf("%d", &id);

    int indice = -1;
    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == id) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        printf("Novo nome completo: ");
        scanf(" %[^\n]s", usuarios[indice].nome);

        printf("Novo email: ");
        scanf("%s", usuarios[indice].email);

        while (!validarEmail(usuarios[indice].email)) {
            printf("Email invalido. Digite novamente: ");
            scanf("%s", usuarios[indice].email);
        }

        printf("Novo sexo (Feminino, Masculino, Indiferente): ");
        scanf("%s", usuarios[indice].sexo);

        while (!validarSexo(usuarios[indice].sexo)) {
            printf("Sexo invalido. Digite novamente: ");
            scanf("%s", usuarios[indice].sexo);
        }

        printf("Novo endereco: ");
        scanf(" %[^\n]s", usuarios[indice].endereco);

        printf("Nova altura (entre 1 e 2 metros): ");
        scanf("%lf", &usuarios[indice].altura);

        while (!validarAltura(usuarios[indice].altura)) {
            printf("Altura invalida. Digite novamente: ");
            scanf("%lf", &usuarios[indice].altura);
        }

        printf("Nova opcao de vacina (1 para sim, 0 para nao): ");
        scanf("%d", &usuarios[indice].vacina);

        while (!validarVacina(usuarios[indice].vacina)) {
            printf("Opcao de vacina invalida. Digite novamente: ");
            scanf("%d", &usuarios[indice].vacina);
        }

        printf("Usuario editado com sucesso.\n");
    } else {
        printf("Usuario nao encontrado.\n");
    }
}

void excluirUsuario() {
    int id;
    printf("Digite o ID do usuario que deseja excluir: ");
    scanf("%d", &id);

    int indice = -1;
    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == id) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        for (int i = indice; i < numUsuarios - 1; i++) {
            usuarios[i] = usuarios[i + 1];
        }

        numUsuarios--;
        printf("Usuario excluido com sucesso.\n");
    } else {
        printf("Usuario nao encontrado.\n");
    }
}

void buscarUsuario() {
    char email[50];
    printf("Digite o email do usuario que deseja buscar: ");
    scanf("%s", email);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].email, email) == 0) {
            printf("Usuario encontrado:\n");
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuario nao encontrado.\n");
    }
}

void imprimirUsuarios() {
    if (numUsuarios > 0) {
        printf("Lista de Usuarios:\n");
        for (int i = 0; i < numUsuarios; i++) {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            printf("\n");
        }
    } else {
        printf("Nenhum usuario cadastrado.\n");
    }
}

int main() {
    char opcao;
    do {
        printf("\nMENU:\n");
        printf("1. Incluir Usuario\n");
        printf("2. Editar Usuario\n");
        printf("3. Excluir Usuario\n");
        printf("4. Buscar Usuario\n");
        printf("5. Imprimir Todos os Usuarios\n");
        printf("6. Sair\n");

        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario();
                break;
            case '2':
                editarUsuario();
                break;
            case '3':
                excluirUsuario();
                break;
            case '4':
                buscarUsuario();
                break;
            case '5':
                imprimirUsuarios();
                break;
            case '6':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção invalida. Tente novamente.\n");
        }
    } while (opcao != '6');
}
