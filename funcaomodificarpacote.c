#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

void modificarPacote() {
    int id;
    int encontrado = 0;
    char linha[TAM_LINHA];
    FILE *f = fopen("pacotes.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (f == NULL || temp == NULL) {
        printf("Erro ao abrir arquivos.\n");
        return;
    }

    printf("ID do pacote para modificar: ");
    scanf("%d", &id);
    getchar();

    while (fgets(linha, TAM_LINHA, f)) {
        int id_lido;
        sscanf(linha, "%d|", &id_lido);

        if (id_lido == id) {
            Pacote p;
            p.id = id;

            printf("Novo destino: ");
            fgets(p.destino, sizeof(p.destino), stdin);
            p.destino[strcspn(p.destino, "\n")] = 0;

            printf("Nova data de Saida (DD/MM/AAAA): ");
            fgets(p.dataSaida, sizeof(p.dataSaida), stdin);
            p.dataSaida[strcspn(p.dataSaida, "\n")] = 0;

            printf("Nova data de Retorno (DD/MM/AAAA): ");
            fgets(p.dataRetorno, sizeof(p.dataRetorno), stdin);
            p.dataRetorno[strcspn(p.dataRetorno, "\n")] = 0;

            printf("Novo preco: ");
            scanf("%f", &p.preco);

            fprintf(temp, "%05d|%s|%s|%s|%.2f\n", p.id, p.destino, p.dataSaida, p.dataRetorno, p.preco);
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
        printf("Pacote modificado com sucesso!\n");
    } else {
        printf("Pacote nao encontrado.\n");
    }
}
