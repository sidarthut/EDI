//Recebe o tamanho do 'cofo' e retorna um vetor do tipo cofo de tamanho 'n';
cofo* cCreate(int n){
	cofo* c;
	c = (cofo*)malloc(sizeof(cofo));
	if(c!=NULL){
		c -> elem = (void**)malloc(sizeof(void)*n);
		if(c-> elem!= NULL){
			c-> maxElem = n;
			c-> nElem = 0;
			return c; 
		}return NULL;
	}
}


//Recebe um vetor do tipo 'cofo' e retorna 'TRUE' caso os seus elementos sejam desalocados
//e 'FALSE' caso ocorra algum erro.
int cDestroy(cofo* c){
	if(c!=NULL){
		if(c->nElem == 0){
			free(c->elem);
			free(c);
			return TRUE;
		}
	}return FALSE;
}


//Recebe um vetor do tipo 'cofo' e um elemento do tipo 'void*'e retorna 'TRUE' caso o elemento
//seja corretamente inserido no vetor e 'FALSE' em caso de erro.
int cInsert(cofo* c, void* elem){
	if(c!=NULL){
		if(c->nElem < c->maxElem){
			c->elem[c->nElem] = elem;
			c->nElem++;
			return TRUE 
		}
	}return FALSE;
}


//
void* CQuery(cofo* c, void* key, int(*comp)(void*, void*)){
	if(c!=NULL){
		if(c->nElem > 0){
			while (comp (c->elem[i], key)!=TRUE && i<c->nElem){
				i++;
			}
			if(comp(c->elem[i], key)==TRUE){
				return c->elem[i];
			}
		}
	}return NULL;
}


//
void* remove(cofo* c, void* key, int(*comp)(void*, void*)){
	int i=0; void* aux;
	if(c!=NULL){
		if(c->nElem>0){
			while(comp(c->elem[i], key)!= TRUE && i<c->nElem){
				i++;
			}
			if(comp(c->elem[i],key)==TRUE){
				aux = c->elem[i];
				for(i=0;i<c->nElem-1;i++){
					c->elem[i] = c->elem[i+1];
				}
				c->nElem--;
				return aux;
			}
		}
	}return NULL
}












