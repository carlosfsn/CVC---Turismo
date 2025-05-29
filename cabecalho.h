#ifndef CABECALHO_H
#define CABECALHO_H

#define MAX 100
#define TAM_LINHA 150

typedef struct {
    int id;
    char destino[30];
    char dataSaida[11];
    char dataRetorno[11];
    float preco;
} Pacote;

void inserirPacote();
void buscarPacote();
void modificarPacote();
void removerPacote();
void listarPacotesOrdenados();
void salvarIndices();

#endif
