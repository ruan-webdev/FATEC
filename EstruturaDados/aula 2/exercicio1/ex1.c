#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(void){
	Pilha p= pilha(255);
	char s[255];
	printf("Digite a palavra que deseja inverter:\n");
	gets(s);
	for(int i=0;s[i]; i++){
		if(s[i]==' '){
			while(!vaziap(p))
				printf("%c",desempilha(p));
			printf(" ");
		}else{
			empilha(s[i],p);
		}
	}	
	while(!vaziap(p))
			printf("%c",desempilha(p));
	printf("\n");
}
