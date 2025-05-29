#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

void salvarIndices() {
    FILE *f = fopen("pacotes.txt", "r");
    FILE *indices = fopen("indices.txt", "w");

    if (f == NULL || indices == NULL) {
        printf("Erro ao abrir arquivos.\n");
        return;
    }

    char linha[TAM_LINHA];
    int id;

    while (fgets(linha, TAM_LINHA, f)) {
        sscanf(linha, "%d|", &id);
        fprintf(indices, "%05d\n", id);
    }

    fclose(f);
    fclose(indices);

    printf("Indices salvos no arquivo indices.txt\n");
}
