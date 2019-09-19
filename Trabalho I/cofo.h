//Define STRUCT do cofo e cria protótipos das funções

#ifndef _COFO_
#define _COFO_

	typedef struct _cofo_{
		int nElem;
		int maxElem;	
		int curElem;
		void** elem;  //Vetor de ponteiros
	}cofo;

//#ifndef _COFO_C

cofo* cCreate(int n);
int cInsert(cofo* c, void* elem);
int cDestroy(cofo*);
void* cQuery(cofo8 c, void* key, int(*comp)(void*, void*));
void* remove(cofo*c, void* key);
	

#else 
	extern cofo* cCreate(int n);
	extern int cInsert(cofo* c, void* elem);
	extern int cDestroy(cofo*);
	extern void* CQuery(cofo8 c, void* key, int(*comp)(void*, void*));
	extern void* remove(cofo*c, void* key); 

#endif 


#define TRUE 1
#define FALSE 0














