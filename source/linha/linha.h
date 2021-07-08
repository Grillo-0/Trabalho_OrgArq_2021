#ifndef _LINHA_H_
#define _LINHA_H_
#include <stdio.h>
typedef struct linhaHeader {
    char status;
    long int byteProxReg;
    int nroRegistros;
    int nroRegRemovidos;
    char descreveCodigo[16];
    char descreveCartao[14];
    char descreveNome[14];
    char descreveLinha[25];
} linhaHeader;

typedef struct linha {
    char removido;
    int tamanhoRegistro;
    int codLinha;
    char aceitaCartao[5];  //Precaução para possiveis valores nulos "NULO\0"
    int tamanhoNome;
    char nomeLinha[100];
    int tamanhoCor;
    char corLinha[100];
} linha;

//Apenas as funcionalidades são expostas pela biblioteca
void SelectFrom_Linha(char nomeArquivoBin[100]);
void CreateTable_Linha(char nomeArquivoCSV[100], char nomeArquivoBin[100]);
void SelectFromWhere_Linha(char nomeArquivoBin[100], char* campo, char* valor);
void InsertInto_Linha(char nomeArquivoBin[100], int numeroDeEntradas);
void CreateIndex_Linha(char nomeArquivoBinRegistros[100], char nomeArquivoBinIndex[100]);
void SelectFromWithIndex_Linha(char nomeArquivoBinRegistros[100], char nomeArquivoBinIndex[100], int valorBusca);

#endif