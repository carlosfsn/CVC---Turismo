#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

typedef struct {
    int id;
    char linha[TAM_LINHA];
} Registro;

void listarPacotesOrdenados() {
    FILE *f = fopen("pacotes.txt", "r");
    if (f == NULL) {
        printf("Arquivo de dados nao encontrado.\n");
        return;
    }

    Registro registros[MAX];
    int qtd = 0;
    char linha[TAM_LINHA];
    int id;
    int i;
    int j;

    while (fgets(linha, TAM_LINHA, f)) {
        sscanf(linha, "%d|", &id);
        registros[qtd].id = id;
        strcpy(registros[qtd].linha, linha);
        qtd++;
    }

    fclose(f);

    for (i = 0; i < qtd - 1; i++) {
        for (j = i + 1; j < qtd; j++) {
            if (registros[i].id > registros[j].id) {
                Registro temp = registros[i];
                registros[i] = registros[j];
                registros[j] = temp;
            }
        }
    }

    printf("\n--- Lista de Pacotes Ordenados ---\n");
    for (i = 0; i < qtd; i++) {
        printf("%s", registros[i].linha);
    }
}
