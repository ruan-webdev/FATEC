#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv*dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d){
    Arv n = malloc(sizeof(struct arv));
    n->esq = e;
    n->item = x;
    n->dir = d;
    return n;
}

Item remmax(Arv*A) {
	if( *A == NULL ) abort();
	while( (*A)->dir!= NULL ) A = &(*A)->dir;
	Arv n = *A;
	Item x = n->item;
	*A = n->esq;
	free(n);
	return x;
}


int busca(Item x, Arv A) {
	if( A == NULL ) return 0;
	if( x == A->item ) return 1;
	if( x <= A->item ) return busca(x,A->esq);
	else return busca(x,A->dir);
}

void ins(Item x, Arv*A){
	if( *A == NULL ) *A = arv(NULL,x,NULL);
	else if( x <= (*A)->item ) ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
}

void rem(Item x, Arv*A) { // função de remocação na arvore
	if( *A == NULL ) return;
	if(x == (*A)->item ) {
		Arv n = *A;
		if( n->esq== NULL ) *A = n->dir;
		else if( n->dir== NULL ) *A = n->esq;
		else n->item = remmax(&n->esq);
		if( n != *A ) free(n);
	}else if( x <= (*A)->item ) rem(x,&(*A)->esq);
	else rem(x,&(*A)->dir);
}

void exibe_crescente(Arv A){
    if(A!=NULL){
        exibe_crescente(A->esq); // exibe os valores crescentes da subarvore da esquerda
        printf("%d ",A->item); // printa o valor da raiz da arvore
        exibe_crescente(A->dir); //exibe os valores crescentes da subarvore da esquerda
    }else{
        return;
    }
}

int main(void) {

	Arv I = NULL;
	Item x;
	while(1) {
		printf("item? ");
		scanf("%d",&x);
		if(x<0) break;
		ins(x,&I);
	}
	printf("\nAntes");
	exibe_crescente(I);
	printf("Item? ");
	scanf("%d", &x);
	rem(x,&I);
	printf("\nDepois: ");
	exibe_crescente(I);
	return 0;

}
