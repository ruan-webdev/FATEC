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

void exibe(Arv A,int n) {
    if( A==NULL ) return;
    exibe(A->dir,n+1);
    printf("%*s%d\n",3*n,"",A->item);
    exibe(A->esq,n+1);
}

void ins(Item x, Arv*A){
	if( *A == NULL ) *A = arv(NULL,x,NULL);
	else if( x <= (*A)->item ) ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
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
	exibe_crescente(I);
	return 0;

}
