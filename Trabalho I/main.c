/******************************************************************************************
@pedroarthur

Faça um programa que utiliza o TAD cofo (void*) e que permita as seguintes operações:
	
	-Criar um cofo;
	-Ler os dados de uma estrutura do tipo ___ e inserir no cofo;
	-Remover elementos do cofo por dois critérios de indentificação;
	-Consultar os dados de um elemento do cofo por dois critériosde indentificação
	-Listar todos os elementos do cofo;
	-Destruir o cofo.

******************************************************************************************/

#ifndef _MAIN_C
#define _MAIN_C
#include "cofo.h"
#include "aluno.h"
#include <stdio.h>

void main (void){

	aluno*a; cofo* c; char nome[30]; int mat; int stat;

	c = cCreate(50);
	if(c!=NULL){
		for(int i=0;i<5;i++){
			printf("Digite os dados do aluno: \n");
			scanf("%s %d", nome, &mat);
			a=(aluno*)malloc(sizeof(aluno));
			strcpy(a->nome, nome);
			a->matricula = mat;
			stat = cInsert(c,(void*)a);
		}
		printf("Digite a matrícula\n");
		scanf("%d", &mat);
		a = (aluno*)cQuery(c,(void**)&mat,compAlunoMat);
		if(a!=NULL){
			printf("O nome do aluno é %s",a->nome);
		}else{
			printf("\nAluno não está no cofo\n");
		}
		a = (aluno*)cGetFirst(c);
		while(a!=NULL){
			cRemove(c,(void*), &(a->mat), compAlunoMat(a=(aluno*)cGetFirst(c)));
		}
		cDestroy(c);
	}
}