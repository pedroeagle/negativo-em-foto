#include "pgm.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
PGM imagem;
PGM * abrirArquivo(string path){

	FILE *arq = fopen(path.c_str(), "r");;
	if(arq == NULL){
		std::cout << "Problemas na criação/edição dos arquivos" <<std::endl;
		return NULL;
	}
	char  linha[4096], pixels[1000000];
	fgets(linha , 4096, arq);
	imagem.numeroMagico = linha;
	cout<<imagem.numeroMagico<<endl;

	fgets(linha, 4096, arq);
	imagem.comentario = linha;
	cout<<imagem.comentario<<endl;

	fscanf(arq, "%s", linha);
	imagem.altura = stoi(linha);
	cout<<imagem.altura<<endl;

	fgets(linha, 4096, arq);
	imagem.tamanho = stoi(linha);
	cout<<imagem.tamanho<<endl;

	fgets(linha, 4096, arq);
	imagem.cinza = stoi(linha);
	cout<<imagem.cinza<<endl;

	fgets(pixels, 1000000, arq);
	imagem.pixels = pixels;
	cout<<imagem.pixels<<endl;

	fclose(arq);

	
	
	return NULL;
}