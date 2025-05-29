#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

void removerPacote() {
    int id;
    int encontrado = 0;
    char linha[TAM_LINHA];

    printf("ID do pacote para remover: ");
    scanf("%d", &id);

    FILE *f = fopen("pacotes.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (f == NULL || temp == NULL) {
        printf("Erro ao abrir arquivos.\n");
        return;
    }

    while (fgets(linha, TAM_LINHA, f)) {
        int id_lido;
        sscanf(linha, "%d|", &id_lido);

        if (id_lido == id) {
            encontrado = 1;
        } else {
            fputs(linha, temp);
        }
    }

    fclose(f);
    fclose(temp);

    remove("pacotes.txt");
    rename("temp.txt", "pacotes.txt");

    if (encontrado) {
        printf("Pacote removido com sucesso!\n");
    } else {
        printf("Pacote nao encontrado.\n");
    }
}
