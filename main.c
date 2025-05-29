#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main() {
    int opcao;

    do {
        printf("\n==============================\n");
        printf("    CVC Turismo - Sistema     \n");
        printf("==============================\n");
        printf("1. Inserir Pacote\n");
        printf("2. Buscar Pacote\n");
        printf("3. Modificar Pacote\n");
        printf("4. Remover Pacote\n");
        printf("5. Listar Pacotes Ordenados\n");
        printf("6. Salvar Indices\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: inserirPacote(); break;
            case 2: buscarPacote(); break;
            case 3: modificarPacote(); break;
            case 4: removerPacote(); break;
            case 5: listarPacotesOrdenados(); break;
            case 6: salvarIndices(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
