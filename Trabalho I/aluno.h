//Define STRUCT de Aluno e cria protótipos das funções

#ifndef _ALUNO_
#define _ALUNO_

typedef struct _ALUNO_{
	char nome[50];
	int matricula;
}aluno;

int compAlunoMat(void* a, void* b);
void* cGetFirst(cofo* c);
void* cGetNext(cofo* c);

#else 
 
	extern int compAlunoMat(void* a, void* b);
	extern void* cGetFirst(cofo* c);
	extern void* cGetNext(cofo* c);

#endif 

#define TRUE 1
#define FALSE 0