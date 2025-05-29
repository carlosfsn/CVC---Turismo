#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

void buscarPacote() {
    int id;
    char linha[TAM_LINHA];
    int encontrado = 0;

    printf("ID do pacote para buscar: ");
    scanf("%d", &id);

    FILE *f = fopen("pacotes.txt", "r");
    if (f == NULL) {
        printf("Arquivo de dados nao encontrado.\n");
        return;
    }

    while (fgets(linha, TAM_LINHA, f)) {
        int id_lido;
        sscanf(linha, "%d|", &id_lido);

        if (id_lido == id) {
            printf("Pacote encontrado: %s", linha);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Pacote nao encontrado.\n");
    }

    fclose(f);
}
