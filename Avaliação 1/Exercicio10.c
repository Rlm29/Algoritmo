#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 5

struct Cidade {
    int codigo;
    char estado[3];
    int veiculos;
    int acidentes;
};

main() {
    struct Cidade cidades[NUM_CIDADES];
    int i;
    int menorAcidentes = -1, maiorAcidentes = -1;
    int indiceMenorAcidentes = -1, indiceMaiorAcidentes = -1;
    int totalVeiculos = 0, totalAcidentesRS = 0;
    int numCidadesRS = 0;

    for (i = 0; i < NUM_CIDADES; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Codigo da cidade: ");
        scanf("%d", &cidades[i].codigo);
        printf("Estado (sigla): ");
        scanf("%s", cidades[i].estado);
        printf("Numero de veiculos de passeio (em 1992): ");
        scanf("%d", &cidades[i].veiculos);
        printf("Numero de acidentes com vitimas (em 1992): ");
        scanf("%d", &cidades[i].acidentes);

        totalVeiculos += cidades[i].veiculos;
        if (strcmp(cidades[i].estado, "RS") == 0) {
            totalAcidentesRS += cidades[i].acidentes;
            numCidadesRS++;
        }

        if (menorAcidentes == -1 || cidades[i].acidentes < menorAcidentes) {
            menorAcidentes = cidades[i].acidentes;
            indiceMenorAcidentes = i;
        }

        if (maiorAcidentes == -1 || cidades[i].acidentes > maiorAcidentes) {
            maiorAcidentes = cidades[i].acidentes;
            indiceMaiorAcidentes = i;
        }
    }

    printf("\nResultados:\n");
    printf("a) Menor indice de acidentes de transito: %d (Cidade %d, Estado: %s)\n", menorAcidentes, cidades[indiceMenorAcidentes].codigo, cidades[indiceMenorAcidentes].estado);
    printf("   Maior indice de acidentes de transito: %d (Cidade %d, Estado: %s)\n", maiorAcidentes, cidades[indiceMaiorAcidentes].codigo, cidades[indiceMaiorAcidentes].estado);
    
    float mediaVeiculos = (float)totalVeiculos / NUM_CIDADES;
    printf("b) Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    
    if (numCidadesRS > 0) {
        float mediaAcidentesRS = (float)totalAcidentesRS / numCidadesRS;
        printf("c) Media de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);
    } else {
        printf("c) Nao ha cidades do Rio Grande do Sul na amostra.\n");
    }

}
