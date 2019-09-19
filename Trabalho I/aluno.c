/***************************************************************

Funções especificas para teste de aluno e consulta de matrícula

****************************************************************/

//
void* cGetFirst(cofo* c){
	if(c!=NULL){
		c->curElem = 0;
		return c->elems[c->curElem];
	}return NULL;
}


//
void* cGetNext(cofo* c){
	if(c!=NULL){
		if(c->curElem< c-> nElem-1){
			c-> curElem++;
			return c-> elem[c->curElem];
		}return NULL;
	}
}


//
int compAlunoMat(void* a; void * b){
	aluno* pa;
	int* pb;
	pa = (aluno*)a;
	pb = (int*)b;
	if(pa->matricula == *pb){
		return TRUE;
	}else{
		return FALSE;
	}
}
