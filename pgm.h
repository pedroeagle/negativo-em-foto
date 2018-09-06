#ifndef PGM_H
#define PGM_H
#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct PGM
{
	string numeroMagico, comentario;
	int altura, tamanho, cinza;
	string pixels;
	
}PGM;

PGM * abrirArquivo(string path);
#endif