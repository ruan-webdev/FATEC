#include <stdio.h>
#include "pilha.h"
int main(void){
	int contador;
	int balanceado=1;
	Pilha p= pilha(255);
	char s[255];
	gets(s);
	for(int i=0;s[i]; i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			empilha(s[i],p);
		}else{
			char fecha;
			fecha=desempilha(p);
			if(s[i]==']' && fecha!='['){
				balanceado=0;
			}
			if(s[i]==')' && fecha!='('){
				balanceado=0;
			}
			if(s[i]=='}' && fecha!='{'){
				balanceado=0;
			}
		}
	}	

	if(balanceado){
		printf("Esta balanceada\n");
	}else{
		printf("Nao esta balenceada\n");
	}
}
