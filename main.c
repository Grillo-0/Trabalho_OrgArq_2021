#include <stdio.h>
#include <stdlib.h>
#include "source/veiculo/veiculo.h"
#include "source/linha/linha.h"
#include "source/utils/utils.h"

void menu() {
	int funcionalidade, n;
	char arquivoCSV[100];
	char arquivoBin[100];
	char nomeDoCampo[100];
	char valor[100];
	scanf("%d",&funcionalidade);
	switch (funcionalidade){
	case 1:
		scanf("%s %s", arquivoCSV, arquivoBin);
		CreateTable_Veiculo(arquivoCSV,arquivoBin);
		return;
		break;
	case 2:
		scanf("%s %s", arquivoCSV, arquivoBin);
		CreateTable_Linha(arquivoCSV,arquivoBin);
		return;
		break;
	case 3:
		scanf("%s", arquivoBin);
		SelectFrom_Veiculo(arquivoBin);
		return;
		break;
	case 4:
		scanf("%s", arquivoBin);
		SelectFrom_Linha(arquivoBin);
		return;
		break;
	case 5:
		scanf("%s", arquivoBin);
		scanf("%s", nomeDoCampo);
		scan_quote_string(valor);
		SelectFromWhere_Veiculo(arquivoBin,nomeDoCampo,valor);
		return;
		break;
	case 6:
		scanf("%s", arquivoBin);
		scanf("%s", nomeDoCampo);
		scan_quote_string(valor);
		SelectFromWhere_Linha(arquivoBin,nomeDoCampo,valor);
		return;
		break;
	case 7:
		scanf("%s", arquivoBin);
		scanf("%d", &n);
		InsertInto_Veiculo(arquivoBin, n);
		return;
		break;
	case 8:
		scanf("%s", arquivoBin);
		scanf("%d", &n);
		InsertInto_Linha(arquivoBin, n);
		return;
		break;
	default:
		break;
	}
}

int main() {
	menu();
	return 0;
}