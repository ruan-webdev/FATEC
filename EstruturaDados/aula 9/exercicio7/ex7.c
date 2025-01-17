#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
} 

void ins(Item x, Lista*L) {
	while( *L != NULL && (*L)->item < x )
	L = &(*L)->prox;
	*L = no(x,*L);
}

void exibe(Lista L) {
	while( L != NULL ) {
		printf("%d\n",L->item);
		L = L->prox;
	}
}

void rem_todo(Item x, Lista*L) {
	while( *L != NULL)
	if((*L)->item == x){
		Lista aux = *L;
		*L = aux->prox;
		free(aux);
	} else
		L = &(*L)->prox;
	}


int main(void) {
	Lista I = NULL;
	ins(4,&I); 
	ins(1,&I); 
	ins(3,&I); 
	ins(5,&I); 
	ins(2,&I);
	ins(3,&I); 
	ins(3,&I); 
	ins(3,&I); 
	ins(3,&I); 
	rem_todo(3,&I); // vai remover todos os valores relacionados a 3
	exibe(I);
	return 0;
}
