#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

void inserirPacote() {
    Pacote p;
    FILE *f = fopen("pacotes.txt", "a+");
    int id;

    printf("ID do pacote: ");
    scanf("%d", &p.id);
    getchar();

    printf("Destino: ");
    fgets(p.destino, sizeof(p.destino), stdin);
    p.destino[strcspn(p.destino, "\n")] = 0;

    printf("Data de Saida (DD/MM/AAAA): ");
    fgets(p.dataSaida, sizeof(p.dataSaida), stdin);
    p.dataSaida[strcspn(p.dataSaida, "\n")] = 0;

    printf("Data de Retorno (DD/MM/AAAA): ");
    fgets(p.dataRetorno, sizeof(p.dataRetorno), stdin);
    p.dataRetorno[strcspn(p.dataRetorno, "\n")] = 0;

    printf("Preco: ");
    scanf("%f", &p.preco);

    fprintf(f, "%05d|%s|%s|%s|%.2f\n", p.id, p.destino, p.dataSaida, p.dataRetorno, p.preco);

    fclose(f);
    printf("Pacote inserido com sucesso!\n");
}
