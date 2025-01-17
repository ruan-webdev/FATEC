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

void insercao_sr(Item itemAlt, Lista *L){
	while (*L != NULL && (*L)->item < itemAlt){
		L = &(*L)->prox;
	}
	if (*L == NULL || (*L)->item != itemAlt)	
		*L = no(itemAlt,*L);
}

int main(void) {
	Lista I = NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	insercao_sr(3,&I); // repetido
	insercao_sr(8,&I); // valor novo que deve ser inserido
	insercao_sr(5,&I); // repetido
	insercao_sr(2,&I); // repetido
	exibe(I);
	return 0;
}
