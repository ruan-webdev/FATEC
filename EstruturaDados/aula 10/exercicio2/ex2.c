#include <stdio.h>
#include <stdlib.h>

typedef int Item;
	typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv*dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d) {
	Arv n = malloc(sizeof(struct arv));
	n->esq= e;
	n->item = x;
	n->dir = d;
	return n;
}

int nos(Arv A){ //função recursiva que devolve a quantidade de nós
	if(A == NULL){ 
		return 0;
	}
	return 1+nos(A->esq) + nos(A->dir);	 // retorna a quantidade de nós, somando os valores de esquerda e direita
}

void exibe(Arv A,int n) {
	if( A==NULL ) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int main(void) {
	Arv I = arv(arv(NULL,
		2,
			NULL),
		1,
			arv(NULL,
		3,
			arv(NULL,
		4,
			NULL)));
	printf("Quantidade de nos = %d ",nos(I));
	printf("\n");
	return 0;
}
