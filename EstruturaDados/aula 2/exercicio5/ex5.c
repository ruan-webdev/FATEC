#include <stdio.h>
#include <string.h>
#include "pilha.h"
int main(void){
	Pilha P=pilha(5);
	char s[11];
	for(int i=1;i<=3;i++){
		printf("? ");
		gets(s);
		empilha(_strdup(s),P);
		free(s);
	}
	while(!vaziap(P)) puts(desempilha(P));
	return 0;
}
