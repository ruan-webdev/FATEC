#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(void){
	int n,maior=0;
	Pilha A= pilha(255);
	Pilha B= pilha(255);
	printf("Digite a quantidade de numeros desejados \n");
	scanf("%d",&n);
	printf("Digite os numeros reais: \n");
	for(int i=0;i<n; i++){
		int val;
		scanf("%d",&val);
		empilha(val,B);
	}
	
	
	for(int i=0;i<n; i++){
		
		int maior=0;
		int index=0;
		for(int j=0;j<=B->topo;j++){
			if(B->item[j]>maior){
				maior=B->item[j];
				index=j;
			}
		}

		int aux=B->item[B->topo];
		B->item[B->topo]=maior;
		B->item[index]=aux;

		empilha(desempilha(B),A);
	}
		
	while(!vaziap(A)){
	
		printf("%d ",desempilha(A));
	}

	printf("\n");
	
}
