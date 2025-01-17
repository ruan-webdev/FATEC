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

void exibe_decrescente(Lista *L) {
	if (*L == NULL) return;
	exibe_decrescente(&(*L)->prox);
	printf ("%i ", (*L)->item);
}

void ins_rec(Item itemX, Lista *L){
	while (*L != NULL && (*L)->item < itemX)
		L = &(*L)->prox;	
	*L = no(itemX,*L);		
}

int main(void) {
	Lista I = NULL;
	ins_rec(3,&I); 
	ins_rec(9,&I); 
	ins_rec(5,&I);
	ins_rec(2,&I);
	exibe_decrescente(&I);
	printf ("\n");
	return 0;
}
